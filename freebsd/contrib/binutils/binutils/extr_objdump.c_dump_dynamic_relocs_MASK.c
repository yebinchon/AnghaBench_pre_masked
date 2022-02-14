
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bfd ;
typedef int arelent ;


 long FUNC_0 (int *,int **,int ) ;
 int FUNC_1 (int ) ;
 long FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *,int **,long) ;
 int VAR_0 ;
 int FUNC_5 (int **) ;
 int FUNC_6 (char*) ;
 int ** FUNC_7 (long) ;

__attribute__((used)) static void
FUNC_8 (bfd *VAR_1)
{
  long VAR_2;
  arelent **VAR_3;
  long VAR_4;

  VAR_2 = FUNC_2 (VAR_1);
  if (VAR_2 < 0)
    FUNC_1 (FUNC_3 (VAR_1));

  FUNC_6 ("DYNAMIC RELOCATION RECORDS");

  if (VAR_2 == 0)
    FUNC_6 (" (none)\n\n");
  else
    {
      VAR_3 = FUNC_7 (VAR_2);
      VAR_4 = FUNC_0 (VAR_1, VAR_3, VAR_0);

      if (VAR_4 < 0)
 FUNC_1 (FUNC_3 (VAR_1));
      else if (VAR_4 == 0)
 FUNC_6 (" (none)\n\n");
      else
 {
   FUNC_6 ("\n");
   FUNC_4 (VAR_1, ((void*)0), VAR_3, VAR_4);
   FUNC_6 ("\n\n");
 }
      FUNC_5 (VAR_3);
    }
}
