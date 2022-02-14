
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (void*) ;
 int FUNC_2 (char*,int ) ;
 void* FUNC_3 (void*,size_t) ;
 int FUNC_4 (int const) ;

extern void *
FUNC_5(void *VAR_1, size_t VAR_2)
{
 FUNC_0(VAR_2 > 0);






 void *VAR_3 = VAR_1;
 VAR_1 = FUNC_3(VAR_1, VAR_2);

 if (VAR_1 == ((void*)0)) {
  const int VAR_4 = VAR_0;
  FUNC_1(VAR_3);
  FUNC_2("%s", FUNC_4(VAR_4));
 }

 return VAR_1;
}
