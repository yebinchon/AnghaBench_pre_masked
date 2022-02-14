
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (char*,int,int *) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char) ;
 int FUNC_7 (char*,char*) ;
 int VAR_1 ;
 int FUNC_8 (char*) ;

__attribute__((used)) static void FUNC_9(FILE *VAR_2)
{
 char VAR_3[VAR_0];
 char * VAR_4;
 while (FUNC_4(VAR_3, VAR_0, VAR_2)) {
  if (VAR_3[0] == '!') {
   VAR_4 = VAR_3 + 2;
   switch (VAR_3[1]) {
    case 'E':
     while (*VAR_4 && !FUNC_6(*VAR_4)) VAR_4++;
     *VAR_4 = '\0';
     FUNC_2(VAR_3+2);
     break;
    case 'I':
     while (*VAR_4 && !FUNC_6(*VAR_4)) VAR_4++;
     *VAR_4 = '\0';
     FUNC_5(VAR_3+2);
     break;
    case 'D':
     while (*VAR_4 && !FUNC_6(*VAR_4)) VAR_4++;
                                        *VAR_4 = '\0';
                                        FUNC_8(VAR_3+2);
                                        break;
    case 'F':

     while (*VAR_4 && !FUNC_6(*VAR_4)) VAR_4++;
     *VAR_4++ = '\0';

     while (FUNC_6(*VAR_4))
      VAR_4++;
     FUNC_7(VAR_3 +2, VAR_4);
     break;
    case 'P':

     while (*VAR_4 && !FUNC_6(*VAR_4)) VAR_4++;
     *VAR_4++ = '\0';

     while (FUNC_6(*VAR_4))
      VAR_4++;
     FUNC_1(VAR_3 + 2, VAR_4);
     break;
    default:
     FUNC_0(VAR_3);
   }
  }
  else {
   FUNC_0(VAR_3);
  }
 }
 FUNC_3(VAR_1);
}
