
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* filename; int dir; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,long) ;
 char** VAR_0 ;
 unsigned int VAR_1 ;
 TYPE_1__* VAR_2 ;
 unsigned int VAR_3 ;
 char* FUNC_2 (size_t) ;
 int FUNC_3 (char*,char*,size_t) ;
 int FUNC_4 (char) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static void
FUNC_7 (void)
{
  size_t VAR_4;
  char *VAR_5;
  unsigned int VAR_6;


  for (VAR_6 = 1; VAR_6 < VAR_1; ++VAR_6)
    {
      VAR_4 = FUNC_6 (VAR_0[VAR_6]) + 1;
      VAR_5 = FUNC_2 (VAR_4);
      FUNC_3 (VAR_5, VAR_0[VAR_6], VAR_4);
    }

  FUNC_4 ('\0');

  for (VAR_6 = 1; VAR_6 < VAR_3; ++VAR_6)
    {
      if (VAR_2[VAR_6].filename == ((void*)0))
 {
   FUNC_1 (FUNC_0("unassigned file number %ld"), (long) VAR_6);

   VAR_2[VAR_6].filename = "";
   continue;
 }

      VAR_4 = FUNC_6 (VAR_2[VAR_6].filename) + 1;
      VAR_5 = FUNC_2 (VAR_4);
      FUNC_3 (VAR_5, VAR_2[VAR_6].filename, VAR_4);

      FUNC_5 (VAR_2[VAR_6].dir);
      FUNC_5 (0);
      FUNC_5 (0);
    }


  FUNC_4 (0);
}
