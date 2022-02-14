
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct radius_msg {TYPE_1__* hdr; } ;
struct radius_ms_mppe_keys {int recv_len; int recv; } ;
struct TYPE_2__ {int authenticator; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,size_t,int ,int const*,size_t,int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,char*,int) ;
 struct radius_ms_mppe_keys* FUNC_3 (int) ;
 int * FUNC_4 (struct radius_msg*,int ,int ,size_t*) ;

struct radius_ms_mppe_keys *
FUNC_5(struct radius_msg *VAR_2, struct radius_msg *VAR_3,
     const u8 *VAR_4, size_t VAR_5)
{
 u8 *VAR_6;
 size_t VAR_7;
 struct radius_ms_mppe_keys *VAR_8;

 if (VAR_2 == ((void*)0) || VAR_3 == ((void*)0))
  return ((void*)0);

 VAR_8 = FUNC_3(sizeof(*VAR_8));
 if (VAR_8 == ((void*)0))
  return ((void*)0);

 VAR_6 = FUNC_4(VAR_2, VAR_1,
      VAR_0, &VAR_7);
 if (VAR_6 && VAR_7 == 51 &&
     FUNC_2(VAR_6, "leap:session-key=", 17) == 0) {
  VAR_8->recv = FUNC_0(VAR_6 + 17, VAR_7 - 17,
         VAR_3->hdr->authenticator,
         VAR_4, VAR_5,
         &VAR_8->recv_len);
 }
 FUNC_1(VAR_6);

 return VAR_8;
}
