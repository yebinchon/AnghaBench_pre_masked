
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int * VAR_2 ;
 int * VAR_3 ;
 int * VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

void
FUNC_7()
{
 int VAR_11;

 if (!VAR_8)
  return;

 FUNC_2(VAR_7);
 for (VAR_11 = 0; VAR_11 < 5; VAR_11++)
 {
  FUNC_3(VAR_7, VAR_11, 0);
  FUNC_1(VAR_7);
  if (VAR_6 == VAR_1)
   FUNC_0(VAR_7, (VAR_5) ?
     VAR_4[VAR_11] : VAR_3[VAR_11]);
  else if (VAR_6 == VAR_0)
   FUNC_0(VAR_7, VAR_2[VAR_11]);
 }
 FUNC_3(VAR_7, 5, 0);
 if (!VAR_9)
  FUNC_6(VAR_7);
 FUNC_0(VAR_7, VAR_10);
 FUNC_5(VAR_7);
 FUNC_4(VAR_7);
}
