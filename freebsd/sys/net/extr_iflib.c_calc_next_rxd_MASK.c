
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int qidx_t ;
typedef TYPE_2__* iflib_fl_t ;
typedef scalar_t__ caddr_t ;
struct TYPE_5__ {int ifl_size; int ifl_rxd_size; TYPE_1__* ifl_ifdi; } ;
struct TYPE_4__ {scalar_t__ idi_vaddr; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static inline caddr_t
FUNC_2(iflib_fl_t VAR_0, int VAR_1)
{
 qidx_t VAR_2;
 int VAR_3;
 caddr_t VAR_4, VAR_5, VAR_6, VAR_7;

 VAR_3 = VAR_0->ifl_size;
 VAR_2 = VAR_0->ifl_rxd_size;
 VAR_4 = VAR_0->ifl_ifdi->idi_vaddr;

 if (FUNC_1(VAR_2 == 0))
  return (VAR_4);
 VAR_6 = VAR_4 + VAR_2*VAR_1;
 VAR_5 = VAR_4 + VAR_2*VAR_3;
 VAR_7 = FUNC_0(VAR_6);
 return (VAR_7 < VAR_5 ? VAR_7 : VAR_4);
}
