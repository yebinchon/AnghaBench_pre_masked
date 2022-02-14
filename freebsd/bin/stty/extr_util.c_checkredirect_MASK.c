
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {scalar_t__ st_rdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct stat*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (char*) ;

void
FUNC_3(void)
{
 struct stat VAR_2, VAR_3;

 if (FUNC_1(VAR_1) && FUNC_1(VAR_0) &&
     !FUNC_0(VAR_1, &VAR_2) && !FUNC_0(VAR_0, &VAR_3) &&
     (VAR_2 != VAR_3))
FUNC_2("stdout appears redirected, but stdin is the control descriptor");
}
