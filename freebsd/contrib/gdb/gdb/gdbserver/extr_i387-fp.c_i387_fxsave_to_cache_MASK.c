
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i387_fxsave {unsigned long fioff; unsigned long fooff; unsigned long mxcsr; int fctrl; int fstat; int fiseg; int foseg; int fop; int * xmm_space; int * st_space; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct i387_fxsave*,int) ;
 int VAR_0 ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (char*,unsigned long*) ;

void
FUNC_4 (const void *VAR_1)
{
  struct i387_fxsave *VAR_2 = (struct i387_fxsave *) VAR_1;
  int VAR_3, VAR_4;
  int VAR_5 = FUNC_0 ("st0");
  int VAR_6 = FUNC_0 ("xmm0");
  unsigned long VAR_7;

  for (VAR_3 = 0; VAR_3 < 8; VAR_3++)
    FUNC_2 (VAR_3 + VAR_5, ((char *) &VAR_2->st_space[0]) + VAR_3 * 16);
  for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
    FUNC_2 (VAR_3 + VAR_6, ((char *) &VAR_2->xmm_space[0]) + VAR_3 * 16);

  FUNC_3 ("fioff", &VAR_2->fioff);
  FUNC_3 ("fooff", &VAR_2->fooff);
  FUNC_3 ("mxcsr", &VAR_2->mxcsr);


  VAR_7 = VAR_2->fctrl & 0xFFFF;
  FUNC_3 ("fctrl", &VAR_7);

  VAR_7 = VAR_2->fstat & 0xFFFF;
  FUNC_3 ("fstat", &VAR_7);


  VAR_4 = (VAR_2->fstat >> 11) & 0x7;
  VAR_7 = 0;
  for (VAR_3 = 7; VAR_3 >= 0; VAR_3--)
    {
      int VAR_8;
      if (VAR_7 & (1 << VAR_3))
 VAR_8 = FUNC_1 (VAR_2, (VAR_3 + 8 - VAR_4) % 8);
      else
 VAR_8 = 3;
      VAR_7 |= VAR_8 << (2 * VAR_3);
    }
  FUNC_3 ("ftag", &VAR_7);

  VAR_7 = VAR_2->fiseg & 0xFFFF;
  FUNC_3 ("fiseg", &VAR_7);

  VAR_7 = VAR_2->foseg & 0xFFFF;
  FUNC_3 ("foseg", &VAR_7);

  VAR_7 = (VAR_2->fop) & 0x7FF;
  FUNC_3 ("fop", &VAR_7);
}
