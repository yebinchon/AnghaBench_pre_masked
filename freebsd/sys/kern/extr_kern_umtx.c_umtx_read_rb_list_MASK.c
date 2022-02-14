
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct umutex32 {uintptr_t m_rb_lnk; } ;
struct umutex {uintptr_t m_rb_lnk; } ;
struct thread {int td_proc; } ;
typedef int m32 ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (struct umutex32*,struct umutex*,int) ;

__attribute__((used)) static void
FUNC_2(struct thread *VAR_1, struct umutex *VAR_2, uintptr_t *VAR_3)
{
  *VAR_3 = VAR_2->m_rb_lnk;
}
