
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct ifbrparam {int ifbrp_maxage; } ;
struct afswtch {int dummy; } ;
typedef int param ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,int ,struct ifbrparam*,int,int) ;
 int FUNC_1 (int,char*,char const*) ;
 int FUNC_2 (int,char*,char const*) ;
 scalar_t__ FUNC_3 (char const*,int*) ;

__attribute__((used)) static void
FUNC_4(const char *VAR_1, int VAR_2, int VAR_3, const struct afswtch *VAR_4)
{
 struct ifbrparam VAR_5;
 u_long VAR_6;

 if (FUNC_3(VAR_1, &VAR_6) < 0 || (VAR_6 & ~0xff) != 0)
  FUNC_2(1, "invalid value: %s", VAR_1);

 VAR_5.ifbrp_maxage = VAR_6 & 0xff;

 if (FUNC_0(VAR_3, VAR_0, &VAR_5, sizeof(VAR_5), 1) < 0)
  FUNC_1(1, "BRDGSMA %s", VAR_1);
}
