
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mips_cl_insn {TYPE_1__* insn_mo; } ;
struct TYPE_4__ {int mips16; } ;
struct TYPE_3__ {unsigned long pinfo; int name; } ;


 int FUNC_0 (int ,struct mips_cl_insn const) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 unsigned long VAR_8 ;
 unsigned long VAR_9 ;
 unsigned long VAR_10 ;
 unsigned long VAR_11 ;
 unsigned long VAR_12 ;
 unsigned long VAR_13 ;
 unsigned long VAR_14 ;
 unsigned long VAR_15 ;
 scalar_t__ FUNC_2 (unsigned long) ;
 int VAR_16 ;
 int VAR_17 ;
 unsigned int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 unsigned int FUNC_3 (int ) ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_4 (unsigned long) ;
 scalar_t__ VAR_25 ;
 scalar_t__ VAR_26 ;
 TYPE_2__ VAR_27 ;
 int* VAR_28 ;

__attribute__((used)) static unsigned int
FUNC_5 (const struct mips_cl_insn *VAR_29,
        const struct mips_cl_insn *VAR_30)
{
  unsigned long VAR_31, VAR_32;





  VAR_31 = VAR_29->insn_mo->pinfo;
  VAR_32 = VAR_30 ? VAR_30->insn_mo->pinfo : ~0U;






  if (!VAR_24)
    {
      if ((VAR_31 & VAR_9) && (VAR_32 & VAR_15))
 return 2;
      if ((VAR_31 & VAR_8) && (VAR_32 & VAR_14))
 return 2;
    }



  if (VAR_25
      && FUNC_2 (VAR_31)
      && (VAR_30 == ((void*)0) || FUNC_0 (VAR_30, FUNC_0 (VAR_19, *VAR_29), VAR_17)))
    return 2;



  if (VAR_26)
    {
      unsigned int VAR_33, VAR_34;

      VAR_33 = FUNC_3 (VAR_29->insn_mo->name);
      if (VAR_33 != VAR_18 && VAR_28[VAR_33] != 0)
 {
   if (VAR_30 == ((void*)0))
     return 1;
   VAR_34 = FUNC_3 (VAR_30->insn_mo->name);
   if (VAR_28[VAR_33] & (1 << VAR_34))
     return 1;
 }
    }

  if (!VAR_27.mips16)
    {



      if ((!VAR_23 && (VAR_31 & VAR_6))
   || (!VAR_21 && (VAR_31 & VAR_5)))
 {
   FUNC_4 (VAR_31 & VAR_13);
   if ((VAR_30 == ((void*)0) || FUNC_0 (VAR_30, FUNC_0 (VAR_20, *VAR_29), VAR_17)))
     return 1;
 }
      else if ((!VAR_21 && (VAR_31 & VAR_4))
        || (!VAR_22 && (VAR_31 & VAR_3)))
 {



   if (VAR_31 & VAR_12)
     {
       if ((VAR_30 == ((void*)0) || FUNC_0 (VAR_30, FUNC_0 (VAR_1, *VAR_29), VAR_16)))
  return 1;
     }
   else if (VAR_31 & VAR_11)
     {
       if ((VAR_30 == ((void*)0) || FUNC_0 (VAR_30, FUNC_0 (VAR_0, *VAR_29), VAR_16)))
  return 1;
     }
   else
     {


       if ((VAR_31 & VAR_10)
    && (VAR_32 & VAR_7))
  return 2;




       if (VAR_32 & VAR_2)
  return 1;
     }
 }






      else if (!VAR_21
        && (VAR_31 & VAR_10)
        && (VAR_32 & VAR_7))
 return 1;
    }



  return 0;
}
