
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int qidx_t ;
typedef TYPE_1__* iflib_txq_t ;
struct TYPE_4__ {int ift_size; } ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static inline qidx_t
FUNC_1(iflib_txq_t VAR_0, qidx_t VAR_1)
{
 qidx_t VAR_2 = FUNC_0(VAR_0);
 qidx_t VAR_3 = VAR_0->ift_size / 8;
 if (VAR_1 > 4*VAR_3)
  return (VAR_2);
 if (VAR_1 > 2*VAR_3)
  return (VAR_2 >> 1);
 if (VAR_1 > VAR_3)
  return (VAR_2 >> 3);
 return (0);
}
