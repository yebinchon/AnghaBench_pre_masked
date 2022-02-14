
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int qidx_t ;
typedef TYPE_1__* iflib_txq_t ;
struct TYPE_4__ {int ift_size; int ift_in_use; } ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static inline qidx_t
FUNC_1(iflib_txq_t VAR_0)
{
 qidx_t VAR_1 = FUNC_0(VAR_0);
 qidx_t VAR_2 = VAR_0->ift_size / 8;
 if (VAR_0->ift_in_use > 4*VAR_2)
  return (VAR_1);
 if (VAR_0->ift_in_use > 2*VAR_2)
  return (VAR_1 >> 1);
 if (VAR_0->ift_in_use > VAR_2)
  return (VAR_1 >> 2);
 return (2);
}
