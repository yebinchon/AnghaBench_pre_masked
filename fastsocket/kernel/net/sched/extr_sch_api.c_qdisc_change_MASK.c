
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qdisc_size_table {int dummy; } ;
struct nlattr {int dummy; } ;
struct Qdisc {int flags; int rate_est; int bstats; struct qdisc_size_table* stab; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* change ) (struct Qdisc*,struct nlattr*) ;} ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct qdisc_size_table*) ;
 int FUNC_1 (struct qdisc_size_table*) ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *,int *,int ,struct nlattr*) ;
 struct qdisc_size_table* FUNC_3 (struct nlattr*) ;
 int FUNC_4 (struct qdisc_size_table*) ;
 int FUNC_5 (struct Qdisc*) ;
 int FUNC_6 (struct Qdisc*,struct nlattr*) ;

__attribute__((used)) static int FUNC_7(struct Qdisc *VAR_5, struct nlattr **VAR_6)
{
 struct qdisc_size_table *VAR_7 = ((void*)0);
 int VAR_8 = 0;

 if (VAR_6[VAR_1]) {
  if (VAR_5->ops->change == ((void*)0))
   return -VAR_0;
  VAR_8 = VAR_5->ops->change(VAR_5, VAR_6[VAR_1]);
  if (VAR_8)
   return VAR_8;
 }

 if (VAR_6[VAR_3]) {
  VAR_7 = FUNC_3(VAR_6[VAR_3]);
  if (FUNC_0(VAR_7))
   return FUNC_1(VAR_7);
 }

 FUNC_4(VAR_5->stab);
 VAR_5->stab = VAR_7;

 if (VAR_6[VAR_2]) {


  if (VAR_5->flags & VAR_4)
   goto out;
  FUNC_2(&VAR_5->bstats, &VAR_5->rate_est,
         FUNC_5(VAR_5),
         VAR_6[VAR_2]);
 }
out:
 return 0;
}
