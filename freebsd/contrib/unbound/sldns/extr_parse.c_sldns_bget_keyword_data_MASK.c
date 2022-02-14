
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;
typedef int sldns_buffer ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *,char*,char const*,size_t) ;
 scalar_t__ FUNC_3 (char const*) ;
 scalar_t__ FUNC_4 (char*,char const*,scalar_t__) ;

ssize_t
FUNC_5(sldns_buffer *VAR_1, const char *VAR_2, const char *VAR_3, char
*VAR_4, const char *VAR_5, size_t VAR_6)
{

       char *VAR_7;
       ssize_t VAR_8;

       if(FUNC_3(VAR_2) >= VAR_0)
               return -1;
       VAR_7 = (char*)FUNC_1(VAR_0);
       if(!VAR_7)
               return -1;

       VAR_8 = FUNC_2(VAR_1, VAR_7, VAR_3, VAR_6);
       if(VAR_8==0 || VAR_8==-1) {
               FUNC_0(VAR_7);
               return -1;
       }


       if (FUNC_4(VAR_7, VAR_2, FUNC_3(VAR_2)) == 0) {
               FUNC_0(VAR_7);


               VAR_8 = FUNC_2(VAR_1, VAR_4, VAR_5, 0);
               return VAR_8;
       } else {
               FUNC_0(VAR_7);
               return -1;
       }
}
