
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;
typedef int ssize_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int,char*,int ) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void
FUNC_2(char *VAR_2)
{
 uintmax_t VAR_3;

 VAR_3 = FUNC_1(VAR_2);
 if (VAR_3 < 1 || VAR_3 > VAR_0)
  FUNC_0(1, "cbs must be between 1 and %zd", (ssize_t)VAR_0);
 VAR_1 = (size_t)VAR_3;
}
