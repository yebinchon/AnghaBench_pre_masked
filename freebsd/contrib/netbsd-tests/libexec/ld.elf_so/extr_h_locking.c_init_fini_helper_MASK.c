
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (void*) ;
 void* FUNC_1 (void*,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,char*,char*) ;
 int VAR_1 ;

__attribute__((used)) static void *
FUNC_4(void *VAR_2)
{
 void *VAR_3;
 if ((VAR_3 = FUNC_1(VAR_2, VAR_0)) == ((void*)0)) {
  FUNC_3(VAR_1, "opening %s failed\n", (char *)VAR_2);
  FUNC_2(1);
 }
 FUNC_0(VAR_3);
 return ((void*)0);
}
