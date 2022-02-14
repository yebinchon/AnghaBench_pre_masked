
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct radius_msg {int buf; TYPE_1__* hdr; } ;
struct radius_attr_hdr {int dummy; } ;
struct TYPE_2__ {void* length; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int const*,size_t,int ,int,int *) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (int *,int ,int) ;
 struct radius_attr_hdr* FUNC_3 (struct radius_msg*,int ,int *,int) ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

int FUNC_7(struct radius_msg *VAR_3, const u8 *VAR_4,
        size_t VAR_5)
{
 if (VAR_4) {
  u8 VAR_6[VAR_0];
  struct radius_attr_hdr *VAR_7;

  FUNC_2(VAR_6, 0, VAR_0);
  VAR_7 = FUNC_3(VAR_3,
        VAR_2,
        VAR_6, VAR_0);
  if (VAR_7 == ((void*)0)) {
   FUNC_4(VAR_1, "RADIUS: Could not add "
       "Message-Authenticator");
   return -1;
  }
  VAR_3->hdr->length = FUNC_1(FUNC_6(VAR_3->buf));
  FUNC_0(VAR_4, VAR_5, FUNC_5(VAR_3->buf),
    FUNC_6(VAR_3->buf), (u8 *) (VAR_7 + 1));
 } else
  VAR_3->hdr->length = FUNC_1(FUNC_6(VAR_3->buf));

 if (FUNC_6(VAR_3->buf) > 0xffff) {
  FUNC_4(VAR_1, "RADIUS: Too long message (%lu)",
      (unsigned long) FUNC_6(VAR_3->buf));
  return -1;
 }
 return 0;
}
