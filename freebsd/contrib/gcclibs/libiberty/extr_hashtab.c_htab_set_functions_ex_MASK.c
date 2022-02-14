
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* htab_t ;
typedef int htab_hash ;
typedef int htab_free_with_arg ;
typedef int htab_eq ;
typedef int htab_del ;
typedef int htab_alloc_with_arg ;
struct TYPE_3__ {int free_with_arg_f; int alloc_with_arg_f; int alloc_arg; int del_f; int eq_f; int hash_f; } ;
typedef int PTR ;



void
FUNC_0 (htab_t VAR_0, htab_hash VAR_1, htab_eq VAR_2,
                       htab_del VAR_3, PTR VAR_4,
                       htab_alloc_with_arg VAR_5, htab_free_with_arg VAR_6)
{
  VAR_0->hash_f = VAR_1;
  VAR_0->eq_f = VAR_2;
  VAR_0->del_f = VAR_3;
  VAR_0->alloc_arg = VAR_4;
  VAR_0->alloc_with_arg_f = VAR_5;
  VAR_0->free_with_arg_f = VAR_6;
}
