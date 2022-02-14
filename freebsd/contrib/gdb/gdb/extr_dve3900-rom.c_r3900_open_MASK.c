
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;


 int VAR_0 ;
 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (char*,int *,int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 int VAR_1 ;
 char** VAR_2 ;
 int * FUNC_5 (char*,char*) ;

__attribute__((used)) static void
FUNC_6 (char *VAR_3, int VAR_4)
{
  char VAR_5[64];
  int VAR_6;

  FUNC_2 (VAR_3, &VAR_1, VAR_4);




  FUNC_4 ("\r\r");
  for (VAR_6 = 0; VAR_2[VAR_6] != ((void*)0); VAR_6++)
    {
      FUNC_3 (VAR_2[VAR_6]);
      FUNC_1 (((void*)0), 0);
    }





  VAR_0 = 0;
  FUNC_3 ("v\r");
  if (FUNC_0 ("console device :", ((void*)0), 0) != -1)
    if (FUNC_0 ("\n", VAR_5, sizeof (VAR_5)) != -1)
      if (FUNC_5 (VAR_5, "ethernet") != ((void*)0))
 VAR_0 = 1;
  FUNC_1 (((void*)0), 0);
}
