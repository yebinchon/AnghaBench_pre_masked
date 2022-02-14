
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned char* FUNC_0 (int,size_t*) ;
 int FUNC_1 (char) ;
 int FUNC_2 (unsigned char*,size_t) ;

void
FUNC_3(int VAR_0)
{
 unsigned char *VAR_1;
 size_t VAR_2;

 VAR_1 = FUNC_0(VAR_0, &VAR_2);
 if (VAR_1 == ((void*)0)) {

  while (VAR_2--) {
   FUNC_1('x');
   FUNC_1('x');
  }
 } else
  FUNC_2(VAR_1, VAR_2);
}
