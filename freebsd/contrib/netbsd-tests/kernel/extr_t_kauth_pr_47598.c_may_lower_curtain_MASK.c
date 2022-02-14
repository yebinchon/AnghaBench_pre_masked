
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int seclevel ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ,int*,size_t*,int *,int ) ;

__attribute__((used)) static bool
FUNC_2(void)
{
 int VAR_1;
 size_t VAR_2 = sizeof(VAR_1);

 if (FUNC_1(VAR_0, &VAR_1, &VAR_2, ((void*)0), 0) != 0)
  FUNC_0("failed to read %s", VAR_0);

 return VAR_1 <= 0;
}
