
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_recent_mtinfo {int name; } ;
struct xt_mtdtor_param {struct xt_recent_mtinfo* matchinfo; } ;
struct recent_table {scalar_t__ refcnt; int name; int list; } ;


 int FUNC_0 (struct recent_table*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (struct recent_table*) ;
 struct recent_table* FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(const struct xt_mtdtor_param *VAR_4)
{
 const struct xt_recent_mtinfo *VAR_5 = VAR_4->matchinfo;
 struct recent_table *VAR_6;

 FUNC_2(&VAR_2);
 VAR_6 = FUNC_5(VAR_5->name);
 if (--VAR_6->refcnt == 0) {
  FUNC_7(&VAR_1);
  FUNC_1(&VAR_6->list);
  FUNC_8(&VAR_1);






  FUNC_4(VAR_6);
  FUNC_0(VAR_6);
 }
 FUNC_3(&VAR_2);
}
