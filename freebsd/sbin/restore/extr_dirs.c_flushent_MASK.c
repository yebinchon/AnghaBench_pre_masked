
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct direct {scalar_t__ d_reclen; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__,int,int,int ) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void
FUNC_3(void)
{
 ((struct direct *)(VAR_2 + VAR_5))->d_reclen = VAR_0 - VAR_5;
 if (FUNC_2(VAR_2, (int)VAR_4, 1, VAR_1) != 1)
  FUNC_0(VAR_3);
 VAR_6 = FUNC_1(VAR_1);
 VAR_4 = 0;
}
