
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread_info {int dummy; } ;
struct task_struct {int dummy; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int,int ) ;

__attribute__((used)) static inline struct thread_info *FUNC_1(struct task_struct *VAR_3)
{



 gfp_t VAR_4 = VAR_0;

 return (struct thread_info *)FUNC_0(VAR_4, VAR_1);
}
