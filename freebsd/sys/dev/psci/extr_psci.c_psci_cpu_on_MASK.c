
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int * psci_fnids; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int ,unsigned long,unsigned long,unsigned long) ;
 TYPE_1__* VAR_2 ;

int
FUNC_1(unsigned long VAR_3, unsigned long VAR_4, unsigned long VAR_5)
{
 uint32_t VAR_6;

 VAR_6 = VAR_0;
 if (VAR_2 != ((void*)0))
  VAR_6 = VAR_2->psci_fnids[VAR_1];


 return (FUNC_0(VAR_6, VAR_3, VAR_4, VAR_5));
}
