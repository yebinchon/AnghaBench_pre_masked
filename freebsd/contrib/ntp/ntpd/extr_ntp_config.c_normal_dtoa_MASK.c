
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int,char*,double) ;
 char* FUNC_2 (char*,char) ;
 int FUNC_3 (char*,char*,int) ;

__attribute__((used)) static char *
FUNC_4(
 double VAR_1
 )
{
 char * VAR_2;
 char * VAR_3;
 char * VAR_4;

 FUNC_0(VAR_2);
 FUNC_1(VAR_2, VAR_0, "%g", VAR_1);


 VAR_3 = FUNC_2(VAR_2, 'e');
 if (((void*)0) == VAR_3) {
  VAR_3 = FUNC_2(VAR_2, 'E');
  if (((void*)0) == VAR_3)
   return VAR_2;
  *VAR_3 = 'e';
 }
 VAR_3++;
 if ('-' == *VAR_3)
  VAR_3++;
 VAR_4 = VAR_3;
 while ('0' == *VAR_4)
  VAR_4++;
 if (VAR_4 == VAR_3)
  return VAR_2;
 FUNC_3(VAR_3, VAR_4, VAR_0 - (VAR_3 - VAR_2));

 return VAR_2;
}
