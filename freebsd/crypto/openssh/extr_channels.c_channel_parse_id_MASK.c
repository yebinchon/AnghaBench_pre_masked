
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int32_t ;
struct ssh {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,char const*,scalar_t__,...) ;
 char* FUNC_1 (int) ;
 int FUNC_2 (struct ssh*,char*,char const*) ;
 int FUNC_3 (struct ssh*,scalar_t__*) ;

__attribute__((used)) static int
FUNC_4(struct ssh *VAR_1, const char *VAR_2, const char *VAR_3)
{
 u_int32_t VAR_4;
 int VAR_5;

 if ((VAR_5 = FUNC_3(VAR_1, &VAR_4)) != 0) {
  FUNC_0("%s: parse id: %s", VAR_2, FUNC_1(VAR_5));
  FUNC_2(VAR_1, "Invalid %s message", VAR_3);
 }
 if (VAR_4 > VAR_0) {
  FUNC_0("%s: bad channel id %u: %s", VAR_2, VAR_4, FUNC_1(VAR_5));
  FUNC_2(VAR_1, "Invalid %s channel id", VAR_3);
 }
 return (int)VAR_4;
}
