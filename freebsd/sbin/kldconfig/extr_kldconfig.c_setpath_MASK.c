
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pathhead {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*,...) ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 () ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 char* VAR_4 ;
 int VAR_5 ;
 char* FUNC_3 (struct pathhead*) ;
 scalar_t__ FUNC_4 (char*) ;
 int FUNC_5 (int ,scalar_t__,int *,int *,char*,scalar_t__) ;

__attribute__((used)) static void
FUNC_6(struct pathhead *VAR_6)
{
 char *VAR_7;

 if (VAR_3 == 0)
  FUNC_2();
 if ((VAR_7 = FUNC_3(VAR_6)) == ((void*)0)) {
  VAR_1 = VAR_0;
  FUNC_0(1, "building path string");
 }
 if (FUNC_5(VAR_2, VAR_3, ((void*)0), ((void*)0), VAR_7, FUNC_4(VAR_7)+1) == -1)
  FUNC_0(1, "setting path: sysctl(%s)", VAR_5);

 if (VAR_4 != ((void*)0))
  FUNC_1(VAR_4);
 VAR_4 = VAR_7;
}
