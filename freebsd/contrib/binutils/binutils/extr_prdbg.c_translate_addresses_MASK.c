
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bfd ;
typedef int asymbol ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int **) ;
 int FUNC_1 (char*,int *,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *,char*,...) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_3 (bfd *VAR_5, char *VAR_6, FILE *VAR_7, asymbol **VAR_8)
{
  VAR_4 = FUNC_1 (VAR_6, ((void*)0), 16);
  VAR_2 = VAR_0;
  FUNC_0 (VAR_5, VAR_1, VAR_8);

  if (! VAR_2)
    FUNC_2 (VAR_7, "??");
  else
    FUNC_2 (VAR_7, "%u", VAR_3);
}
