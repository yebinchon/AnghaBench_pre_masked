
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int path ;





 int VAR_0 ;
 char* VAR_1 ;
 int FUNC_0 (char const*,int) ;
 int FUNC_1 (int const*,int,char*,size_t*,int *,int ) ;

__attribute__((used)) static int
FUNC_2(int VAR_2)
{
 const char *VAR_3 = VAR_1;

 static const int VAR_4[] = {
  130, 129, 128, -1,
 };
 char VAR_5[VAR_0];
 size_t VAR_6;

 VAR_6 = sizeof(VAR_5);
 if (FUNC_1(VAR_4, 4, VAR_5, &VAR_6, ((void*)0), 0) != -1)
  VAR_3 = VAR_5;

 return FUNC_0(VAR_3, VAR_2);
}
