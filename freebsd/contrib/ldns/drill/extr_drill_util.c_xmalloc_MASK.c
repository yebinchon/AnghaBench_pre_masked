
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ) ;
 void* FUNC_1 (size_t) ;
 int FUNC_2 (char*) ;

void *
FUNC_3(size_t VAR_1)
{
 void *VAR_2;

 VAR_2 = FUNC_1(VAR_1);
 if (!VAR_2) {
  FUNC_2("Mem failure\n");
  FUNC_0(VAR_0);
 }
 return VAR_2;
}
