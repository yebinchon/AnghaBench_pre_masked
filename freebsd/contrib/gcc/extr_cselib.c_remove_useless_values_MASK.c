
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* next_containing_mem; scalar_t__ locs; } ;
typedef TYPE_1__ cselib_val ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 TYPE_1__* VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int ) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static void
FUNC_2 (void)
{
  cselib_val **VAR_7, *VAR_8;


  do
    {
      VAR_6 = 0;
      FUNC_1 (VAR_0, VAR_1, 0);
    }
  while (VAR_6);



  VAR_7 = &VAR_4;
  for (VAR_8 = *VAR_7; VAR_8 != &VAR_3; VAR_8 = VAR_8->next_containing_mem)
    if (VAR_8->locs)
      {
 *VAR_7 = VAR_8;
 VAR_7 = &(*VAR_7)->next_containing_mem;
      }
  *VAR_7 = &VAR_3;

  FUNC_1 (VAR_0, VAR_2, 0);

  FUNC_0 (!VAR_5);
}
