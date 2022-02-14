
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct timespec {int tv_nsec; int tv_sec; } ;
typedef int ssize_t ;
typedef int isc_uint32_t ;
struct TYPE_5__ {int handle; size_t sz_to_recv; int status; } ;
struct TYPE_6__ {TYPE_1__ usocket; } ;
struct TYPE_7__ {TYPE_2__ sources; scalar_t__ bad; int * ent; } ;
typedef TYPE_3__ isc_entropysource_t ;
typedef int isc_entropy_t ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,unsigned char*,int,int) ;
 int VAR_5 ;


 int VAR_6 ;



 int FUNC_4 (struct timespec*,int *) ;
 int FUNC_5 (int,unsigned char*,size_t,int ) ;
 int FUNC_6 (int,unsigned char*,int,int ,int *,int *) ;
 int FUNC_7 (int,unsigned char*,int,int ,int *,int ) ;
 int FUNC_8 (int) ;

__attribute__((used)) static unsigned int
FUNC_9(isc_entropysource_t *VAR_7, isc_uint32_t VAR_8) {
 isc_entropy_t *VAR_9 = VAR_7->ent;
 unsigned char VAR_10[128];
 int VAR_11 = VAR_7->sources.usocket.handle;
 ssize_t VAR_12 = 0, VAR_13;
 unsigned int VAR_14;
 size_t VAR_15 = VAR_7->sources.usocket.sz_to_recv;

 if (VAR_7->bad)
  return (0);

 VAR_8 = VAR_8 / 8 + (((VAR_8 & 0x07) > 0) ? 1 : 0);

 VAR_14 = 0;
 while (VAR_8 > 0) {
  VAR_13 = FUNC_1(VAR_8, sizeof(VAR_10));
 eagain_loop:

  switch ( VAR_7->sources.usocket.status ) {
  case 130:
   VAR_10[0] = VAR_13;
   if ((VAR_12 = FUNC_7(VAR_11, VAR_10, 1, 0, ((void*)0), 0)) < 0) {
    if (VAR_5 == VAR_3 || VAR_5 == VAR_2 ||
        VAR_5 == VAR_1)
     goto out;
    goto err;
   }
   FUNC_0(VAR_12 == 1);
   VAR_7->sources.usocket.status =
      128;
   goto eagain_loop;

  case 131:
  case 132:
   VAR_10[0] = 1;
   VAR_10[1] = VAR_13;
   if ((VAR_12 = FUNC_7(VAR_11, VAR_10, 2, 0, ((void*)0), 0)) < 0) {
    if (VAR_5 == VAR_3 || VAR_5 == VAR_2 ||
        VAR_5 == VAR_1)
     goto out;
    goto err;
   }
   if (VAR_12 == 1) {
    VAR_7->sources.usocket.status =
     130;
    goto eagain_loop;
   }
   FUNC_0(VAR_12 == 2);
   VAR_7->sources.usocket.status =
      128;


  case 128:
   if (FUNC_6(VAR_11, VAR_10, 1, 0, ((void*)0), ((void*)0)) != 1) {
    if (VAR_5 == VAR_0) {
     FUNC_8(1000);

     goto eagain_loop;
    }
    if (VAR_5 == VAR_3 || VAR_5 == VAR_2)
     goto out;
    goto err;
   }
   VAR_7->sources.usocket.status =
     129;
   VAR_15 = VAR_10[0];
   VAR_7->sources.usocket.sz_to_recv = VAR_15;
   if (VAR_15 > sizeof(VAR_10))
    goto err;


  case 129:
   if (VAR_15 != 0U) {
    VAR_12 = FUNC_5(VAR_11, VAR_10, VAR_15, 0);
    if (VAR_12 < 0) {
     if (VAR_5 == VAR_3 ||
         VAR_5 == VAR_2)
      goto out;
     goto err;
    }
   } else
    VAR_12 = 0;
   break;

  default:
   goto err;
  }

  if ((size_t)VAR_12 != VAR_15)
   VAR_7->sources.usocket.sz_to_recv -= VAR_12;
  else
   VAR_7->sources.usocket.status =
    132;

  if (VAR_12 == 0)
   goto out;

  FUNC_3(VAR_9, VAR_10, VAR_12, VAR_12 * 8);
  VAR_14 += VAR_12 * 8;
  VAR_8 -= VAR_12;
 }
 goto out;

 err:
 FUNC_2(VAR_11);
 VAR_7->bad = VAR_4;
 VAR_7->sources.usocket.status = VAR_6;
 VAR_7->sources.usocket.handle = -1;

 out:
 return (VAR_14);
}
