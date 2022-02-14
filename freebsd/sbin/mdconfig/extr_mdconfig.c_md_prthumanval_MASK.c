
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uintmax_t ;
typedef int int64_t ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (char*,int,int ,char*,int ,int) ;
 int FUNC_1 (char*,char*) ;
 scalar_t__ FUNC_2 (char*,char**,int) ;

__attribute__((used)) static void
FUNC_3(char *VAR_6)
{
 char VAR_7[6];
 uintmax_t VAR_8;
 char *VAR_9;

 VAR_5 = 0;
 VAR_8 = FUNC_2(VAR_6, &VAR_9, 10);
 if (VAR_5 != 0 || *VAR_9 != '\0' || VAR_8 > VAR_4)
  return;
 FUNC_0(VAR_7, sizeof(VAR_7), (int64_t)VAR_8, "",
     VAR_0, VAR_1 | VAR_3 | VAR_2);
 (void)FUNC_1("%6s", VAR_7);
}
