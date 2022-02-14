
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ,int) ;
 int FUNC_2 (char*,unsigned long) ;

__attribute__((used)) static unsigned char *
FUNC_3 (unsigned char *VAR_0, unsigned long VAR_1)
{
  FUNC_2 (FUNC_0(" %lu byte block: "), VAR_1);

  while (VAR_1 --)
    FUNC_2 ("%lx ", (unsigned long) FUNC_1 (VAR_0++, 1));

  return VAR_0;
}
