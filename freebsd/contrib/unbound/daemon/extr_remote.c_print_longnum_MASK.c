
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RES ;


 int FUNC_0 (int *,char*,char const*,unsigned long,...) ;

__attribute__((used)) static int
FUNC_1(RES* VAR_0, const char* VAR_1, size_t VAR_2)
{
 if(VAR_2 > 1024*1024*1024) {

  size_t VAR_3 = VAR_2 / (size_t)1000000;
  size_t VAR_4 = VAR_2 % (size_t)1000000;
  return FUNC_0(VAR_0, "%s%u%6.6u\n", VAR_1,
   (unsigned)VAR_3, (unsigned)VAR_4);
 } else {
  return FUNC_0(VAR_0, "%s%lu\n", VAR_1, (unsigned long)VAR_2);
 }
}
