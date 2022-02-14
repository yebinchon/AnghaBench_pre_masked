
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct ssh {int dummy; } ;


 char* FUNC_0 (struct ssh*,int) ;
 char* FUNC_1 (struct ssh*) ;
 scalar_t__ FUNC_2 (char const*) ;

const char *
FUNC_3(struct ssh *VAR_0, u_int VAR_1, int VAR_2)
{
 const char *VAR_3 = "";

 if (VAR_1 > 0)
  VAR_3 = FUNC_0(VAR_0, VAR_2);
 if (VAR_1 == 0 || FUNC_2(VAR_3) > VAR_1)
  VAR_3 = FUNC_1(VAR_0);
 return VAR_3;
}
