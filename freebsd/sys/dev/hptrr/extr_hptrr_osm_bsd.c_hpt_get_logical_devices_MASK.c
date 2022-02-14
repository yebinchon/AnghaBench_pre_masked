
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int HPT_U32 ;
typedef scalar_t__ DEVICEID ;


 scalar_t__ FUNC_0 (int ,int*,int,scalar_t__*,int) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_1(DEVICEID * VAR_1, int VAR_2)
{
 int VAR_3;
 HPT_U32 VAR_4 = VAR_2-1;

 if (FUNC_0(VAR_0,
   &VAR_4, sizeof(HPT_U32), VAR_1, sizeof(DEVICEID)*VAR_2))
  return -1;

 VAR_2 = (int)VAR_1[0];
 for (VAR_3=0; VAR_3<VAR_2; VAR_3++) VAR_1[VAR_3] = VAR_1[VAR_3+1];
 return VAR_2;
}
