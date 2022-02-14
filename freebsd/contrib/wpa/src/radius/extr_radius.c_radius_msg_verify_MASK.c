
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct radius_msg {TYPE_1__* hdr; int buf; } ;
struct radius_hdr {int dummy; } ;
struct TYPE_2__ {int * authenticator; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int,int const**,size_t*,int *) ;
 scalar_t__ FUNC_1 (int *,int *,int) ;
 scalar_t__ FUNC_2 (struct radius_msg*,int const*,size_t,int *) ;
 int FUNC_3 (int ,char*) ;
 int * FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

int FUNC_6(struct radius_msg *VAR_2, const u8 *VAR_3,
        size_t VAR_4, struct radius_msg *VAR_5, int VAR_6)
{
 const u8 *VAR_7[4];
 size_t VAR_8[4];
 u8 VAR_9[VAR_0];

 if (VAR_5 == ((void*)0)) {
  FUNC_3(VAR_1, "No matching Access-Request message found");
  return 1;
 }

 if (VAR_6 &&
     FUNC_2(VAR_2, VAR_3, VAR_4,
           VAR_5->hdr->authenticator)) {
  return 1;
 }


 VAR_7[0] = (u8 *) VAR_2->hdr;
 VAR_8[0] = 1 + 1 + 2;
 VAR_7[1] = VAR_5->hdr->authenticator;
 VAR_8[1] = VAR_0;
 VAR_7[2] = FUNC_4(VAR_2->buf) + sizeof(struct radius_hdr);
 VAR_8[2] = FUNC_5(VAR_2->buf) - sizeof(struct radius_hdr);
 VAR_7[3] = VAR_3;
 VAR_8[3] = VAR_4;
 if (FUNC_0(4, VAR_7, VAR_8, VAR_9) < 0 ||
     FUNC_1(VAR_9, VAR_2->hdr->authenticator, VAR_0) != 0) {
  FUNC_3(VAR_1, "Response Authenticator invalid!");
  return 1;
 }

 return 0;
}
