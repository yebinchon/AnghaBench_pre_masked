
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int) ;
 char* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int *,int ) ;
 char* VAR_3 ;
 char* VAR_4 ;
 scalar_t__ FUNC_4 (int,char*) ;

void
FUNC_5(void)
{
 char *VAR_5, *VAR_6;
 if (VAR_2 == 0) {
  FUNC_2("rn_init: radix functions require max_keylen be set\n");
  return;
 }
 VAR_4 = (char *)FUNC_4(3 * VAR_2, "rn_init");
 FUNC_0(VAR_4, 3 * VAR_2);
 VAR_3 = VAR_5 = VAR_4 + VAR_2;
 VAR_0 = VAR_6 = VAR_3 + VAR_2;
 while (VAR_5 < VAR_6)
  *VAR_5++ = -1;
 if (FUNC_3(&VAR_1, 0) == 0)
  FUNC_1("rn_init 2");
}
