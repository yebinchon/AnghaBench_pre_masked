
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct procstat_core {int dummy; } ;
struct procstat {struct procstat_core* core; int type; } ;


 int VAR_0 ;
 struct procstat* FUNC_0 (int,int) ;
 int FUNC_1 (struct procstat*) ;
 struct procstat_core* FUNC_2 (char const*) ;
 int FUNC_3 (char*) ;

struct procstat *
FUNC_4(const char *VAR_1)
{
 struct procstat *VAR_2;
 struct procstat_core *VAR_3;

 VAR_2 = FUNC_0(1, sizeof(*VAR_2));
 if (VAR_2 == ((void*)0)) {
  FUNC_3("malloc()");
  return (((void*)0));
 }
 VAR_3 = FUNC_2(VAR_1);
 if (VAR_3 == ((void*)0)) {
  FUNC_1(VAR_2);
  return (((void*)0));
 }
 VAR_2->type = VAR_0;
 VAR_2->core = VAR_3;
 return (VAR_2);
}
