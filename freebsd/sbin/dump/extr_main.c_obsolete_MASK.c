
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,int *) ;
 int FUNC_1 (char*) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 () ;
 int FUNC_6 (char*,char) ;

__attribute__((used)) static void
FUNC_7(int *VAR_0, char **VAR_1[])
{
 int VAR_2, VAR_3;
 char *VAR_4, **VAR_5, *VAR_6, **VAR_7, *VAR_8;


 VAR_5 = *VAR_1;
 VAR_2 = *VAR_0;





 VAR_4 = VAR_5[1];
 if (VAR_2 == 1 || *VAR_4 == '-' || *VAR_4 == '/')
  return;


 if ((*VAR_1 = VAR_7 = FUNC_2((VAR_2 + 1) * sizeof(char *))) == ((void*)0) ||
     (VAR_8 = VAR_6 = FUNC_2(FUNC_4(VAR_4) + 2)) == ((void*)0))
  FUNC_0(1, ((void*)0));

 *VAR_7++ = *VAR_5;
 VAR_5 += 2;

 for (VAR_3 = 0; *VAR_4; ++VAR_4) {
  switch (*VAR_4) {
  case 'B':
  case 'b':
  case 'd':
  case 'f':
  case 'D':
  case 'C':
  case 'h':
  case 's':
  case 'T':
   if (*VAR_5 == ((void*)0)) {
    FUNC_6("option requires an argument -- %c", *VAR_4);
    FUNC_5();
   }
   if ((VAR_7[0] = FUNC_2(FUNC_4(*VAR_5) + 2 + 1)) == ((void*)0))
    FUNC_0(1, ((void*)0));
   VAR_7[0][0] = '-';
   VAR_7[0][1] = *VAR_4;
   (void)FUNC_3(&VAR_7[0][2], *VAR_5);
   ++VAR_5;
   ++VAR_7;
   break;
  default:
   if (!VAR_3) {
    *VAR_8++ = '-';
    VAR_3 = 1;
   }
   *VAR_8++ = *VAR_4;
   break;
  }
 }


 if (VAR_3) {
  *VAR_8 = '\0';
  *VAR_7++ = VAR_6;
 } else
  FUNC_1(VAR_6);


 while ((*VAR_7++ = *VAR_5++));


 *VAR_0 = VAR_7 - *VAR_1 - 1;
}
