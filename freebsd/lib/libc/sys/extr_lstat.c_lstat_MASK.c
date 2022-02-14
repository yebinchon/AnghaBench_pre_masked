
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int dummy; } ;
struct freebsd11_stat {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (struct freebsd11_stat*,struct stat*) ;
 int FUNC_2 (int ,char const*,struct stat*,int ) ;
 int FUNC_3 (int ,char const*,struct freebsd11_stat*) ;

int
FUNC_4(const char *VAR_4, struct stat *VAR_5)
{
 struct freebsd11_stat VAR_6;
 int VAR_7;

 if (FUNC_0() >= VAR_2)
  return (FUNC_2(VAR_0, VAR_4, VAR_5, VAR_1));
 VAR_7 = FUNC_3(VAR_3, VAR_4, &VAR_6);
 if (VAR_7 == 0)
  FUNC_1(&VAR_6, VAR_5);
 return (VAR_7);
}
