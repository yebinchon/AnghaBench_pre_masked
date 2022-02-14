
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int adapter_t ;


 int FUNC_0 (int *,char*,unsigned int,unsigned int,unsigned int,unsigned int) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int FUNC_1 (int ) ;
 unsigned int FUNC_2 (int ) ;
 unsigned int FUNC_3 (int ) ;
 int FUNC_4 (int *,int *) ;

int FUNC_5(adapter_t *VAR_4)
{
 int VAR_5;
 u32 VAR_6;
 unsigned int VAR_7, VAR_8, VAR_9;

 VAR_5 = FUNC_4(VAR_4, &VAR_6);
 if (VAR_5)
  return VAR_5;

 VAR_7 = FUNC_3(VAR_6);
 VAR_8 = FUNC_1(VAR_6);
 VAR_9 = FUNC_2(VAR_6);

 if (VAR_7 == VAR_3 && VAR_8 == VAR_1 &&
     VAR_9 == VAR_2)
  return 0;

 else if (VAR_8 != VAR_1 || VAR_9 < VAR_2)
  FUNC_0(VAR_4, "found old FW minor version(%u.%u), "
          "driver compiled for version %u.%u\n", VAR_8, VAR_9,
   VAR_1, VAR_2);
 else {
  FUNC_0(VAR_4, "found newer FW version(%u.%u), "
          "driver compiled for version %u.%u\n", VAR_8, VAR_9,
   VAR_1, VAR_2);
   return 0;
 }
 return -VAR_0;
}
