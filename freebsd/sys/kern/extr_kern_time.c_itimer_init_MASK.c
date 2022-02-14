
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct itimer {int it_mtx; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int *,int ) ;

__attribute__((used)) static int
FUNC_1(void *VAR_1, int VAR_2, int VAR_3)
{
 struct itimer *VAR_4;

 VAR_4 = (struct itimer *)VAR_1;
 FUNC_0(&VAR_4->it_mtx, "itimer lock", ((void*)0), VAR_0);
 return (0);
}
