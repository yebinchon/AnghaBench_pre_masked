
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 void* FUNC_2 (void*,size_t) ;

void *
FUNC_3(void *VAR_1, size_t VAR_2)
{
 void *VAR_3;

 VAR_3 = FUNC_2(VAR_1, VAR_2);
 if (!VAR_3) {
  FUNC_1("Mem failure\n");
  FUNC_0(VAR_0);
 }
 return VAR_3;
}
