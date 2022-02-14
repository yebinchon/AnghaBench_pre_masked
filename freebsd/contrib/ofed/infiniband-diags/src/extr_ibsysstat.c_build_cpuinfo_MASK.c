
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ret ;


 int FUNC_0 (char*,int) ;
 scalar_t__ FUNC_1 (char*,int*,size_t*,int *,int ) ;

int FUNC_2(void)
{
 int VAR_0;
 size_t VAR_1 = sizeof(VAR_0);

 if (FUNC_1("hw.ncpu", &VAR_0, &VAR_1, ((void*)0), 0) != 0 || VAR_0 < 1)
  VAR_0 = 1;
 return VAR_0;

 FUNC_0("ncpu %d", VAR_0);
}
