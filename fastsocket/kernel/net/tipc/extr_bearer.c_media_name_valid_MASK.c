
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (char const*,int ) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_2(const char *VAR_2)
{
 u32 VAR_3;

 VAR_3 = FUNC_0(VAR_2);
 if ((VAR_3 + 1) > VAR_0)
  return 0;
 return (FUNC_1(VAR_2, VAR_1) == VAR_3);
}
