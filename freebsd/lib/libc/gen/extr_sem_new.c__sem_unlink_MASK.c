
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int path ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*,char const*,int) ;
 int FUNC_2 (char*) ;

int
FUNC_3(const char *VAR_5)
{
 char VAR_6[VAR_2];

 if (VAR_5[0] != '/') {
  VAR_4 = VAR_1;
  return -1;
 }
 VAR_5++;
 FUNC_0(VAR_6, VAR_3);
 if (FUNC_1(VAR_6, VAR_5, sizeof(VAR_6)) >= sizeof(VAR_6)) {
  VAR_4 = VAR_0;
  return (-1);
 }

 return (FUNC_2(VAR_6));
}
