
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 size_t VAR_1 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int ,char*) ;
 int FUNC_3 (int *) ;
 int VAR_2 ;
 size_t VAR_3 ;
 int * VAR_4 ;
 int * VAR_5 ;
 scalar_t__ FUNC_4 (int ,char*) ;
 int * VAR_6 ;

int FUNC_5(void)
{
 int VAR_7;

 for (;;) {
  if (VAR_6 == ((void*)0)) {
   if (VAR_1 >= VAR_3)
    return VAR_0;
   if (FUNC_4(VAR_4[VAR_1], "-") == 0)
    VAR_6 = VAR_5;
   else if ((VAR_6 = FUNC_2(VAR_4[VAR_1], "r")) == ((void*)0))
    FUNC_0("can't open file %s", VAR_4[VAR_1]);
   VAR_2 = 1;
  }
  if ((VAR_7 = FUNC_3(VAR_6)) != VAR_0)
   return VAR_7;
  if (VAR_6 != VAR_5)
   FUNC_1(VAR_6);
  VAR_6 = ((void*)0);
  VAR_1++;
 }
}
