
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ style; } ;
struct TYPE_4__ {TYPE_1__ deps; } ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,int *) ;
 TYPE_2__* VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*,int ) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int * FUNC_4 (int ,char*) ;
 int VAR_5 ;
 int * VAR_6 ;
 int VAR_7 ;

void
FUNC_5 (void)
{
  FILE *VAR_8 = ((void*)0);

  if (VAR_1->deps.style != VAR_0)
    {


      if (!VAR_3)
 VAR_8 = VAR_6;
      else
 {
   VAR_8 = FUNC_4 (VAR_3, VAR_2 ? "a": "w");
   if (!VAR_8)
     FUNC_1 ("opening dependency file %s: %m", VAR_3);
 }
    }



  VAR_4 += FUNC_0 (VAR_7, VAR_8);

  if (VAR_8 && VAR_8 != VAR_6
      && (FUNC_3 (VAR_8) || FUNC_2 (VAR_8)))
    FUNC_1 ("closing dependency file %s: %m", VAR_3);

  if (VAR_6 && (FUNC_3 (VAR_6) || FUNC_2 (VAR_6)))
    FUNC_1 ("when writing output to %s: %m", VAR_5);
}
