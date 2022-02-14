
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {scalar_t__ data; } ;
struct garp_attr_hdr {int len; int event; int data; } ;
struct garp_attr {int dummy; } ;
struct garp_applicant {TYPE_1__* app; } ;
typedef enum garp_event { ____Placeholder_garp_event } garp_event ;
struct TYPE_2__ {int maxattr; } ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;




 int FUNC_0 (struct garp_applicant*,struct garp_attr*,int) ;
 struct garp_attr* FUNC_1 (struct garp_applicant*,int ,unsigned int,int ) ;
 int FUNC_2 (struct garp_applicant*,int) ;
 int FUNC_3 (struct sk_buff*,int) ;
 int FUNC_4 (struct sk_buff*,int) ;

__attribute__((used)) static int FUNC_5(struct garp_applicant *VAR_4, struct sk_buff *VAR_5,
          u8 VAR_6)
{
 const struct garp_attr_hdr *VAR_7;
 struct garp_attr *VAR_8;
 enum garp_event VAR_9;
 unsigned int VAR_10;

 if (!FUNC_3(VAR_5, sizeof(*VAR_7)))
  return -1;
 VAR_7 = (struct garp_attr_hdr *)VAR_5->data;
 if (VAR_7->len < sizeof(*VAR_7))
  return -1;

 if (!FUNC_3(VAR_5, VAR_7->len))
  return -1;
 FUNC_4(VAR_5, VAR_7->len);
 VAR_10 = sizeof(*VAR_7) - VAR_7->len;

 if (VAR_6 > VAR_4->app->maxattr)
  return 0;

 switch (VAR_7->event) {
 case 129:
  if (VAR_10 != 0)
   return -1;
  FUNC_2(VAR_4, VAR_3);
  return 0;
 case 131:
  VAR_9 = VAR_1;
  break;
 case 130:
  VAR_9 = VAR_2;
  break;
 case 128:
  VAR_9 = VAR_3;
  break;
 case 132:
  VAR_9 = VAR_0;
  break;
 default:
  return 0;
 }

 if (VAR_10 == 0)
  return -1;
 VAR_8 = FUNC_1(VAR_4, VAR_7->data, VAR_10, VAR_6);
 if (VAR_8 == ((void*)0))
  return 0;
 FUNC_0(VAR_4, VAR_8, VAR_9);
 return 0;
}
