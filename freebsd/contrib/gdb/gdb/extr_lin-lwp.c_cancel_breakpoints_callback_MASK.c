
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lwp_info {scalar_t__ status; int ptid; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (int ,char*,int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (scalar_t__,int ) ;

__attribute__((used)) static int
FUNC_7 (struct lwp_info *VAR_4, void *VAR_5)
{
  struct lwp_info *VAR_6 = VAR_5;


  if (VAR_4 == VAR_6)
    return 0;
  if (VAR_4->status != 0
      && FUNC_0 (VAR_4->status) && FUNC_1 (VAR_4->status) == VAR_1
      && FUNC_2 (FUNC_4 (VAR_4->ptid) -
         VAR_0))
    {
      if (VAR_2)
 FUNC_3 (VAR_3,
       "CBC: Push back breakpoint for %s\n",
       FUNC_5 (VAR_4->ptid));


      if (VAR_0)
 FUNC_6 (FUNC_4 (VAR_4->ptid) - VAR_0, VAR_4->ptid);


      VAR_4->status = 0;
    }

  return 0;
}
