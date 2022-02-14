
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;
 int FUNC_1 (int) ;
 int VAR_5 ;
 int FUNC_2 (char const*,int,...) ;

__attribute__((used)) static int
FUNC_3(const char *VAR_6)
{
 int VAR_7, VAR_8;

 if ((VAR_2 & VAR_1) == 0)
  VAR_7 = FUNC_2(VAR_6, VAR_2);
 else
  VAR_7 = FUNC_2(VAR_6, VAR_2, VAR_3);
 if (VAR_7 < 0)
  return (-1);

 if (VAR_4 != ((void*)0)) {
  if (FUNC_0(VAR_7, VAR_4) < 0 && VAR_5 != VAR_0) {
   VAR_8 = VAR_5;
   FUNC_1(VAR_7);
   VAR_5 = VAR_8;
   return (-1);
  }
 }

 return (VAR_7);
}
