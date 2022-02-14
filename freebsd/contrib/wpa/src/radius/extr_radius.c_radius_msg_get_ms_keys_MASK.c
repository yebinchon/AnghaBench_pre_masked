
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct radius_msg {TYPE_1__* hdr; } ;
struct radius_ms_mppe_keys {void* recv; int recv_len; void* send; int send_len; } ;
struct TYPE_2__ {int authenticator; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (int *,size_t,int ,int const*,size_t,int *) ;
 int FUNC_1 (int *) ;
 struct radius_ms_mppe_keys* FUNC_2 (int) ;
 int * FUNC_3 (struct radius_msg*,int ,int ,size_t*) ;
 int FUNC_4 (int ,char*) ;

struct radius_ms_mppe_keys *
FUNC_5(struct radius_msg *VAR_4, struct radius_msg *VAR_5,
         const u8 *VAR_6, size_t VAR_7)
{
 u8 *VAR_8;
 size_t VAR_9;
 struct radius_ms_mppe_keys *VAR_10;

 if (VAR_4 == ((void*)0) || VAR_5 == ((void*)0))
  return ((void*)0);

 VAR_10 = FUNC_2(sizeof(*VAR_10));
 if (VAR_10 == ((void*)0))
  return ((void*)0);

 VAR_8 = FUNC_3(VAR_4, VAR_3,
      VAR_2,
      &VAR_9);
 if (VAR_8) {
  VAR_10->send = FUNC_0(VAR_8, VAR_9,
         VAR_5->hdr->authenticator,
         VAR_6, VAR_7,
         &VAR_10->send_len);
  if (!VAR_10->send) {
   FUNC_4(VAR_0,
       "RADIUS: Failed to decrypt send key");
  }
  FUNC_1(VAR_8);
 }

 VAR_8 = FUNC_3(VAR_4, VAR_3,
      VAR_1,
      &VAR_9);
 if (VAR_8) {
  VAR_10->recv = FUNC_0(VAR_8, VAR_9,
         VAR_5->hdr->authenticator,
         VAR_6, VAR_7,
         &VAR_10->recv_len);
  if (!VAR_10->recv) {
   FUNC_4(VAR_0,
       "RADIUS: Failed to decrypt recv key");
  }
  FUNC_1(VAR_8);
 }

 return VAR_10;
}
