
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {struct nsproxy* nsproxy; int fs; } ;
struct nsproxy {int dummy; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (struct nsproxy*) ;
 int FUNC_1 (struct nsproxy*) ;
 int FUNC_2 (int ) ;
 struct nsproxy* FUNC_3 (unsigned long,struct task_struct*,int ) ;
 int FUNC_4 (struct nsproxy*) ;
 int FUNC_5 (struct nsproxy*) ;

int FUNC_6(unsigned long VAR_9, struct task_struct *VAR_10)
{
 struct nsproxy *VAR_11 = VAR_10->nsproxy;
 struct nsproxy *VAR_12;
 int VAR_13 = 0;

 if (!VAR_11)
  return 0;

 FUNC_4(VAR_11);

 if (!(VAR_9 & (VAR_3 | VAR_5 | VAR_1 |
    VAR_4 | VAR_2)))
  return 0;

 if (!FUNC_2(VAR_0)) {
  VAR_13 = -VAR_8;
  goto out;
 }
 if ((VAR_9 & VAR_1) && (VAR_9 & VAR_6)) {
  VAR_13 = -VAR_7;
  goto out;
 }

 VAR_12 = FUNC_3(VAR_9, VAR_10, VAR_10->fs);
 if (FUNC_0(VAR_12)) {
  VAR_13 = FUNC_1(VAR_12);
  goto out;
 }

 VAR_10->nsproxy = VAR_12;

out:
 FUNC_5(VAR_11);
 return VAR_13;
}
