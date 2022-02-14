
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct winsize {size_t ws_row; size_t ws_col; } ;
typedef int SCR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t FUNC_0 (int *,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 char* FUNC_1 (char*) ;
 int FUNC_2 (int ,int ,struct winsize*) ;
 int FUNC_3 (int *,int ,char*) ;
 size_t FUNC_4 (char*,int *,int) ;
 int FUNC_5 (char*) ;

int
FUNC_6(SCR *VAR_5, int VAR_6, size_t *VAR_7, size_t *VAR_8, int *VAR_9)
{
 struct winsize VAR_10;
 size_t VAR_11, VAR_12;
 int VAR_13;
 char *VAR_14;


 if (VAR_9 != ((void*)0))
  *VAR_9 = 1;
 VAR_12 = VAR_11 = 0;
 if (FUNC_2(VAR_3, VAR_4, &VAR_10) != -1) {
  VAR_12 = VAR_10.ws_row;
  VAR_11 = VAR_10.ws_col;
 }

 if (VAR_6) {





  if (VAR_12 == 0 || VAR_11 == 0) {
   if (VAR_9 != ((void*)0))
    *VAR_9 = 0;
   return (0);
  }
  if (VAR_5 != ((void*)0) &&
      VAR_12 == FUNC_0(VAR_5, VAR_2) && VAR_11 == FUNC_0(VAR_5, VAR_1)) {
   if (VAR_9 != ((void*)0))
    *VAR_9 = 0;
   return (0);
  }

  if (VAR_7 != ((void*)0))
   *VAR_7 = VAR_12;
  if (VAR_8 != ((void*)0))
   *VAR_8 = VAR_11;
  return (0);
 }
 if (VAR_12 == 0 || VAR_11 == 0) {
  if ((VAR_14 = FUNC_1("TERM")) == ((void*)0))
   goto noterm;
  if (VAR_12 == 0)
   if ((VAR_13 = FUNC_5("lines")) < 0)
    FUNC_3(VAR_5, VAR_0, "tigetnum: lines");
   else
    VAR_12 = VAR_13;
  if (VAR_11 == 0)
   if ((VAR_13 = FUNC_5("cols")) < 0)
    FUNC_3(VAR_5, VAR_0, "tigetnum: cols");
   else
    VAR_11 = VAR_13;
 }


noterm: if (VAR_12 == 0)
  VAR_12 = 24;
 if (VAR_11 == 0)
  VAR_11 = 80;
 if ((VAR_14 = FUNC_1("LINES")) != ((void*)0))
  VAR_12 = FUNC_4(VAR_14, ((void*)0), 10);
 if ((VAR_14 = FUNC_1("COLUMNS")) != ((void*)0))
  VAR_11 = FUNC_4(VAR_14, ((void*)0), 10);

 if (VAR_7 != ((void*)0))
  *VAR_7 = VAR_12;
 if (VAR_8 != ((void*)0))
  *VAR_8 = VAR_11;
 return (0);
}
