
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 void* FUNC_0 (int,size_t) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*) ;
 int VAR_0 ;

void *
FUNC_3(size_t VAR_1)
{
 void *VAR_2;

 if ((VAR_2 = FUNC_0(1, VAR_1)) == ((void*)0)) {
  (void) FUNC_2(VAR_0, "internal error: out of memory\n");
  FUNC_1(1);
 }

 return (VAR_2);
}
