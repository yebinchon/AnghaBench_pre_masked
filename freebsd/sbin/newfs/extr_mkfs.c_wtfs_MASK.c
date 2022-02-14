
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ufs2_daddr_t ;
typedef int intmax_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *,scalar_t__,char*,int) ;
 int VAR_1 ;
 int FUNC_1 (int,char*,int,int ) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void
FUNC_2(ufs2_daddr_t VAR_3, int VAR_4, char *VAR_5)
{
 if (VAR_0)
  return;
 if (FUNC_0(&VAR_1, VAR_2 + VAR_3, VAR_5, VAR_4) < 0)
  FUNC_1(36, "wtfs: %d bytes at sector %jd", VAR_4, (intmax_t)VAR_3);
}
