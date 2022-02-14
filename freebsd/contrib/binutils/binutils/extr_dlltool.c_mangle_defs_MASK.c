
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int hint; int noname; struct TYPE_8__* next; } ;
typedef TYPE_1__ export_type ;


 int FUNC_0 (char*) ;
 TYPE_1__* VAR_0 ;
 TYPE_1__** VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__**) ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 int FUNC_3 (TYPE_1__**) ;
 int FUNC_4 (TYPE_1__**,int,int,int ) ;
 scalar_t__ VAR_4 ;
 TYPE_1__** FUNC_5 (int) ;

__attribute__((used)) static void
FUNC_6 (void)
{

  export_type *VAR_5;

  int VAR_6;
  int VAR_7 = 0;
  export_type **VAR_8 = FUNC_5 (sizeof (export_type *) * VAR_2);

  FUNC_2 (FUNC_0("Processing definitions"));

  for (VAR_6 = 0, VAR_5 = VAR_0; VAR_5; VAR_6++, VAR_5 = VAR_5->next)
    VAR_8[VAR_6] = VAR_5;

  FUNC_3 (VAR_8);
  FUNC_1 (VAR_8);


  VAR_0 = 0;
  for (VAR_6 = VAR_2 - 1; VAR_6 >= 0; VAR_6--)
    {
      VAR_8[VAR_6]->next = VAR_0;
      VAR_0 = VAR_8[VAR_6];
    }


  VAR_1 = (export_type **)
    FUNC_5 (sizeof (export_type *) * (VAR_2 + 1));

  for (VAR_6 = 0, VAR_5 = VAR_0; VAR_5; VAR_6++, VAR_5 = VAR_5->next)
    VAR_1[VAR_6] = VAR_5;

  VAR_1[VAR_6] = 0;

  FUNC_4 (VAR_1, VAR_6, sizeof (export_type *), VAR_3);


  for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++)
    if (!VAR_1[VAR_6]->noname || VAR_4)
      VAR_1[VAR_6]->hint = VAR_7++;

  FUNC_2 (FUNC_0("Processed definitions"));
}
