
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,int,unsigned long*) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*,int,unsigned long) ;
 int FUNC_4 (int,char*) ;

__attribute__((used)) static void
FUNC_5 (int VAR_5)
{
  int VAR_6, VAR_7;
  unsigned long VAR_8, VAR_9[32];
  char VAR_10[4];

  if (VAR_5 == -1)
    {
      VAR_6 = FUNC_0 (255, 0x27fff, VAR_9);
      if (VAR_6 != VAR_2)
 {
   FUNC_1 ("RDI_CPUread: %s\n", FUNC_2 (VAR_6));
 }

      for (VAR_5 = 0; VAR_5 < 15; VAR_5++)
 {
   FUNC_3 (VAR_10, 4, VAR_9[VAR_5]);
   FUNC_4 (VAR_5, (char *) VAR_10);
 }
      FUNC_3 (VAR_10, 4, VAR_9[15]);
      FUNC_4 (VAR_1, (char *) VAR_10);
      FUNC_5 (VAR_0);
    }
  else
    {
      if (VAR_5 == VAR_0)
 VAR_7 = VAR_4;
      else if (VAR_5 == VAR_1)
 VAR_7 = VAR_3;
      else if (VAR_5 < 0 || VAR_5 > 15)
 {
   VAR_8 = 0;
   FUNC_4 (VAR_5, (char *) &VAR_8);
   return;
 }
      else
 VAR_7 = 1 << VAR_5;

      VAR_6 = FUNC_0 (255, VAR_7, &VAR_8);
      if (VAR_6 != VAR_2)
 {
   FUNC_1 ("RDI_CPUread: %s\n", FUNC_2 (VAR_6));
 }
      FUNC_3 (VAR_10, 4, VAR_8);
      FUNC_4 (VAR_5, (char *) VAR_10);
    }
}
