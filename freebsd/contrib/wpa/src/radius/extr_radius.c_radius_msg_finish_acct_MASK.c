
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct radius_msg {int buf; TYPE_1__* hdr; } ;
struct TYPE_2__ {int authenticator; int length; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int const**,size_t*,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,char*,unsigned long) ;
 int * FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

void FUNC_6(struct radius_msg *VAR_2, const u8 *VAR_3,
       size_t VAR_4)
{
 const u8 *VAR_5[2];
 size_t VAR_6[2];

 VAR_2->hdr->length = FUNC_0(FUNC_5(VAR_2->buf));
 FUNC_2(VAR_2->hdr->authenticator, 0, VAR_0);
 VAR_5[0] = FUNC_4(VAR_2->buf);
 VAR_6[0] = FUNC_5(VAR_2->buf);
 VAR_5[1] = VAR_3;
 VAR_6[1] = VAR_4;
 FUNC_1(2, VAR_5, VAR_6, VAR_2->hdr->authenticator);

 if (FUNC_5(VAR_2->buf) > 0xffff) {
  FUNC_3(VAR_1, "RADIUS: Too long messages (%lu)",
      (unsigned long) FUNC_5(VAR_2->buf));
 }
}
