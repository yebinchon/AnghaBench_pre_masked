
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zip {scalar_t__ central_directory_offset; } ;
typedef scalar_t__ int64_t ;


 scalar_t__ FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (char const*) ;

__attribute__((used)) static int
FUNC_2(struct zip *VAR_0, const char *VAR_1, int64_t VAR_2)
{



 if (FUNC_0(VAR_1 + 4) != 0)
  return 0;

 if (FUNC_0(VAR_1 + 4) != FUNC_0(VAR_1 + 6))
  return 0;

 if (FUNC_0(VAR_1 + 10) != FUNC_0(VAR_1 + 8))
  return 0;

 if (FUNC_1(VAR_1 + 16) + FUNC_1(VAR_1 + 12)
     > VAR_2)
  return 0;


 VAR_0->central_directory_offset = FUNC_1(VAR_1 + 16);





 return 32;
}
