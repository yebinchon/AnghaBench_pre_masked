
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct statfs {int dummy; } ;
struct freebsd11_statfs {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (struct freebsd11_statfs*,struct statfs*) ;
 int FUNC_2 (char const*,struct statfs*) ;
 int FUNC_3 (int ,char const*,struct freebsd11_statfs*) ;

int
FUNC_4(const char *VAR_2, struct statfs *VAR_3)
{
 struct freebsd11_statfs VAR_4;
 int VAR_5;

 if (FUNC_0() >= VAR_0)
  return (FUNC_2(VAR_2, VAR_3));
 VAR_5 = FUNC_3(VAR_1, VAR_2, &VAR_4);
 if (VAR_5 == 0)
  FUNC_1(&VAR_4, VAR_3);
 return (VAR_5);
}
