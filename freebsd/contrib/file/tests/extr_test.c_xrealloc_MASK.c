
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 void* FUNC_2 (void*,size_t) ;
 int VAR_0 ;

__attribute__((used)) static void *
FUNC_3(void *VAR_1, size_t VAR_2)
{
 VAR_1 = FUNC_2(VAR_1, VAR_2);
 if (VAR_1 == ((void*)0)) {
  (void)FUNC_1(VAR_0, "ERROR slurping file: out of memory\n");
  FUNC_0(10);
 }
 return VAR_1;
}
