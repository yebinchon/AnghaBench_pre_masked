
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i387_fsave {unsigned long fioff; unsigned long fooff; unsigned long fop; int foseg; int fiseg; int ftag; int fstat; int fctrl; int * st_space; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (char*,unsigned long*) ;
 int FUNC_2 (char*) ;

void
FUNC_3 (void *VAR_0)
{
  struct i387_fsave *VAR_1 = (struct i387_fsave *) VAR_0;
  int VAR_2;
  int VAR_3 = FUNC_2 ("st0");
  unsigned long VAR_4, VAR_5;

  for (VAR_2 = 0; VAR_2 < 8; VAR_2++)
    FUNC_0 (VAR_2 + VAR_3, ((char *) &VAR_1->st_space[0]) + VAR_2 * 10);

  FUNC_1 ("fioff", &VAR_1->fioff);
  FUNC_1 ("fooff", &VAR_1->fooff);


  FUNC_1 ("fop", &VAR_5);
  VAR_1->fop = (VAR_5 & 0x7FF) | (VAR_1->fop & 0xF800);


  FUNC_1 ("fctrl", &VAR_4);
  *(unsigned short *) &VAR_1->fctrl = VAR_4;

  FUNC_1 ("fstat", &VAR_4);
  VAR_4 &= 0xFFFF;
  *(unsigned short *) &VAR_1->fstat = VAR_4;

  FUNC_1 ("ftag", &VAR_4);
  VAR_4 &= 0xFFFF;
  *(unsigned short *) &VAR_1->ftag = VAR_4;

  FUNC_1 ("fiseg", &VAR_4);
  VAR_4 &= 0xFFFF;
  *(unsigned short *) &VAR_1->fiseg = VAR_4;

  FUNC_1 ("foseg", &VAR_4);
  VAR_4 &= 0xFFFF;
  *(unsigned short *) &VAR_1->foseg = VAR_4;
}
