
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ln {int unicode; } ;


 int VAR_0 ;
 struct ln* FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,char const*,char const**) ;

int
FUNC_2(const char *VAR_1, size_t VAR_2)
{
 const struct ln *VAR_3;
 const char *VAR_4;

 VAR_4 = VAR_1 + VAR_2;
 VAR_3 = FUNC_0(&VAR_0, FUNC_1(&VAR_0, VAR_1, &VAR_4));
 return VAR_3 != ((void*)0) ? VAR_3->unicode : -1;
}
