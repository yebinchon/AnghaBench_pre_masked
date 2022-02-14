
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (unsigned char*) ;
 scalar_t__ FUNC_1 (int) ;
 unsigned char* VAR_4 ;
 unsigned char* VAR_5 ;
 unsigned char* VAR_6 ;
 int FUNC_2 (char*) ;
 void* FUNC_3 (unsigned char*,int) ;
 int VAR_7 ;

void
FUNC_4()
{
 if (VAR_4) {
  void *VAR_8 = FUNC_3 (VAR_4, VAR_1);
  if (VAR_8 != ((void*)0)) {
   VAR_4 = VAR_8;
  } else {
   FUNC_0 (VAR_4);
   VAR_4 = ((void*)0);
  }
 } else
  VAR_4 = (unsigned char *)FUNC_1(VAR_1);
 if (VAR_4 == ((void*)0)) {
       FUNC_2("env_opt_start: malloc()/realloc() failed!!!\n");
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
