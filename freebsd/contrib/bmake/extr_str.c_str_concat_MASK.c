
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (unsigned int) ;
 int FUNC_1 (char*,char const*,int) ;
 int FUNC_2 (char const*) ;

char *
FUNC_3(const char *VAR_2, const char *VAR_3, int VAR_4)
{
 int VAR_5, VAR_6;
 char *VAR_7;


 VAR_5 = FUNC_2(VAR_2);
 VAR_6 = FUNC_2(VAR_3);


 VAR_7 = FUNC_0((unsigned int)(VAR_5 + VAR_6 + 2));


 FUNC_1(VAR_7, VAR_2, VAR_5);


 if (VAR_4 & VAR_1) {
  VAR_7[VAR_5] = ' ';
  ++VAR_5;
 } else if (VAR_4 & VAR_0) {
  VAR_7[VAR_5] = '/';
  ++VAR_5;
 }


 FUNC_1(VAR_7 + VAR_5, VAR_3, VAR_6 + 1);

 return(VAR_7);
}
