
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fd ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int,int*,int) ;

__attribute__((used)) static void *
FUNC_2(void *VAR_1)
{
 int VAR_2 = (uintptr_t)VAR_1;

 FUNC_1(VAR_2, &VAR_2, sizeof(VAR_2));
 if (!VAR_0)
  FUNC_0(1, "should not have returned");
 if (VAR_2 != 37)
  FUNC_0(1, "got invalid magic");

 return ((void*)0);
}
