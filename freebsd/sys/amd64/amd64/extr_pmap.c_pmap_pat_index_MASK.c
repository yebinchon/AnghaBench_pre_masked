
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int pt_entry_t ;
typedef TYPE_1__* pmap_t ;
struct TYPE_3__ {int pm_type; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;



 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*,int) ;

__attribute__((used)) static int
FUNC_2(pmap_t VAR_5, pt_entry_t VAR_6, bool VAR_7)
{
 int VAR_8, VAR_9;

 VAR_9 = 0;
 switch (VAR_5->pm_type) {
 case 128:
 case 129:

  VAR_8 = VAR_7 ? VAR_3 : VAR_4;

  if ((VAR_6 & VAR_8) != 0)
   VAR_9 |= 0x4;
  if ((VAR_6 & VAR_1) != 0)
   VAR_9 |= 0x2;
  if ((VAR_6 & VAR_2) != 0)
   VAR_9 |= 0x1;
  break;
 case 130:
  if ((VAR_6 & VAR_0) != 0)
   FUNC_1("EPT PTE %#lx has no PAT memory type", VAR_6);
  VAR_9 = (VAR_6 & FUNC_0(0x7)) >> 3;
  break;
 }


 if (VAR_9 == 4)
  VAR_9 = 0;
 if (VAR_9 == 7)
  VAR_9 = 3;

 return (VAR_9);
}
