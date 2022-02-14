
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lwp_info {struct lwp_info* next; int ptid; } ;
typedef int ptid_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct lwp_info* VAR_0 ;
 int FUNC_2 (struct lwp_info*,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static struct lwp_info *
FUNC_4 (ptid_t VAR_3)
{
  struct lwp_info *VAR_4;

  FUNC_0 (FUNC_1 (VAR_3));

  VAR_4 = (struct lwp_info *) FUNC_3 (sizeof (struct lwp_info));

  FUNC_2 (VAR_4, 0, sizeof (struct lwp_info));

  VAR_4->ptid = VAR_3;

  VAR_4->next = VAR_0;
  VAR_0 = VAR_4;
  if (++VAR_1 > 1)
    VAR_2 = 1;

  return VAR_4;
}
