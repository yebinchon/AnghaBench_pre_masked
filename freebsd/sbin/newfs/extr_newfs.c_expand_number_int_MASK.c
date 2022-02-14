
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ int64_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char const*,scalar_t__*) ;

__attribute__((used)) static int
FUNC_1(const char *VAR_4, int *VAR_5)
{
 int64_t VAR_6;
 int VAR_7;

 VAR_7 = FUNC_0(VAR_4, &VAR_6);
 if (VAR_7 < 0)
  return (VAR_7);
 if (VAR_6 > VAR_1 || VAR_6 < VAR_2) {
  VAR_3 = VAR_0;
  return (-1);
 }
 *VAR_5 = (int)VAR_6;
 return (0);
}
