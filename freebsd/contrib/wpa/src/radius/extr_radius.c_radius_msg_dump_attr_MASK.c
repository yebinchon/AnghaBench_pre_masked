
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radius_attr_type {char* name; int data_type; } ;
struct radius_attr_hdr {int length; int type; } ;
struct in_addr {int dummy; } ;
struct in6_addr {int dummy; } ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;






 int FUNC_0 (unsigned char*) ;
 int FUNC_1 (struct in_addr) ;
 char* FUNC_2 (int ,struct in6_addr*,char*,int) ;
 int FUNC_3 (struct in_addr*,unsigned char*,int) ;
 int FUNC_4 (char*,int,unsigned char*,int) ;
 struct radius_attr_type* FUNC_5 (int ) ;
 int FUNC_6 (int ,char*,...) ;
 int FUNC_7 (char*,int,unsigned char*,int) ;

__attribute__((used)) static void FUNC_8(struct radius_attr_hdr *VAR_2)
{
 const struct radius_attr_type *VAR_3;
 int VAR_4;
 unsigned char *VAR_5;
 char VAR_6[1000];

 VAR_3 = FUNC_5(VAR_2->type);

 FUNC_6(VAR_1, "   Attribute %d (%s) length=%d",
     VAR_2->type, VAR_3 ? VAR_3->name : "?Unknown?", VAR_2->length);

 if (VAR_3 == ((void*)0) || VAR_2->length < sizeof(struct radius_attr_hdr))
  return;

 VAR_4 = VAR_2->length - sizeof(struct radius_attr_hdr);
 VAR_5 = (unsigned char *) (VAR_2 + 1);

 switch (VAR_3->data_type) {
 case 129:
  FUNC_4(VAR_6, sizeof(VAR_6), VAR_5, VAR_4);
  FUNC_6(VAR_1, "      Value: '%s'", VAR_6);
  break;

 case 131:
  if (VAR_4 == 4) {
   struct in_addr VAR_7;
   FUNC_3(&VAR_7, VAR_5, 4);
   FUNC_6(VAR_1, "      Value: %s",
       FUNC_1(VAR_7));
  } else {
   FUNC_6(VAR_1, "      Invalid IP address length %d",
       VAR_4);
  }
  break;
 case 133:
 case 128:
  FUNC_7(VAR_6, sizeof(VAR_6), VAR_5, VAR_4);
  FUNC_6(VAR_1, "      Value: %s", VAR_6);
  break;

 case 132:
  if (VAR_4 == 4)
   FUNC_6(VAR_1, "      Value: %u",
       FUNC_0(VAR_5));
  else
   FUNC_6(VAR_1, "      Invalid INT32 length %d",
       VAR_4);
  break;

 default:
  break;
 }
}
