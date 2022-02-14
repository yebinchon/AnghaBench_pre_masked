
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,int,unsigned long*) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (unsigned long*,int,unsigned long) ;

__attribute__((used)) static void
FUNC_5 (int VAR_6)
{
  int VAR_7, VAR_8;


  unsigned long VAR_9[3], VAR_10[3];

  if (VAR_6 == -1)
    {
      for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++)
 FUNC_5 (VAR_6);
    }
  else
    {
      FUNC_1 (VAR_6, (char *) VAR_9);

      FUNC_4 (VAR_10, 4, VAR_9[0]);

      if (VAR_6 == VAR_0)
 VAR_8 = VAR_5;
      else if (VAR_6 == VAR_1)
 VAR_8 = VAR_4;
      else if (VAR_6 < 0 || VAR_6 > 15)
 return;
      else
 VAR_8 = 1 << VAR_6;

      VAR_7 = FUNC_0 (255, VAR_8, VAR_10);
      if (VAR_7 != VAR_3)
 {
   FUNC_2 ("RDI_CPUwrite: %s\n", FUNC_3 (VAR_7));
 }
    }
}
