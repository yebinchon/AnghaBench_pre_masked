
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (void*) ;
 scalar_t__* VAR_1 ;

__attribute__((used)) static void
FUNC_1(int VAR_2, char VAR_3)
{
 void *VAR_4;
 char *VAR_5;

 if (VAR_2 < 0 || VAR_2 > 7)
  return;
 VAR_4 = (void *)(VAR_0 + VAR_1[VAR_2]);
 VAR_5 = (char *)FUNC_0(VAR_4);
 *VAR_5 = VAR_3;
}
