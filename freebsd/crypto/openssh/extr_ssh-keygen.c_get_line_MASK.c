
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,int *) ;

__attribute__((used)) static int
FUNC_4(FILE *VAR_2, char *VAR_3, size_t VAR_4)
{
 int VAR_5;
 size_t VAR_6 = 0;

 VAR_3[0] = '\0';
 while ((VAR_5 = FUNC_1(VAR_2)) != VAR_0) {
  if (VAR_6 >= VAR_4 - 1)
   FUNC_0("input line too long.");
  switch (VAR_5) {
  case '\r':
   VAR_5 = FUNC_1(VAR_2);
   if (VAR_5 != VAR_0 && VAR_5 != '\n' && FUNC_3(VAR_5, VAR_2) == VAR_0)
    FUNC_0("unget: %s", FUNC_2(VAR_1));
   return VAR_6;
  case '\n':
   return VAR_6;
  }
  VAR_3[VAR_6++] = VAR_5;
  VAR_3[VAR_6] = '\0';
 }

 return -1;
}
