
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct exact_info {char* loc; char* bus; TYPE_1__* dev; } ;
struct TYPE_2__ {int dd_flags; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,void*) ;
 int FUNC_1 (int,char*,...) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (char) ;
 int VAR_2 ;
 int FUNC_4 (char*,char*,char*) ;
 char* FUNC_5 (char*) ;
 int FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (char*,char*,int) ;

__attribute__((used)) static void
FUNC_8(char *VAR_3)
{
 char *VAR_4, *VAR_5, *VAR_6, *VAR_7;
 struct exact_info VAR_8;
 VAR_6 = VAR_3 + FUNC_6(VAR_3) - 4;
 while (VAR_6 > VAR_3 && FUNC_7(VAR_6, " on ", 4) != 0)
  VAR_6--;
 if (VAR_6 == VAR_3)
  FUNC_1(1, "No bus found in nomatch string: '%s'", VAR_3);
 VAR_4 = VAR_6 + 4;
 *VAR_6 = '\0';
 VAR_7 = FUNC_5(VAR_4);
 if (VAR_7 == ((void*)0))
  FUNC_1(1, "Can't allocate memory for strings");
 VAR_6 = VAR_4 + FUNC_6(VAR_4) - 1;
 while (VAR_6 > VAR_4 && FUNC_3(*VAR_6))
  VAR_6--;
 *++VAR_6 = '\0';






 if (*VAR_3 == '?')
  VAR_3++;
 if (FUNC_7(VAR_3, " at ", 4) != 0)
  FUNC_1(1, "Malformed NOMATCH string: '%s'", VAR_3);
 VAR_5 = VAR_3 + 4;






 VAR_8.loc = VAR_5;
 VAR_8.bus = VAR_7;
 VAR_8.dev = ((void*)0);
 FUNC_0(VAR_2, VAR_1, (void *)&VAR_8);
 if (VAR_8.dev != ((void*)0) && VAR_8.dev->dd_flags & VAR_0)
  FUNC_2(0);
 FUNC_4(VAR_4, "", VAR_5);

 FUNC_2(0);
}
