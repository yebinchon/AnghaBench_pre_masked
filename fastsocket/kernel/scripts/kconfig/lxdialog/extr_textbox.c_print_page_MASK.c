
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WINDOW ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,int,int) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(WINDOW * VAR_2, int VAR_3, int VAR_4)
{
 int VAR_5, VAR_6 = 0;

 VAR_1 = 0;
 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
  FUNC_0(VAR_2, VAR_5, VAR_4);
  if (!VAR_6)
   VAR_1++;
  if (VAR_0 && !VAR_6)
   VAR_6 = 1;
 }
 FUNC_1(VAR_2);
}
