
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rlimit {int dummy; } ;
struct procstat_core {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct rlimit*) ;
 struct rlimit* FUNC_1 (struct procstat_core*,int ,int *,size_t*) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int
FUNC_3(struct procstat_core *VAR_4, int VAR_5,
    struct rlimit* VAR_6)
{
 size_t VAR_7;
 struct rlimit* VAR_8;

 if (VAR_5 < 0 || VAR_5 >= VAR_2) {
  VAR_3 = VAR_0;
  FUNC_2("getrlimit: which");
  return (-1);
 }
 VAR_8 = FUNC_1(VAR_4, VAR_1, ((void*)0), &VAR_7);
 if (VAR_8 == ((void*)0))
  return (-1);
 if (VAR_7 < sizeof(struct rlimit) * VAR_2) {
  FUNC_0(VAR_8);
  return (-1);
 }
 *VAR_6 = VAR_8[VAR_5];
 FUNC_0(VAR_8);
 return (0);
}
