
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct minimal_symbol {int dummy; } ;
struct cleanup {int dummy; } ;
typedef int CORE_ADDR ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct minimal_symbol*) ;
 int FUNC_1 (struct cleanup*) ;
 unsigned int FUNC_2 (char*,int) ;
 int VAR_1 ;
 struct minimal_symbol* FUNC_3 (char*,int *,int *) ;
 int FUNC_4 (int) ;
 struct cleanup* FUNC_5 () ;
 int FUNC_6 (char*,int,unsigned int) ;
 int FUNC_7 (int ,char*,int) ;
 int FUNC_8 (int ,char*,int) ;

void
FUNC_9 (int VAR_2)
{
  CORE_ADDR VAR_3;
  struct minimal_symbol *VAR_4;
  int VAR_5;
  char VAR_6[4];
  unsigned int VAR_7;
  struct cleanup *VAR_8 = FUNC_5 ();


  VAR_1 = FUNC_4 (VAR_2);
  VAR_4 = FUNC_3 ("__dld_flags", ((void*)0), ((void*)0));

  VAR_3 = FUNC_0 (VAR_4);
  VAR_5 = FUNC_7 (VAR_3, VAR_6, 4);

  VAR_7 = FUNC_2 (VAR_6, 4);

  VAR_7 &= ~VAR_0;
  FUNC_6 (VAR_6, 4, VAR_7);
  VAR_5 = FUNC_8 (VAR_3, VAR_6, 4);

  FUNC_1 (VAR_8);
}
