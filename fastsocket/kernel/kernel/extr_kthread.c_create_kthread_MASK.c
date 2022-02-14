
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kthread_create_info {int done; int result; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,struct kthread_create_info*,int) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_3(struct kthread_create_info *VAR_4)
{
 int VAR_5;


 VAR_5 = FUNC_2(VAR_3, VAR_4, VAR_1 | VAR_0 | VAR_2);
 if (VAR_5 < 0) {
  VAR_4->result = FUNC_0(VAR_5);
  FUNC_1(&VAR_4->done);
 }
}
