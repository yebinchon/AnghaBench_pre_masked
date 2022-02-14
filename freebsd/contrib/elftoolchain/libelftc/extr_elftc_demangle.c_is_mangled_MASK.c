
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (char const*) ;

__attribute__((used)) static unsigned int
FUNC_3(const char *VAR_0, unsigned int VAR_1)
{

 switch (VAR_1) {
 case 130: return (FUNC_0(VAR_0) ? VAR_1 : 0);
 case 129: return (FUNC_1(VAR_0) ? VAR_1 : 0);
 case 128: return (FUNC_2(VAR_0) ? VAR_1 : 0);
 }


 if (FUNC_2(VAR_0))
  return (128);
 if (FUNC_1(VAR_0))
  return (129);
 if (FUNC_0(VAR_0))
  return (130);


 return (0);
}
