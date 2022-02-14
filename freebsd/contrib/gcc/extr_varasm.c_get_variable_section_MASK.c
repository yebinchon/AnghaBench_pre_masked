
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int tree ;
typedef int section ;
struct TYPE_3__ {int * (* select_section ) (int ,int,int ) ;} ;
struct TYPE_4__ {TYPE_1__ asm_out; scalar_t__ have_switchable_bss_sections; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int * FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int * VAR_0 ;
 int * VAR_1 ;
 int FUNC_9 (scalar_t__) ;
 scalar_t__ FUNC_10 (int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int * FUNC_11 (int ,int *,int) ;
 int * VAR_4 ;
 int FUNC_12 (int ,int,int ) ;
 int * FUNC_13 (int ,int,int ) ;
 TYPE_2__ VAR_5 ;
 int * VAR_6 ;

__attribute__((used)) static section *
FUNC_14 (tree VAR_7, bool VAR_8)
{
  int VAR_9;



  if (FUNC_1 (VAR_7) && FUNC_3 (VAR_7) == ((void*)0))
    {
      if (FUNC_4 (VAR_7))
 return VAR_6;
      if (FUNC_6 (VAR_7) && FUNC_8 (VAR_7))
 return VAR_1;
    }

  if (FUNC_2 (VAR_7) == VAR_2)
    VAR_9 = FUNC_10 (FUNC_7 (VAR_7)) ? 3 : 0;
  else if (FUNC_2 (VAR_7))
    VAR_9 = FUNC_9 (FUNC_2 (VAR_7));
  else
    VAR_9 = 0;

  FUNC_12 (VAR_7, VAR_9, VAR_3);
  if (FUNC_5 (VAR_7))
    return FUNC_11 (VAR_7, ((void*)0), VAR_9);

  if (!FUNC_4 (VAR_7)
      && !(VAR_8 && VAR_5.have_switchable_bss_sections)
      && FUNC_8 (VAR_7))
    {
      if (!FUNC_6 (VAR_7))
 return VAR_4;
      if (VAR_0)
 return VAR_0;
    }

  return VAR_5.asm_out.select_section (VAR_7, VAR_9, FUNC_0 (VAR_7));
}
