
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 unsigned char* VAR_4 ;
 unsigned char* VAR_5 ;
 unsigned char* VAR_6 ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (unsigned char*,int) ;
 int VAR_7 ;

void
FUNC_3(void)
{
 if (VAR_4)
  VAR_4 = (unsigned char *)FUNC_2(VAR_4, VAR_1);
 else
  VAR_4 = (unsigned char *)FUNC_0(VAR_1);
 if (VAR_4 == ((void*)0)) {
       FUNC_1("env_opt_start: malloc()/realloc() failed!!!\n");
  VAR_4 = VAR_6 = VAR_5 = ((void*)0);
  return;
 }
 VAR_6 = VAR_4;
 VAR_5 = VAR_4 + VAR_1;
 *VAR_6++ = VAR_0;
 *VAR_6++ = VAR_2;
 *VAR_6++ = VAR_7;
 *VAR_6++ = VAR_3;
}
