
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct user_key_payload {size_t datalen; int rcu; int data; } ;
struct TYPE_2__ {struct user_key_payload* data; } ;
struct key {scalar_t__ expiry; TYPE_1__ payload; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct key*,size_t) ;
 struct user_key_payload* FUNC_2 (int,int ) ;
 int FUNC_3 (int ,void const*,size_t) ;
 int FUNC_4 (struct key*,struct user_key_payload*) ;
 int VAR_3 ;

int FUNC_5(struct key *VAR_4, const void *VAR_5, size_t VAR_6)
{
 struct user_key_payload *VAR_7, *VAR_8;
 int VAR_9;

 VAR_9 = -VAR_0;
 if (VAR_6 <= 0 || VAR_6 > 32767 || !VAR_5)
  goto error;


 VAR_9 = -VAR_1;
 VAR_7 = FUNC_2(sizeof(*VAR_7) + VAR_6, VAR_2);
 if (!VAR_7)
  goto error;

 VAR_7->datalen = VAR_6;
 FUNC_3(VAR_7->data, VAR_5, VAR_6);


 VAR_8 = VAR_7;

 VAR_9 = FUNC_1(VAR_4, VAR_6);

 if (VAR_9 == 0) {

  VAR_8 = VAR_4->payload.data;
  FUNC_4(VAR_4, VAR_7);
  VAR_4->expiry = 0;
 }

 if (VAR_8)
  FUNC_0(&VAR_8->rcu, VAR_3);

error:
 return VAR_9;
}
