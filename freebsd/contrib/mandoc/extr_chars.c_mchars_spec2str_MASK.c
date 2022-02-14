
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ln {char const* ascii; } ;


 int VAR_0 ;
 struct ln* FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,char const*,char const**) ;
 size_t FUNC_2 (char const*) ;

const char *
FUNC_3(const char *VAR_1, size_t VAR_2, size_t *VAR_3)
{
 const struct ln *VAR_4;
 const char *VAR_5;

 VAR_5 = VAR_1 + VAR_2;
 VAR_4 = FUNC_0(&VAR_0, FUNC_1(&VAR_0, VAR_1, &VAR_5));
 if (VAR_4 == ((void*)0))
  return ((void*)0);

 *VAR_3 = FUNC_2(VAR_4->ascii);
 return VAR_4->ascii;
}
