
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int pt_entry_t ;
typedef TYPE_1__* pmap_t ;
struct TYPE_3__ {int pm_type; } ;


 int FUNC_0 (int,char*) ;



 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,int) ;

__attribute__((used)) static pt_entry_t
FUNC_2(pmap_t VAR_2, pt_entry_t VAR_3)
{
 int VAR_4 = VAR_1 | VAR_0;

 switch (VAR_2->pm_type) {
 case 128:
 case 129:

  FUNC_0((VAR_3 & VAR_4) != VAR_4,
      ("Invalid PAT bits in entry %#lx", VAR_3));


  if ((VAR_3 & VAR_4) != 0)
   VAR_3 ^= VAR_4;
  break;
 case 130:




  break;
 default:
  FUNC_1("pmap_switch_pat_bits: bad pm_type %d", VAR_2->pm_type);
 }

 return (VAR_3);
}
