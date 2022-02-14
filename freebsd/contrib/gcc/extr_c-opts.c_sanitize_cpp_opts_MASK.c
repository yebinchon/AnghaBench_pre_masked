
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ style; } ;
struct TYPE_4__ {int unsigned_char; int warn_long_long; int warn_variadic_macros; scalar_t__ traditional; scalar_t__ directives_only; int stdc_0_in_system_headers; int preprocessed; TYPE_1__ deps; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 TYPE_2__* VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (char*) ;
 scalar_t__ VAR_6 ;
 char VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;

__attribute__((used)) static void
FUNC_1 (void)
{


  if (VAR_5 && VAR_3->deps.style == VAR_0)
    FUNC_0 ("to generate dependencies you must specify either -M or -MM");



  if (VAR_7 == 'M')
    VAR_10 = 1;



  if (VAR_3->directives_only && !VAR_3->preprocessed && !VAR_7)
    VAR_7 = 'D';




  if (VAR_10)
    {
      if (VAR_7 != 'M')
 VAR_7 = 0;
      VAR_6 = 0;
      VAR_9 = 1;
    }

  VAR_3->unsigned_char = !VAR_11;
  VAR_3->stdc_0_in_system_headers = VAR_2;



  VAR_3->warn_long_long
    = VAR_14 && ((!VAR_8 && VAR_13) || VAR_15);



  VAR_3->warn_variadic_macros
    = VAR_17 && (VAR_13 || VAR_15);





  if (VAR_12 == -1)
    VAR_12 = (VAR_4 != VAR_1);

  if (VAR_3->directives_only)
    {
      if (VAR_16)
 FUNC_0 ("-fdirectives-only is incompatible with -Wunused_macros");
      if (VAR_3->traditional)
 FUNC_0 ("-fdirectives-only is incompatible with -traditional");
    }
}
