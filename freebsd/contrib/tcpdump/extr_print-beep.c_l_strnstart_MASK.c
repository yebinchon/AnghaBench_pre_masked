
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
typedef int netdissect_options ;


 int FUNC_0 (char const,scalar_t__) ;
 scalar_t__ FUNC_1 (char const*,char const*,scalar_t__) ;

__attribute__((used)) static int
FUNC_2(netdissect_options *VAR_0, const char *VAR_1, u_int VAR_2,
    const char *VAR_3, u_int VAR_4)
{
 if (!FUNC_0(*VAR_3, VAR_2)) {





  return 0;
 }
 if (VAR_2 > VAR_4)
  return 0;

 return (FUNC_1(VAR_1, VAR_3, VAR_2) == 0 ? 1 : 0);
}
