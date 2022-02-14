
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*,int,void*,scalar_t__,scalar_t__) ;

void FUNC_1(char *VAR_4, int VAR_5, void *VAR_6, int VAR_7)
{
 int VAR_8, VAR_9;

 VAR_8 = FUNC_0(VAR_4, VAR_5, VAR_6,
      VAR_0, VAR_3);
 if (VAR_8 < 0)
  return;

 VAR_9 = FUNC_0(VAR_4 + VAR_8, VAR_5 - VAR_8, VAR_6,
       VAR_2, VAR_2 + 1);
 if (VAR_9 < 0)
  return;

 FUNC_0(VAR_4 + VAR_8 + VAR_9, VAR_5 - VAR_8 - VAR_9, VAR_6,
       VAR_3, VAR_1);
}
