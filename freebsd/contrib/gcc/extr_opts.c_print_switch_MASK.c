
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;
 int FUNC_0 (char const*,int ) ;
 int FUNC_1 (char) ;
 int VAR_1 ;
 int FUNC_2 (char const*) ;

__attribute__((used)) static unsigned int
FUNC_3 (const char *VAR_2, unsigned int VAR_3)
{
  unsigned int VAR_4 = FUNC_2 (VAR_2) + 1;

  if (VAR_3)
    {
      FUNC_1 (',');
      if (VAR_3 + VAR_4 > VAR_0)
 {
   FUNC_1 ('\n');
   FUNC_1 (' ');
   VAR_3 = 1;
 }
    }
  else
    FUNC_1 (' ');

  FUNC_1 (' ');
  FUNC_0 (VAR_2, VAR_1);

  return VAR_3 + VAR_4 + 1;
}
