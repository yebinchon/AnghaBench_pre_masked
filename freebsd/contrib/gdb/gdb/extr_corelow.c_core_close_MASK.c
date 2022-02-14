
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* to_sections; int * to_sections_end; } ;


 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 char* FUNC_4 (int *) ;
 int * VAR_0 ;
 int * VAR_1 ;
 TYPE_1__ VAR_2 ;
 int * VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (char*,char*,int ) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static void
FUNC_7 (int VAR_6)
{
  char *VAR_7;

  if (VAR_0)
    {
      VAR_4 = VAR_5;







      VAR_7 = FUNC_4 (VAR_0);
      if (!FUNC_1 (VAR_0))
 FUNC_5 ("cannot close \"%s\": %s",
   VAR_7, FUNC_2 (FUNC_3 ()));
      FUNC_6 (VAR_7);
      VAR_0 = ((void*)0);
      if (VAR_2.to_sections)
 {
   FUNC_6 (VAR_2.to_sections);
   VAR_2.to_sections = ((void*)0);
   VAR_2.to_sections_end = ((void*)0);
 }
    }
  VAR_3 = ((void*)0);
  VAR_1 = ((void*)0);
}
