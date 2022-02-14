
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ufs2_daddr_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int *,scalar_t__) ;
 int VAR_3 ;
 int FUNC_3 (int *,scalar_t__) ;
 int FUNC_4 (char*,scalar_t__,scalar_t__) ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_5(ufs2_daddr_t VAR_5, ufs2_daddr_t VAR_6)
{

 if (VAR_2)
  FUNC_4("Zero frags %jd to %jd\n", VAR_5, VAR_6);
 if (VAR_1)
  FUNC_1(VAR_3, FUNC_2(&VAR_4, VAR_5),
      FUNC_3(&VAR_4, VAR_6 - VAR_5 + 1));
 if (VAR_0)
  FUNC_0(VAR_3, FUNC_2(&VAR_4, VAR_5),
      FUNC_3(&VAR_4, VAR_6 - VAR_5 + 1));
}
