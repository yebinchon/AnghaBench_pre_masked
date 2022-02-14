
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread_hash_head {int dummy; } ;
struct pthread {int dummy; } ;


 int FUNC_0 (struct thread_hash_head*,struct pthread*,int ) ;
 size_t FUNC_1 (struct pthread*) ;
 int VAR_0 ;
 struct thread_hash_head* VAR_1 ;

void
FUNC_2(struct pthread *VAR_2)
{
 struct thread_hash_head *VAR_3;

 VAR_3 = &VAR_1[FUNC_1(VAR_2)];
 FUNC_0(VAR_3, VAR_2, VAR_0);
}
