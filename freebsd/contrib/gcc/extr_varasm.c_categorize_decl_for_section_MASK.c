
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int tree ;
typedef enum section_category { ____Placeholder_section_category } section_category ;
struct TYPE_3__ {int (* reloc_rw_mask ) () ;} ;
struct TYPE_4__ {scalar_t__ have_srodata_section; scalar_t__ (* in_small_data_p ) (int ) ;TYPE_1__ asm_out; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ VAR_19 ;
 scalar_t__ FUNC_6 (int ) ;
 int VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 scalar_t__ FUNC_11 (int ) ;
 TYPE_2__ VAR_23 ;

enum section_category
FUNC_12 (tree VAR_24, int VAR_25)
{
  enum section_category VAR_26;

  if (FUNC_2 (VAR_24) == VAR_1)
    return VAR_17;
  else if (FUNC_2 (VAR_24) == VAR_18)
    {
      if (VAR_21)
        return VAR_8;
      else
 return VAR_10;
    }
  else if (FUNC_2 (VAR_24) == VAR_19)
    {
      if (FUNC_6 (VAR_24))
 VAR_26 = VAR_2;
      else if (! FUNC_4 (VAR_24)
        || FUNC_5 (VAR_24)
        || ! FUNC_3 (FUNC_0 (VAR_24)))
 {




   if (VAR_25 & VAR_23.asm_out.reloc_rw_mask ())
     VAR_26 = VAR_25 == 1 ? VAR_5 : VAR_4;
   else
     VAR_26 = VAR_3;
 }
      else if (VAR_25 & VAR_23.asm_out.reloc_rw_mask ())
 VAR_26 = VAR_25 == 1 ? VAR_7 : VAR_6;
      else if (VAR_25 || VAR_20 < 2)



 VAR_26 = VAR_8;
      else if (FUNC_2 (FUNC_0 (VAR_24)) == VAR_18)
 VAR_26 = VAR_11;
      else
 VAR_26 = VAR_9;
    }
  else if (FUNC_2 (VAR_24) == VAR_0)
    {
      if ((VAR_25 & VAR_23.asm_out.reloc_rw_mask ())
   || FUNC_5 (VAR_24)
   || ! FUNC_3 (VAR_24))
 VAR_26 = VAR_3;
      else
 VAR_26 = VAR_8;
    }
  else
    VAR_26 = VAR_8;


  if (FUNC_2 (VAR_24) == VAR_19 && FUNC_1 (VAR_24))
    {


      if (VAR_26 == VAR_2
   || (VAR_22
       && FUNC_7 (FUNC_0 (VAR_24))))
 VAR_26 = VAR_15;
      else
 VAR_26 = VAR_16;
    }


  else if (VAR_23.in_small_data_p (VAR_24))
    {
      if (VAR_26 == VAR_2)
 VAR_26 = VAR_12;
      else if (VAR_23.have_srodata_section && VAR_26 == VAR_8)
 VAR_26 = VAR_14;
      else
 VAR_26 = VAR_13;
    }

  return VAR_26;
}
