
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ td_err_e ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,int ) ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int ,int ,int *,int ,int ,int ,int ) ;
 int VAR_6 ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static void
FUNC_3 (void)
{
  td_err_e VAR_7;


  VAR_7 = FUNC_1 (VAR_6, VAR_5, ((void*)0),
   VAR_2, VAR_4,
   VAR_1, VAR_3);
  if (VAR_7 != VAR_0)
    FUNC_0 ("Cannot find new threads: %s", FUNC_2 (VAR_7));
}
