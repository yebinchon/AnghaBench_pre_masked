
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i387_fsave {unsigned long fioff; unsigned long fooff; int fctrl; int fstat; int ftag; int fiseg; int foseg; int fop; int * st_space; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (char*,unsigned long*) ;

void
FUNC_3 (const void *VAR_0)
{
  struct i387_fsave *VAR_1 = (struct i387_fsave *) VAR_0;
  int VAR_2;
  int VAR_3 = FUNC_0 ("st0");
  unsigned long VAR_4;

  for (VAR_2 = 0; VAR_2 < 8; VAR_2++)
    FUNC_1 (VAR_2 + VAR_3, ((char *) &VAR_1->st_space[0]) + VAR_2 * 10);

  FUNC_2 ("fioff", &VAR_1->fioff);
  FUNC_2 ("fooff", &VAR_1->fooff);


  VAR_4 = VAR_1->fctrl & 0xFFFF;
  FUNC_2 ("fctrl", &VAR_4);

  VAR_4 = VAR_1->fstat & 0xFFFF;
  FUNC_2 ("fstat", &VAR_4);

  VAR_4 = VAR_1->ftag & 0xFFFF;
  FUNC_2 ("ftag", &VAR_4);

  VAR_4 = VAR_1->fiseg & 0xFFFF;
  FUNC_2 ("fiseg", &VAR_4);

  VAR_4 = VAR_1->foseg & 0xFFFF;
  FUNC_2 ("foseg", &VAR_4);

  VAR_4 = (VAR_1->fop) & 0x7FF;
  FUNC_2 ("fop", &VAR_4);
}
