
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fail_point_setting {int fp_entry_queue; } ;
struct fail_point_entry {int dummy; } ;


 int FUNC_0 (int *) ;
 struct fail_point_entry* FUNC_1 (int *) ;
 int FUNC_2 (int *,struct fail_point_entry*,int ) ;
 int FUNC_3 (struct fail_point_entry*) ;
 int VAR_0 ;
 int FUNC_4 (struct fail_point_setting*) ;

__attribute__((used)) static void
FUNC_5(struct fail_point_setting *VAR_1)
{
 struct fail_point_entry *VAR_2;

 while (!FUNC_0(&VAR_1->fp_entry_queue)) {
  VAR_2 = FUNC_1(&VAR_1->fp_entry_queue);
  FUNC_2(&VAR_1->fp_entry_queue, VAR_2, VAR_0);
  FUNC_3(VAR_2);
 }

 FUNC_4(VAR_1);
}
