
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlist {char* n_name; scalar_t__ n_scnum; int n_value; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (char*,struct nlist*) ;
 int FUNC_2 (char*) ;

void
FUNC_3 (void)
{
  struct nlist VAR_1[2];

  VAR_1[0].n_name = "u";
  VAR_1[1].n_name = ((void*)0);
  if (FUNC_1 ("/sysV68", VAR_1) == 0 && VAR_1[0].n_scnum != 0)
    VAR_0 = VAR_1[0].n_value;
  else
    {
      FUNC_2 ("Cannot get kernel u area address");
      FUNC_0 (1);
    }
}
