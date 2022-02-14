
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int ordinal; } ;
typedef TYPE_1__ export_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int ,int) ;
 int VAR_3 ;
 int FUNC_2 (TYPE_1__**,int,int,int ) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static void
FUNC_4 (export_type **VAR_4)
{
  int VAR_5 = -1;
  int VAR_6;
  char *VAR_7;
  int VAR_8 = 65536;

  FUNC_2 (VAR_4, VAR_2, sizeof (export_type *), VAR_3);


  VAR_7 = (char *) FUNC_3 (VAR_8);

  FUNC_1 (VAR_7, 0, VAR_8);


  for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++)
    {
      if (VAR_4[VAR_6]->ordinal != -1)
 {
   VAR_7[VAR_4[VAR_6]->ordinal] = 1;

   if (VAR_5 == -1 || VAR_4[VAR_6]->ordinal < VAR_5)
     VAR_5 = VAR_4[VAR_6]->ordinal;
 }
    }


  if (VAR_5 == -1)
    VAR_5 = 1;


  for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++)
    {
      if (VAR_4[VAR_6]->ordinal == -1)
 {
   int VAR_9;


   for (VAR_9 = VAR_5; VAR_9 < VAR_8; VAR_9++)
     if (VAR_7[VAR_9] == 0)
       {
  VAR_7[VAR_9] = 1;
  VAR_4[VAR_6]->ordinal = VAR_9;
  goto done;
       }


   for (VAR_9 = VAR_5; VAR_9 >0; VAR_9--)
     if (VAR_7[VAR_9] == 0)
       {
  VAR_7[VAR_9] = 1;
  VAR_4[VAR_6]->ordinal = VAR_9;
  goto done;
       }
 done:;
 }
    }

  FUNC_0 (VAR_7);


  FUNC_2 (VAR_4, VAR_2, sizeof (export_type *), VAR_3);


  if (VAR_2)
    {
      if (VAR_4[0])
 VAR_1 = VAR_4[0]->ordinal;
      if (VAR_4[VAR_2-1])
 VAR_0 = VAR_4[VAR_2-1]->ordinal;
    }
}
