
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int) ;
 int VAR_0 ;
 int* FUNC_2 (int*,int) ;
 int* FUNC_3 (int*,int) ;
 int* FUNC_4 (int*,int) ;

void
FUNC_5(u_char *VAR_1, u_char *VAR_2)
{
 int VAR_3 = 0;

 while (*VAR_1) {
  switch (*VAR_1) {
  case '0': case '1': case '2': case '3': case '4':
  case '5': case '6': case '7': case '8': case '9':
   VAR_3 = (VAR_3 * 10) + (*VAR_1++ - '0');
   continue;

  case 's': case 'w': case 'h':
   if (VAR_3 == 0)
    VAR_3 = 1;
   VAR_2 = FUNC_4(VAR_2, VAR_3);
   break;

  case 'l':
   if (VAR_3 == 0)
    VAR_3 = 1;
   VAR_2 = FUNC_2(VAR_2, VAR_3);
   break;

  case 'q':
   if (VAR_3 == 0)
    VAR_3 = 1;
   VAR_2 = FUNC_3(VAR_2, VAR_3);
   break;

  case 'b':
   if (VAR_3 == 0)
    VAR_3 = 1;
   VAR_2 += VAR_3;
   break;

  default:
   FUNC_1(VAR_0, "Unknown conversion character: %c\n",
       *VAR_1);
   FUNC_0(0);
   break;
  }
  VAR_1++;
  VAR_3 = 0;
 }
}
