
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (int,unsigned long*) ;

__attribute__((used)) static void
FUNC_1(unsigned int *VAR_0, unsigned long VAR_1) {
 int VAR_2;

 *VAR_0 = 0;
 for (VAR_2 = 1; VAR_2 < 4; VAR_2++) {
  if (FUNC_0(VAR_2, &VAR_1))
   *VAR_0 |= VAR_2;
 }
}
