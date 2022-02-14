
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifmedia_description {int ifmt_word; int * ifmt_string; } ;


 scalar_t__ FUNC_0 (int *,char const*) ;

__attribute__((used)) static int
FUNC_1(struct ifmedia_description *VAR_0, const char *VAR_1)
{

 for (; VAR_0->ifmt_string != ((void*)0); VAR_0++)
  if (FUNC_0(VAR_0->ifmt_string, VAR_1) == 0)
   return (VAR_0->ifmt_word);

 return (-1);
}
