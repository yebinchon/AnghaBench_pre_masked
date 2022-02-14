
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef int phandle ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (void*,int) ;
 char* FUNC_2 (void*,int,char const*,int*) ;
 int FUNC_3 (void*,char const*) ;
 int FUNC_4 (void*,char const*,scalar_t__) ;
 int FUNC_5 (void*,int,char const*,scalar_t__,int,scalar_t__*,int) ;

__attribute__((used)) static int FUNC_6(void *VAR_2, void *VAR_3,
         int VAR_4,
         const char *VAR_5, uint32_t VAR_6,
         const char *VAR_7, uint32_t VAR_8,
         int VAR_9, const char *VAR_10)
{
 const char *VAR_11;
 uint32_t VAR_12;
 int VAR_13, VAR_14;
 int VAR_15;

 if (VAR_4 < 0)
  return VAR_4;

 VAR_11 = FUNC_2(VAR_2, VAR_4, VAR_10,
      &VAR_15);
 if (!VAR_11)
  return VAR_15;

 VAR_13 = FUNC_3(VAR_2, VAR_11);
 if (VAR_13 < 0)
  return VAR_13;

 VAR_12 = FUNC_1(VAR_2, VAR_13);
 if (!VAR_12)
  return -VAR_1;

 VAR_14 = FUNC_4(VAR_3, VAR_5, VAR_6);
 if (VAR_14 == -VAR_1)
  return -VAR_0;
 if (VAR_14 < 0)
  return VAR_14;

 VAR_12 = FUNC_0(VAR_12);
 return FUNC_5(VAR_3, VAR_14,
         VAR_7, VAR_8, VAR_9,
         &VAR_12, sizeof(VAR_12));
}
