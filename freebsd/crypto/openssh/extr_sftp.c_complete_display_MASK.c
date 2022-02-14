
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int ;
struct winsize {size_t ws_col; } ;


 size_t FUNC_0 (size_t,int) ;
 size_t FUNC_1 (size_t,size_t) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,struct winsize*) ;
 int FUNC_4 (char*,size_t,char*) ;
 int FUNC_5 (char*) ;
 int VAR_1 ;
 int FUNC_6 (char*) ;

__attribute__((used)) static void
FUNC_7(char **VAR_2, u_int VAR_3)
{
 u_int VAR_4, VAR_5 = 0, VAR_6 = 80, VAR_7 = 1, VAR_8 = 0, VAR_9;
 struct winsize VAR_10;
 char *VAR_11;


 for (VAR_4 = 0; VAR_2[VAR_4]; VAR_4++)
  VAR_5 = FUNC_0(VAR_5, FUNC_6(VAR_2[VAR_4]));

 if (FUNC_3(FUNC_2(VAR_1), VAR_0, &VAR_10) != -1)
  VAR_6 = VAR_10.ws_col;

 VAR_5 = VAR_5 > VAR_3 ? VAR_5 - VAR_3 : 0;
 VAR_7 = VAR_6 / (VAR_5 + 2);
 VAR_7 = FUNC_0(VAR_7, 1);
 VAR_8 = VAR_6 / VAR_7;
 VAR_8 = FUNC_1(VAR_8, VAR_6);

 FUNC_5("\n");
 VAR_5 = 1;
 for (VAR_4 = 0; VAR_2[VAR_4]; VAR_4++) {
  VAR_9 = FUNC_6(VAR_2[VAR_4]);
  VAR_11 = VAR_9 > VAR_3 ? VAR_2[VAR_4] + VAR_3 : "";
  FUNC_4("%-*s", VAR_8, VAR_11);
  if (VAR_5 >= VAR_7) {
   FUNC_5("\n");
   VAR_5 = 1;
  } else
   VAR_5++;
 }
 FUNC_5("\n");
}
