
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 () ;
 void* FUNC_1 (void*,size_t) ;

__attribute__((used)) static inline void *
FUNC_2 (void *VAR_1, size_t *VAR_2, size_t VAR_3)
{
  size_t VAR_4 = *VAR_2;

  if (! VAR_1)
    {
      if (! VAR_4)
 {




   enum { DEFAULT_MXFAST = 64 };

   VAR_4 = DEFAULT_MXFAST / VAR_3;
   VAR_4 += !VAR_4;
 }
    }
  else
    {
      if (VAR_0 / 2 / VAR_3 < VAR_4)
 FUNC_0 ();
      VAR_4 *= 2;
    }

  *VAR_2 = VAR_4;
  return FUNC_1 (VAR_1, VAR_4 * VAR_3);
}
