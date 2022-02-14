
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *,char*,char const*,scalar_t__) ;
 int FUNC_3 (int *,char*,char const*,size_t,int*) ;
 scalar_t__ FUNC_4 (char const*) ;
 scalar_t__ FUNC_5 (char*,char const*,scalar_t__) ;

ssize_t
FUNC_6(FILE *VAR_1, const char *VAR_2, const char *VAR_3, char *VAR_4,
               const char *VAR_5, size_t VAR_6, int *VAR_7)
{

       char *VAR_8;
       ssize_t VAR_9;

       if(FUNC_4(VAR_2) >= VAR_0)
               return -1;
       VAR_8 = (char*)FUNC_1(VAR_0);
       if(!VAR_8)
               return -1;

       VAR_9 = FUNC_2(VAR_1, VAR_8, VAR_3, VAR_0);
       if(VAR_9==0 || VAR_9==-1) {
               FUNC_0(VAR_8);
               return -1;
       }


       if (FUNC_5(VAR_8, VAR_2, VAR_0 - 1) == 0) {


               VAR_9 = FUNC_3(VAR_1, VAR_4, VAR_5, VAR_6, VAR_7);
               FUNC_0(VAR_8);
               return VAR_9;
       } else {

               FUNC_0(VAR_8);
               return -1;
       }
}
