
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (void const*,int,char*,int*) ;
 int FUNC_1 (void const*,scalar_t__) ;
 int FUNC_2 (void const*,char const*) ;
 scalar_t__ FUNC_3 (void const*,int) ;

__attribute__((used)) static int FUNC_4(const void *VAR_3, const void *VAR_4,
         int VAR_5)
{
 uint32_t VAR_6;
 const char *VAR_7;
 int VAR_8;


 VAR_6 = FUNC_3(VAR_4, VAR_5);
 if (VAR_6 == (uint32_t)-1)
  return -VAR_1;

 if (VAR_6)
  return FUNC_1(VAR_3, VAR_6);


 VAR_7 = FUNC_0(VAR_4, VAR_5, "target-path", &VAR_8);
 if (!VAR_7) {







  if (VAR_8 == -VAR_2)
   return -VAR_0;

  return VAR_8;
 }

 return FUNC_2(VAR_3, VAR_7);
}
