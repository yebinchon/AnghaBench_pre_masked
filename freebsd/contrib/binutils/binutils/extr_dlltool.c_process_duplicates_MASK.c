
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int ordinal; int noname; int data; int constant; int name; } ;
typedef TYPE_1__ export_type ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int,int) ;
 int VAR_2 ;
 int FUNC_3 (TYPE_1__**,int,int,int ) ;
 int FUNC_4 (TYPE_1__**) ;
 scalar_t__ FUNC_5 (int ,int ) ;

__attribute__((used)) static void
FUNC_6 (export_type **VAR_3)
{
  int VAR_4 = 1;
  int VAR_5;

  while (VAR_4)
    {
      VAR_4 = 0;

      FUNC_3 (VAR_3, VAR_1, sizeof (export_type *), VAR_2);

      for (VAR_5 = 0; VAR_5 < VAR_1 - 1; VAR_5++)
 {
   if (FUNC_5 (VAR_3[VAR_5]->name,
        VAR_3[VAR_5 + 1]->name) == 0)
     {
       export_type *VAR_6 = VAR_3[VAR_5];
       export_type *VAR_7 = VAR_3[VAR_5 + 1];

       VAR_4 = 1;


       FUNC_2 (FUNC_0("Warning, ignoring duplicate EXPORT %s %d,%d"),
        VAR_6->name, VAR_6->ordinal, VAR_7->ordinal);

       if (VAR_6->ordinal != -1
    && VAR_7->ordinal != -1)

  FUNC_1 (FUNC_0("Error, duplicate EXPORT with oridinals: %s"),
        VAR_6->name);


       VAR_7->ordinal = VAR_6->ordinal > 0 ? VAR_6->ordinal : VAR_7->ordinal;
       VAR_7->constant |= VAR_6->constant;
       VAR_7->noname |= VAR_6->noname;
       VAR_7->data |= VAR_6->data;
       VAR_3[VAR_5] = 0;
     }

   FUNC_4 (VAR_3);
 }
    }


  for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++)
    if (!VAR_3[VAR_5]->noname)
      VAR_0++;
}
