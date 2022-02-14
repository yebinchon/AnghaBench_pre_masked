
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i387_fxsave {unsigned long fioff; unsigned long fooff; unsigned long mxcsr; unsigned long fop; int foseg; int fiseg; int ftag; int fstat; int fctrl; int * xmm_space; int * st_space; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (char*,unsigned long*) ;
 int FUNC_2 (char*) ;
 int VAR_0 ;

void
FUNC_3 (void *VAR_1)
{
  struct i387_fxsave *VAR_2 = (struct i387_fxsave *) VAR_1;
  int VAR_3;
  int VAR_4 = FUNC_2 ("st0");
  int VAR_5 = FUNC_2 ("xmm0");
  unsigned long VAR_6, VAR_7;

  for (VAR_3 = 0; VAR_3 < 8; VAR_3++)
    FUNC_0 (VAR_3 + VAR_4, ((char *) &VAR_2->st_space[0]) + VAR_3 * 16);
  for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
    FUNC_0 (VAR_3 + VAR_5, ((char *) &VAR_2->xmm_space[0]) + VAR_3 * 16);

  FUNC_1 ("fioff", &VAR_2->fioff);
  FUNC_1 ("fooff", &VAR_2->fooff);
  FUNC_1 ("mxcsr", &VAR_2->mxcsr);


  FUNC_1 ("fop", &VAR_7);
  VAR_2->fop = (VAR_7 & 0x7FF) | (VAR_2->fop & 0xF800);


  FUNC_1 ("fctrl", &VAR_6);
  *(unsigned short *) &VAR_2->fctrl = VAR_6;

  FUNC_1 ("fstat", &VAR_6);
  VAR_6 &= 0xFFFF;
  *(unsigned short *) &VAR_2->fstat = VAR_6;


  FUNC_1 ("ftag", &VAR_6);
  VAR_6 &= 0xFFFF;
  for (VAR_3 = 7; VAR_3 >= 0; VAR_3--)
    {
      int VAR_8 = (VAR_6 >> (VAR_3 * 2)) & 3;

      if (VAR_8 != 3)
 VAR_7 |= (1 << VAR_3);
    }
  *(unsigned short *) &VAR_2->ftag = VAR_7;

  FUNC_1 ("fiseg", &VAR_6);
  VAR_6 &= 0xFFFF;
  *(unsigned short *) &VAR_2->fiseg = VAR_6;

  FUNC_1 ("foseg", &VAR_6);
  VAR_6 &= 0xFFFF;
  *(unsigned short *) &VAR_2->foseg = VAR_6;
}
