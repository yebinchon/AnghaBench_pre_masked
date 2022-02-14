
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int va_list ;


 int FUNC_0 (char*,size_t,char const*,int ) ;
 int FUNC_1 (char*,size_t,char const*,int ) ;

__attribute__((used)) static int
FUNC_2(char *VAR_0, size_t VAR_1, const char *VAR_2, va_list VAR_3)
{
 int VAR_4;
 if (VAR_1 == 0)
  return -1;



 VAR_4 = FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3);

 VAR_0[VAR_1-1] = '\0';
 if (VAR_4 < 0 || ((size_t)VAR_4) >= VAR_1) {


  return -1;
 }
 return VAR_4;
}
