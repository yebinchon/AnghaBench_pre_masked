
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct quoting_options {int style; } ;


 struct quoting_options const VAR_0 ;
 size_t FUNC_0 (char*,size_t,char const*,size_t,int ,struct quoting_options const*) ;

size_t
FUNC_1 (char *VAR_1, size_t VAR_2,
   char const *VAR_3, size_t VAR_4,
   struct quoting_options const *VAR_5)
{
  struct quoting_options const *VAR_6 = VAR_5 ? VAR_5 : &VAR_0;
  return FUNC_0 (VAR_1, VAR_2, VAR_3, VAR_4,
       VAR_6->style, VAR_6);
}
