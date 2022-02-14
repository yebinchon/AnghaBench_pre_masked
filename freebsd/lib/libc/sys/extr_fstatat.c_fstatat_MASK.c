
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int dummy; } ;
struct freebsd11_stat {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (struct freebsd11_stat*,struct stat*) ;
 int FUNC_2 (int,char const*,struct stat*,int) ;
 int FUNC_3 (int ,int,char const*,struct freebsd11_stat*,int) ;

int
FUNC_4(int VAR_2, const char *VAR_3, struct stat *VAR_4, int VAR_5)
{
 struct freebsd11_stat VAR_6;
 int VAR_7;

 if (FUNC_0() >= VAR_0)
  return (FUNC_2(VAR_2, VAR_3, VAR_4, VAR_5));
 VAR_7 = FUNC_3(VAR_1, VAR_2, VAR_3, &VAR_6, VAR_5);
 if (VAR_7 == 0)
  FUNC_1(&VAR_6, VAR_4);
 return (VAR_7);
}
