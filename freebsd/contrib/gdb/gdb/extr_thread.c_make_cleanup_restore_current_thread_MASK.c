
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct current_thread_cleanup {int inferior_ptid; } ;
struct cleanup {int dummy; } ;
typedef int ptid_t ;


 int VAR_0 ;
 struct cleanup* FUNC_0 (int ,struct current_thread_cleanup*) ;
 struct current_thread_cleanup* FUNC_1 (int) ;

__attribute__((used)) static struct cleanup *
FUNC_2 (ptid_t VAR_1)
{
  struct current_thread_cleanup *VAR_2
    = FUNC_1 (sizeof (struct current_thread_cleanup));
  VAR_2->inferior_ptid = VAR_1;
  return FUNC_0 (VAR_0, VAR_2);
}
