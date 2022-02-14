
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct request_key_auth {TYPE_2__* target_key; } ;
struct TYPE_3__ {struct request_key_auth* data; } ;
struct key {TYPE_1__ payload; } ;
struct iovec {int dummy; } ;
struct cred {struct key* request_key_auth; } ;
typedef scalar_t__ key_serial_t ;
struct TYPE_4__ {scalar_t__ serial; } ;


 long VAR_0 ;
 long VAR_1 ;
 long VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 long FUNC_0 (void*,struct iovec const*,unsigned int) ;
 struct cred* FUNC_1 () ;
 long FUNC_2 (scalar_t__,struct request_key_auth*,struct key**) ;
 int FUNC_3 (char*,scalar_t__,size_t,scalar_t__) ;
 long FUNC_4 (TYPE_2__*,void*,size_t,struct key*,struct key*) ;
 int FUNC_5 (struct key*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (void*) ;
 void* FUNC_8 (size_t,int ) ;
 int FUNC_9 (void*) ;
 void* FUNC_10 (size_t) ;

long FUNC_11(key_serial_t VAR_5,
       const struct iovec *VAR_6,
       unsigned VAR_7,
       size_t VAR_8,
       key_serial_t VAR_9)
{
 const struct cred *VAR_10 = FUNC_1();
 struct request_key_auth *VAR_11;
 struct key *VAR_12, *VAR_13;
 void *VAR_14;
 long VAR_15;
 bool VAR_16 = 0;

 FUNC_3("%d,,%zu,%d", VAR_5, VAR_8, VAR_9);

 VAR_15 = -VAR_0;
 if (VAR_8 > 1024 * 1024 - 1)
  goto error;



 VAR_15 = -VAR_2;
 VAR_12 = VAR_10->request_key_auth;
 if (!VAR_12)
  goto error;

 VAR_11 = VAR_12->payload.data;
 if (VAR_11->target_key->serial != VAR_5)
  goto error;


 VAR_14 = ((void*)0);

 if (VAR_6) {
  VAR_15 = -VAR_1;
  VAR_14 = FUNC_8(VAR_8, VAR_3);
  if (!VAR_14) {
   if (VAR_8 <= VAR_4)
    goto error;
   VAR_16 = 1;
   VAR_14 = FUNC_10(VAR_8);
   if (!VAR_14)
    goto error;
  }

  VAR_15 = FUNC_0(VAR_14, VAR_6, VAR_7);
  if (VAR_15 < 0)
   goto error2;
 }



 VAR_15 = FUNC_2(VAR_9, VAR_11, &VAR_13);
 if (VAR_15 < 0)
  goto error2;


 VAR_15 = FUNC_4(VAR_11->target_key, VAR_14, VAR_8,
           VAR_13, VAR_12);

 FUNC_5(VAR_13);



 if (VAR_15 == 0)
  FUNC_6(((void*)0));

error2:
 if (!VAR_16)
  FUNC_7(VAR_14);
 else
  FUNC_9(VAR_14);
error:
 return VAR_15;
}
