
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SHA1_CTX ;


 int FUNC_0 (unsigned char*,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,char**) ;

__attribute__((used)) static int
FUNC_6(char VAR_0, char *VAR_1, char *VAR_2, unsigned char *VAR_3)
{
     SHA1_CTX VAR_4;
     char *VAR_5;
     int VAR_6;

     FUNC_3(3);

     FUNC_1(&VAR_4);

     FUNC_2(&VAR_4, &VAR_0, 1);

     if((VAR_6 = FUNC_5(VAR_2, &VAR_5)) == 0) {

   return -1;
     }
     FUNC_2(&VAR_4, VAR_5, VAR_6);
     FUNC_4(VAR_5);

     if((VAR_6 = FUNC_5(VAR_1, &VAR_5)) == 0) {

   return -1;
     }
     FUNC_2(&VAR_4, VAR_5, VAR_6);
     FUNC_4(VAR_5);

     FUNC_0(VAR_3, &VAR_4);

     return 0;

}
