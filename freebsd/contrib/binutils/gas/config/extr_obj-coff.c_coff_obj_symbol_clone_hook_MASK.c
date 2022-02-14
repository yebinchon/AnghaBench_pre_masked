
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int symbolS ;
typedef int combined_entry_type ;
struct TYPE_2__ {int * native; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 TYPE_1__* FUNC_2 (int ) ;
 int FUNC_3 (int *,int *,long) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (long) ;

void
FUNC_6 (symbolS *VAR_1, symbolS *VAR_2)
{
  long VAR_3 = (VAR_0 + 1) * sizeof (combined_entry_type);
  combined_entry_type * VAR_4 = FUNC_5 (VAR_3);

  FUNC_3 (VAR_4, FUNC_2 (FUNC_4 (VAR_2))->native, VAR_3);
  FUNC_2 (FUNC_4 (VAR_1))->native = VAR_4;

  FUNC_1 (VAR_1, FUNC_0 (VAR_2));
}
