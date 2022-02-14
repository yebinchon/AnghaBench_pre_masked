
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dl_list {int dummy; } ;


 int FUNC_0 (struct dl_list*,char*) ;
 char* FUNC_1 (char const*,int) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (char const*,int) ;
 int FUNC_4 (char const*) ;

int FUNC_5(struct dl_list *VAR_0, const char *VAR_1,
     int VAR_2)
{
 const char *VAR_3;
 char *VAR_4;
 int VAR_5;

 VAR_3 = FUNC_3(VAR_1, VAR_2);
 if (VAR_3 == ((void*)0))
  VAR_3 = VAR_1 + FUNC_4(VAR_1);
 VAR_4 = FUNC_1(VAR_1, VAR_3 - VAR_1);
 if (VAR_4 == ((void*)0))
  return -1;
 VAR_5 = FUNC_0(VAR_0, VAR_4);
 FUNC_2(VAR_4);
 return VAR_5;
}
