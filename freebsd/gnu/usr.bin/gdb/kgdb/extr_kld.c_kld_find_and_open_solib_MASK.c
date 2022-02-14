
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int path ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 (char*,unsigned int,int ) ;
 char* FUNC_2 (char*) ;

__attribute__((used)) static int
FUNC_3 (char *VAR_3, unsigned VAR_4, char **VAR_5)
{
 char VAR_6[VAR_1];
 int VAR_7;

 *VAR_5 = ((void*)0);
 if (!FUNC_0(VAR_3, VAR_6, sizeof(VAR_6))) {
  VAR_2 = VAR_0;
  return (-1);
 }
 VAR_7 = FUNC_1(VAR_6, VAR_4, 0);
 if (VAR_7 >= 0)
  *VAR_5 = FUNC_2(VAR_6);
 return (VAR_7);
}
