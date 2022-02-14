
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int dummy; } ;
struct freebsd11_stat {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (struct freebsd11_stat*,struct stat*) ;
 int FUNC_2 (int ,char const*,struct stat*,int ) ;
 int FUNC_3 (int ,char const*,struct freebsd11_stat*) ;

int
FUNC_4(const char *VAR_3, struct stat *VAR_4)
{
 struct freebsd11_stat VAR_5;
 int VAR_6;

 if (FUNC_0() >= VAR_1)
  return (FUNC_2(VAR_0, VAR_3, VAR_4, 0));
 VAR_6 = FUNC_3(VAR_2, VAR_3, &VAR_5);
 if (VAR_6 == 0)
  FUNC_1(&VAR_5, VAR_4);
 return (VAR_6);
}
