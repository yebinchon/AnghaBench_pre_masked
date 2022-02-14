
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 short* VAR_0 ;

__attribute__((used)) static void
FUNC_0(short VAR_1)
{
 int VAR_2;
 short VAR_3;
 short VAR_4;

 VAR_4 = VAR_0[0];
 VAR_0[0] = VAR_1;
 for (VAR_2 = 1; VAR_4 != VAR_1; VAR_2++) {
  VAR_3 = VAR_0[VAR_2];
  VAR_0[VAR_2] = VAR_4;
  VAR_4 = VAR_3;
 }
}
