
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ recno_t ;
typedef scalar_t__ indx_t ;
struct TYPE_2__ {scalar_t__ nrecs; } ;
typedef int PAGE ;


 TYPE_1__* FUNC_0 (int *,scalar_t__) ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static recno_t
FUNC_2(PAGE *VAR_0)
{
 recno_t VAR_1;
 indx_t VAR_2, VAR_3;

 for (VAR_1 = 0, VAR_2 = 0, VAR_3 = FUNC_1(VAR_0); VAR_2 < VAR_3; ++VAR_2)
  VAR_1 += FUNC_0(VAR_0, VAR_2)->nrecs;
 return (VAR_1);
}
