
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int out ;
typedef scalar_t__ int32_t ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (scalar_t__ const**,int,scalar_t__,int ) ;
 int VAR_0 ;

int32_t
FUNC_4(int32_t VAR_1, int32_t VAR_2)
{
 const int32_t VAR_3[5] = {0, 0, 0, 0, 0};
 int32_t VAR_4, VAR_5;

 FUNC_0(VAR_2 >= 0);
 FUNC_0(VAR_1 > 0);
 FUNC_0(VAR_1 <= 5);
 VAR_5 = FUNC_1();
 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++)
  if (VAR_1 - FUNC_3(&VAR_3, sizeof(VAR_3[0]), VAR_1, VAR_0))
   FUNC_2(1, "fwrite");
 return VAR_5;
}
