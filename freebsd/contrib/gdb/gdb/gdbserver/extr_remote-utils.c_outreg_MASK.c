
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int) ;
 void* FUNC_2 (int) ;

__attribute__((used)) static char *
FUNC_3 (int VAR_0, char *VAR_1)
{
  if ((VAR_0 >> 12) != 0)
    *VAR_1++ = FUNC_2 ((VAR_0 >> 12) & 0xf);
  if ((VAR_0 >> 8) != 0)
    *VAR_1++ = FUNC_2 ((VAR_0 >> 8) & 0xf);
  *VAR_1++ = FUNC_2 ((VAR_0 >> 4) & 0xf);
  *VAR_1++ = FUNC_2 (VAR_0 & 0xf);
  *VAR_1++ = ':';
  FUNC_0 (VAR_0, VAR_1);
  VAR_1 += 2 * FUNC_1 (VAR_0);
  *VAR_1++ = ';';

  return VAR_1;
}
