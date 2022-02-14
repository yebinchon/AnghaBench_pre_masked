
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,char*) ;
 scalar_t__ FUNC_1 (int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static __attribute__((constructor)) void
FUNC_2(void)
{




 if (FUNC_1(0, &VAR_2) == 0)
  FUNC_0(1, "Failed to create altq queue map");
 if (FUNC_1(0, &VAR_0) == 0)
  FUNC_0(1, "Failed to create altq interface map");
 if (FUNC_1(0, &VAR_1) == 0)
  FUNC_0(1, "Failed to create altq queue id map");
}
