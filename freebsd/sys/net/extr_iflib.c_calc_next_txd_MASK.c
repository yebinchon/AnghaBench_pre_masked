
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef int qidx_t ;
typedef TYPE_2__* iflib_txq_t ;
typedef scalar_t__ caddr_t ;
struct TYPE_5__ {int ift_size; int* ift_txd_size; TYPE_1__* ift_ifdi; } ;
struct TYPE_4__ {scalar_t__ idi_vaddr; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static inline caddr_t
FUNC_2(iflib_txq_t VAR_0, int VAR_1, uint8_t VAR_2)
{
 qidx_t VAR_3;
 int VAR_4;
 caddr_t VAR_5, VAR_6, VAR_7, VAR_8;

 VAR_4 = VAR_0->ift_size;
 VAR_3 = VAR_0->ift_txd_size[VAR_2];
 VAR_5 = VAR_0->ift_ifdi[VAR_2].idi_vaddr;

 if (FUNC_1(VAR_3 == 0))
  return (VAR_5);
 VAR_7 = VAR_5 + VAR_3*VAR_1;
 VAR_6 = VAR_5 + VAR_3*VAR_4;
 VAR_8 = FUNC_0(VAR_7);
 return (VAR_8 < VAR_6 ? VAR_8 : VAR_5);
}
