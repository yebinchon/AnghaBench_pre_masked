
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char const*,int) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,char**,char*) ;
 int FUNC_5 (char const*) ;
 scalar_t__ VAR_1 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,char const*) ;
 int FUNC_8 (char const*) ;
 int FUNC_9 () ;

int
FUNC_10(int VAR_2, char *VAR_3[])
{
 const char *VAR_4;
 int VAR_5, VAR_6, VAR_7, VAR_8, VAR_9;

 VAR_6 = VAR_7 = VAR_8 = VAR_9 = 0;

 while ((VAR_5 = FUNC_4(VAR_2, VAR_3, "lfm")) != -1) {
  switch (VAR_5) {
  case 'f':
   VAR_6++;
   break;
  case 'm':
   VAR_7 = 1;
   break;
  case 'l':
   VAR_8 = 1;
   break;
  case '?':
  default:
   FUNC_9();
  }
 }
 VAR_2 -= VAR_1;
 VAR_3 += VAR_1;

 if (VAR_2 < 1)
  FUNC_9();
 if (VAR_6 && VAR_7)
  FUNC_9();
 if (VAR_6 > 2)
  FUNC_9();

 while ((VAR_4 = *VAR_3++) != ((void*)0)) {
  if (FUNC_7(&VAR_0, VAR_4) == -1) {
   FUNC_8(VAR_4);
   VAR_9 |= 1;
   continue;
  }
  if (VAR_6)
   VAR_9 |= FUNC_0(VAR_4, VAR_6);
  else if (VAR_7)
   VAR_9 |= FUNC_5(VAR_4);
  else if (VAR_8)
   VAR_9 |= FUNC_2();
  else
   VAR_9 |= FUNC_1(VAR_4);
  FUNC_6(&VAR_0);
 }
 FUNC_3(VAR_9);
}
