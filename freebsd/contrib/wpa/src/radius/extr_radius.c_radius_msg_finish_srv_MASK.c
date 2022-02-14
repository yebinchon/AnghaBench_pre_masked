
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct radius_msg {int buf; TYPE_1__* hdr; } ;
struct radius_hdr {int dummy; } ;
struct radius_attr_hdr {int dummy; } ;
struct TYPE_2__ {int authenticator; int length; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int const*,size_t,int ,int,int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int const**,size_t*,int ) ;
 int FUNC_3 (int ,int const*,int) ;
 int FUNC_4 (int *,int ,int) ;
 struct radius_attr_hdr* FUNC_5 (struct radius_msg*,int ,int *,int) ;
 int FUNC_6 (int ,char*,...) ;
 int FUNC_7 (int ) ;
 int * FUNC_8 (int ) ;
 int FUNC_9 (int ) ;

int FUNC_10(struct radius_msg *VAR_4, const u8 *VAR_5,
     size_t VAR_6, const u8 *VAR_7)
{
 u8 VAR_8[VAR_0];
 struct radius_attr_hdr *VAR_9;
 const u8 *VAR_10[4];
 size_t VAR_11[4];

 FUNC_4(VAR_8, 0, VAR_0);
 VAR_9 = FUNC_5(VAR_4, VAR_3,
       VAR_8, VAR_0);
 if (VAR_9 == ((void*)0)) {
  FUNC_6(VAR_1, "WARNING: Could not add Message-Authenticator");
  return -1;
 }
 VAR_4->hdr->length = FUNC_1(FUNC_9(VAR_4->buf));
 FUNC_3(VAR_4->hdr->authenticator, VAR_7,
    sizeof(VAR_4->hdr->authenticator));
 FUNC_0(VAR_5, VAR_6, FUNC_7(VAR_4->buf),
   FUNC_9(VAR_4->buf), (u8 *) (VAR_9 + 1));


 VAR_10[0] = (u8 *) VAR_4->hdr;
 VAR_11[0] = 1 + 1 + 2;
 VAR_10[1] = VAR_7;
 VAR_11[1] = VAR_0;
 VAR_10[2] = FUNC_8(VAR_4->buf) + sizeof(struct radius_hdr);
 VAR_11[2] = FUNC_9(VAR_4->buf) - sizeof(struct radius_hdr);
 VAR_10[3] = VAR_5;
 VAR_11[3] = VAR_6;
 FUNC_2(4, VAR_10, VAR_11, VAR_4->hdr->authenticator);

 if (FUNC_9(VAR_4->buf) > 0xffff) {
  FUNC_6(VAR_2, "RADIUS: Too long message (%lu)",
      (unsigned long) FUNC_9(VAR_4->buf));
  return -1;
 }
 return 0;
}
