
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct the_nilfs {int * ns_sbh; int ns_gc_dat; int ns_dat; int ns_cpfile; int ns_sufile; int ns_list; int ns_count; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct the_nilfs*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 () ;
 int FUNC_5 (struct the_nilfs*) ;
 scalar_t__ FUNC_6 (struct the_nilfs*) ;
 scalar_t__ FUNC_7 (struct the_nilfs*) ;
 int VAR_0 ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

void FUNC_12(struct the_nilfs *VAR_1)
{
 FUNC_10(&VAR_0);
 if (!FUNC_0(&VAR_1->ns_count)) {
  FUNC_11(&VAR_0);
  return;
 }
 FUNC_3(&VAR_1->ns_list);
 FUNC_11(&VAR_0);







 FUNC_4();
 if (FUNC_7(VAR_1)) {
  FUNC_8(VAR_1->ns_sufile);
  FUNC_9(VAR_1->ns_sufile);
  FUNC_8(VAR_1->ns_cpfile);
  FUNC_9(VAR_1->ns_cpfile);
  FUNC_8(VAR_1->ns_dat);
  FUNC_9(VAR_1->ns_dat);

  FUNC_9(VAR_1->ns_gc_dat);
 }
 if (FUNC_6(VAR_1)) {
  FUNC_5(VAR_1);
  FUNC_1(VAR_1->ns_sbh[0]);
  FUNC_1(VAR_1->ns_sbh[1]);
 }
 FUNC_2(VAR_1);
}
