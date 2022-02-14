
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
 int FUNC_2 (int,struct stat*) ;
 int FUNC_3 (int ,int,struct freebsd11_stat*) ;

int
FUNC_4(int VAR_2, struct stat *VAR_3)
{
 struct freebsd11_stat VAR_4;
 int VAR_5;

 if (FUNC_0() >= VAR_0)
  return (FUNC_2(VAR_2, VAR_3));
 VAR_5 = FUNC_3(VAR_1, VAR_2, &VAR_4);
 if (VAR_5 == 0)
  FUNC_1(&VAR_4, VAR_3);
 return (VAR_5);
}
