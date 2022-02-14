
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty {int t_revokecnt; int t_mtx; } ;
struct cv {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct cv*,int ,int) ;
 scalar_t__ FUNC_2 (struct tty*) ;
 int FUNC_3 (struct tty*,int) ;

int
FUNC_4(struct tty *VAR_4, struct cv *VAR_5, int VAR_6)
{
 int VAR_7;
 int VAR_8 = VAR_4->t_revokecnt;

 FUNC_3(VAR_4, VAR_3|VAR_2);
 FUNC_0(!FUNC_2(VAR_4));

 VAR_7 = FUNC_1(VAR_5, VAR_4->t_mtx, VAR_6);


 if (FUNC_2(VAR_4))
  return (VAR_0);


 if (VAR_4->t_revokecnt != VAR_8)
  return (VAR_1);

 return (VAR_7);
}
