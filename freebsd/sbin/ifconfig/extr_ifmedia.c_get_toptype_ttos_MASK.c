
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifmedia_type_to_subtype {int dummy; } ;
struct ifmedia_description {scalar_t__ ifmt_word; int * ifmt_string; } ;


 scalar_t__ FUNC_0 (int) ;
 struct ifmedia_description* VAR_0 ;
 struct ifmedia_type_to_subtype* VAR_1 ;

__attribute__((used)) static struct ifmedia_type_to_subtype *FUNC_1(int VAR_2)
{
 struct ifmedia_description *VAR_3;
 struct ifmedia_type_to_subtype *VAR_4;

 for (VAR_3 = VAR_0, VAR_4 = VAR_1;
     VAR_3->ifmt_string != ((void*)0); VAR_3++, VAR_4++)
  if (FUNC_0(VAR_2) == VAR_3->ifmt_word)
   break;

 return VAR_4;
}
