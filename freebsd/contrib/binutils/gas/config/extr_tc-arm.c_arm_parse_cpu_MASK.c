
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct arm_cpu_option_table {int * name; scalar_t__ canonical_name; int default_fpu; int value; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 struct arm_cpu_option_table* VAR_0 ;
 int FUNC_2 (char*,int **) ;
 int FUNC_3 (int ,char*) ;
 int * VAR_1 ;
 int * VAR_2 ;
 scalar_t__* VAR_3 ;
 char* FUNC_4 (char*,char) ;
 int FUNC_5 (scalar_t__*,scalar_t__) ;
 int FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (int *,char*,int) ;

__attribute__((used)) static int
FUNC_8 (char * VAR_4)
{
  const struct arm_cpu_option_table * VAR_5;
  char * VAR_6 = FUNC_4 (VAR_4, '+');
  int VAR_7;

  if (VAR_6 != ((void*)0))
    VAR_7 = VAR_6 - VAR_4;
  else
    VAR_7 = FUNC_6 (VAR_4);

  if (VAR_7 == 0)
    {
      FUNC_3 (FUNC_1("missing cpu name `%s'"), VAR_4);
      return 0;
    }

  for (VAR_5 = VAR_0; VAR_5->name != ((void*)0); VAR_5++)
    if (FUNC_7 (VAR_5->name, VAR_4, VAR_7) == 0)
      {
 VAR_1 = &VAR_5->value;
 VAR_2 = &VAR_5->default_fpu;
 if (VAR_5->canonical_name)
   FUNC_5(VAR_3, VAR_5->canonical_name);
 else
   {
     int VAR_8;
     for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++)
       VAR_3[VAR_8] = FUNC_0 (VAR_5->name[VAR_8]);
     VAR_3[VAR_8] = 0;
   }

 if (VAR_6 != ((void*)0))
   return FUNC_2 (VAR_6, &VAR_1);

 return 1;
      }

  FUNC_3 (FUNC_1("unknown cpu `%s'"), VAR_4);
  return 0;
}
