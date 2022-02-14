
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pv_chunk {int dummy; } ;
typedef scalar_t__ pv_entry_t ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static __inline struct pv_chunk *
FUNC_0(pv_entry_t VAR_1)
{

 return ((struct pv_chunk *)((uintptr_t)VAR_1 & ~(uintptr_t)VAR_0));
}
