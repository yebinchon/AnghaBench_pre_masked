
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int kspin_lock ;
struct TYPE_4__ {int ki_list; int * ki_lock; int ki_lock_priv; void* ki_svcctx; void* ki_svcfunc; } ;
typedef TYPE_1__ kinterrupt ;


 TYPE_1__* FUNC_0 (int ,int,int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

uint32_t
FUNC_5(kinterrupt **VAR_5, void *VAR_6, void *VAR_7,
 kspin_lock *VAR_8, uint32_t VAR_9, uint8_t VAR_10, uint8_t VAR_11,
 uint8_t VAR_12, uint8_t VAR_13, uint32_t VAR_14, uint8_t VAR_15)
{
 uint8_t VAR_16;

 *VAR_5 = FUNC_0(VAR_0, sizeof(kinterrupt), 0);
 if (*VAR_5 == ((void*)0))
  return (VAR_1);

 (*VAR_5)->ki_svcfunc = VAR_6;
 (*VAR_5)->ki_svcctx = VAR_7;

 if (VAR_8 == ((void*)0)) {
  FUNC_3(&(*VAR_5)->ki_lock_priv);
  (*VAR_5)->ki_lock = &(*VAR_5)->ki_lock_priv;
 } else
  (*VAR_5)->ki_lock = VAR_8;

 FUNC_2(&VAR_4, &VAR_16);
 FUNC_1((&VAR_3), (&(*VAR_5)->ki_list));
 FUNC_4(&VAR_4, VAR_16);

 return (VAR_2);
}
