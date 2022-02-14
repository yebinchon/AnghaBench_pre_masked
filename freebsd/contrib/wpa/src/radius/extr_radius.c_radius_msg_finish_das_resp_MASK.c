
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct radius_msg {int buf; TYPE_1__* hdr; } ;
struct radius_hdr {int authenticator; } ;
struct radius_attr_hdr {int dummy; } ;
struct TYPE_2__ {int authenticator; int length; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int const*,size_t,int ,int,int *) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int,int const**,size_t*,int ) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int *,int ,int) ;
 struct radius_attr_hdr* FUNC_5 (struct radius_msg*,int ,int *,int) ;
 int FUNC_6 (int ,char*,...) ;
 int FUNC_7 (int ) ;
 int * FUNC_8 (int ) ;
 int FUNC_9 (int ) ;

int FUNC_10(struct radius_msg *VAR_3, const u8 *VAR_4,
          size_t VAR_5,
          const struct radius_hdr *VAR_6)
{
 const u8 *VAR_7[2];
 size_t VAR_8[2];
 u8 VAR_9[VAR_0];
 struct radius_attr_hdr *VAR_10;

 FUNC_4(VAR_9, 0, VAR_0);
 VAR_10 = FUNC_5(VAR_3, VAR_2,
       VAR_9, VAR_0);
 if (VAR_10 == ((void*)0)) {
  FUNC_6(VAR_1, "Could not add Message-Authenticator");
  return -1;
 }

 VAR_3->hdr->length = FUNC_1(FUNC_9(VAR_3->buf));
 FUNC_3(VAR_3->hdr->authenticator, VAR_6->authenticator, 16);
 FUNC_0(VAR_4, VAR_5, FUNC_7(VAR_3->buf),
   FUNC_9(VAR_3->buf), (u8 *) (VAR_10 + 1));


 VAR_7[0] = FUNC_8(VAR_3->buf);
 VAR_8[0] = FUNC_9(VAR_3->buf);
 VAR_7[1] = VAR_4;
 VAR_8[1] = VAR_5;
 if (FUNC_2(2, VAR_7, VAR_8, VAR_3->hdr->authenticator) < 0)
  return -1;

 if (FUNC_9(VAR_3->buf) > 0xffff) {
  FUNC_6(VAR_1, "RADIUS: Too long message (%lu)",
      (unsigned long) FUNC_9(VAR_3->buf));
  return -1;
 }
 return 0;
}
