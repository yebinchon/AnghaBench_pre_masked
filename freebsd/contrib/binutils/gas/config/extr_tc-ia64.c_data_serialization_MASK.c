
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ debug_dv; } ;
struct TYPE_5__ {scalar_t__ data_srlz; TYPE_1__* dependency; } ;
struct TYPE_4__ {scalar_t__ semantics; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*) ;
 TYPE_3__ VAR_2 ;
 int FUNC_1 (char*,int) ;
 TYPE_2__* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void
FUNC_2 ()
{
  int VAR_6 = 0;
  if (VAR_2.debug_dv)
    FUNC_0 (VAR_5, "  Data serialization\n");
  while (VAR_6 < VAR_4)
    {
      if (VAR_3[VAR_6].data_srlz == VAR_1


   || (VAR_3[VAR_6].dependency)->semantics == VAR_0)
 {
   FUNC_1 ("Removing", VAR_6);
   VAR_3[VAR_6] = VAR_3[--VAR_4];
 }
      else
 ++VAR_6;
    }
}
