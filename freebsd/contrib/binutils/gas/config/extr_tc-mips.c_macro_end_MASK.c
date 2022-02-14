
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int relax_substateT ;
struct TYPE_6__ {int* sizes; TYPE_1__* first_frag; scalar_t__ delay_slot_p; } ;
struct TYPE_5__ {scalar_t__ warn_about_macros; } ;
struct TYPE_4__ {int fr_subtype; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,char const*) ;
 char* FUNC_1 (int ) ;
 TYPE_3__ VAR_3 ;
 TYPE_2__ VAR_4 ;

__attribute__((used)) static void
FUNC_2 (void)
{
  if (VAR_3.sizes[0] > 4 || VAR_3.sizes[1] > 4)
    {
      relax_substateT VAR_5;


      VAR_5 = 0;
      if (VAR_3.sizes[1] > VAR_3.sizes[0])
 VAR_5 |= VAR_2;
      if (VAR_4.warn_about_macros)
 VAR_5 |= VAR_1;
      if (VAR_3.delay_slot_p)
 VAR_5 |= VAR_0;

      if (VAR_3.sizes[0] > 4 && VAR_3.sizes[1] > 4)
 {



   const char *VAR_6 = FUNC_1 (VAR_5);
   if (VAR_6 != 0)
     FUNC_0 ("%s", VAR_6);
 }
      else
 {


   VAR_3.first_frag->fr_subtype |= VAR_5;
 }
    }
}
