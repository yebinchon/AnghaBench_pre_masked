
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct winsize {int ws_col; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (char*) ;
 int FUNC_2 (int ,int ,struct winsize*) ;

__attribute__((used)) static int
FUNC_3(void)
{
 int VAR_1;
 char *VAR_2;
 struct winsize VAR_3;

 VAR_1 = 0;
 if (FUNC_2(0, VAR_0, &VAR_3) != -1)
  VAR_1 = VAR_3.ws_col;
 if (VAR_1 == 0 && (VAR_2 = FUNC_1("COLUMNS")))
  VAR_1 = FUNC_0(VAR_2);
 if (VAR_1 == 0)
  VAR_1 = 80;
 return (VAR_1);
}
