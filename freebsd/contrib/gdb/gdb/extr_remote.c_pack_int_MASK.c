
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*,int) ;

__attribute__((used)) static char *
FUNC_1 (char *VAR_0, int VAR_1)
{
  VAR_0 = FUNC_0 (VAR_0, (VAR_1 >> 24) & 0xff);
  VAR_0 = FUNC_0 (VAR_0, (VAR_1 >> 16) & 0xff);
  VAR_0 = FUNC_0 (VAR_0, (VAR_1 >> 8) & 0x0ff);
  VAR_0 = FUNC_0 (VAR_0, (VAR_1 & 0xff));
  return VAR_0;
}
