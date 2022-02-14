
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifmedia_description {scalar_t__ ifmt_word; int * ifmt_string; } ;


 scalar_t__ FUNC_0 (int) ;
 struct ifmedia_description* VAR_0 ;

__attribute__((used)) static struct ifmedia_description *FUNC_1(int VAR_1)
{
 struct ifmedia_description *VAR_2;

 for (VAR_2 = VAR_0; VAR_2->ifmt_string != ((void*)0); VAR_2++)
  if (FUNC_0(VAR_1) == VAR_2->ifmt_word)
   break;

 return VAR_2;
}
