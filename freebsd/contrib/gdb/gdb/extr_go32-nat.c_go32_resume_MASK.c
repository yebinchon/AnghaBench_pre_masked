
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int ptid_t ;
typedef enum target_signal { ____Placeholder_target_signal } target_signal ;
struct TYPE_2__ {scalar_t__ gdb_sig; int djgpp_excepno; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_0 (char*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int) ;

__attribute__((used)) static void
FUNC_2 (ptid_t VAR_6, int VAR_7, enum target_signal VAR_8)
{
  int VAR_9;

  VAR_4 = VAR_7;

  if (VAR_8 != VAR_0 && VAR_8 != VAR_2)
  {
    for (VAR_9 = 0, VAR_5 = -1;
  VAR_3[VAR_9].gdb_sig != VAR_1; VAR_9++)
      if (VAR_3[VAR_9].gdb_sig == VAR_8)
      {
 VAR_5 = VAR_3[VAR_9].djgpp_excepno;
 break;
      }
    if (VAR_5 == -1)
      FUNC_0 ("Cannot deliver signal %s on this platform.\n",
    FUNC_1 (VAR_8));
  }
}
