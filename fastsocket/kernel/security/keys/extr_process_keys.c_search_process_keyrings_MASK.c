
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct request_key_auth {struct cred* cred; } ;
struct key_type {int dummy; } ;
struct cred {TYPE_2__* request_key_auth; } ;
typedef scalar_t__ key_ref_t ;
typedef int key_match_func_t ;
struct TYPE_3__ {struct request_key_auth* data; } ;
struct TYPE_4__ {int sem; TYPE_1__ payload; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 struct cred const* FUNC_2 () ;
 int FUNC_3 (int *) ;
 struct key_type VAR_2 ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (struct key_type*,void const*,int ,int,struct cred const*) ;
 int FUNC_7 (int *) ;

key_ref_t FUNC_8(struct key_type *VAR_3,
      const void *VAR_4,
      key_match_func_t VAR_5,
      const struct cred *VAR_6)
{
 struct request_key_auth *VAR_7;
 key_ref_t VAR_8, VAR_9 = FUNC_0(-VAR_0), VAR_10;

 FUNC_5();

 VAR_8 = FUNC_6(VAR_3, VAR_4, VAR_5,
          0, VAR_6);
 if (!FUNC_1(VAR_8))
  goto found;
 VAR_10 = VAR_8;





 if (VAR_6->request_key_auth &&
     VAR_6 == FUNC_2() &&
     VAR_3 != &VAR_2
     ) {

  FUNC_3(&VAR_6->request_key_auth->sem);

  if (FUNC_4(VAR_6->request_key_auth) == 0) {
   VAR_7 = VAR_6->request_key_auth->payload.data;

   VAR_8 = FUNC_8(VAR_3, VAR_4,
         VAR_5, VAR_7->cred);

   FUNC_7(&VAR_6->request_key_auth->sem);

   if (!FUNC_1(VAR_8))
    goto found;

   VAR_9 = VAR_8;
  } else {
   FUNC_7(&VAR_6->request_key_auth->sem);
  }
 }


 if (VAR_10 == FUNC_0(-VAR_1) || VAR_9 == FUNC_0(-VAR_1))
  VAR_8 = FUNC_0(-VAR_1);
 else if (VAR_10 == FUNC_0(-VAR_0))
  VAR_8 = VAR_9;
 else
  VAR_8 = VAR_10;

found:
 return VAR_8;
}
