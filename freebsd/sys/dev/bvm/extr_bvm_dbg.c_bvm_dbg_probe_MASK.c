
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (char*,int ,char*,int*) ;

__attribute__((used)) static int
FUNC_2(void)
{
 int VAR_2, VAR_3;

 VAR_2 = 0;
 FUNC_1("bvmdbg", 0, "disabled", &VAR_2);

 if (!VAR_2) {
  if (FUNC_1("bvmdbg", 0, "port", &VAR_3) == 0)
   VAR_1 = VAR_3;

  if (FUNC_0(VAR_1) == VAR_0) {




   return (1);
  }
 }

 return (-1);
}
