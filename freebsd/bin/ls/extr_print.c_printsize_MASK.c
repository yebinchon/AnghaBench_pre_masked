
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char* u_int ;
typedef char* off_t ;
typedef int int64_t ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (char*,int,int ,char*,int ,int) ;
 int FUNC_1 (char const*,char*,char*) ;

__attribute__((used)) static void
FUNC_2(size_t VAR_7, off_t VAR_8)
{

 if (VAR_5) {




  char VAR_9[VAR_4 - 1 + 1];

  FUNC_0(VAR_9, sizeof(VAR_9), (int64_t)VAR_8, "",
      VAR_0, VAR_1 | VAR_3 | VAR_2);
  (void)FUNC_1("%*s ", (u_int)VAR_7, VAR_9);
 } else if (VAR_6) {

  const char *VAR_10 = "%*j'd ";
  (void)FUNC_1(VAR_10, (u_int)VAR_7, VAR_8);
 } else
  (void)FUNC_1("%*jd ", (u_int)VAR_7, VAR_8);
}
