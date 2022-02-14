
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* htab_t ;
struct TYPE_4__ {int (* hash_f ) (int const) ;} ;
typedef int PTR ;


 int FUNC_0 (TYPE_1__*,int const,int ) ;
 int FUNC_1 (int const) ;

PTR
FUNC_2 (htab_t VAR_0, const PTR VAR_1)
{
  return FUNC_0 (VAR_0, VAR_1, (*VAR_0->hash_f) (VAR_1));
}
