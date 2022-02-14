
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ time_t ;
typedef int longstring ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 char* VAR_3 ;
 int FUNC_0 (char,int ) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (scalar_t__*) ;
 int FUNC_3 (char*,int,char const*,int ) ;
 char* FUNC_4 (int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_5 (int *) ;

__attribute__((used)) static void
FUNC_6(time_t VAR_5)
{
 char VAR_6[80];
 static time_t VAR_7 = 0;
 const char *VAR_8;
 static int VAR_9 = -1;

 if (VAR_9 < 0)
  VAR_9 = (*FUNC_4(VAR_0) == 'd');
 if (VAR_7 == 0)
  VAR_7 = FUNC_5(((void*)0));


 if (VAR_3)
  VAR_8 = VAR_3;
 else if (VAR_2)

  VAR_8 = VAR_9 ? "%e %b %T %Y" : "%b %e %T %Y";
 else if (VAR_5 + ((365 / 2) * 86400) > VAR_7 && VAR_5 < VAR_7 + ((365 / 2) * 86400))

  VAR_8 = VAR_9 ? "%e %b %R" : "%b %e %R";
 else

  VAR_8 = VAR_9 ? "%e %b  %Y" : "%b %e  %Y";
 FUNC_3(VAR_6, sizeof(VAR_6), VAR_8, FUNC_2(&VAR_5));
 FUNC_1(VAR_6, VAR_4);
 FUNC_0(' ', VAR_4);
}
