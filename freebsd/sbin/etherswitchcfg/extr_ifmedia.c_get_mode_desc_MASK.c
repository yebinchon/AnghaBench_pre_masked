
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ifmedia_type_to_subtype {TYPE_1__* modes; } ;
struct ifmedia_description {scalar_t__ ifmt_word; int * ifmt_string; } ;
struct TYPE_2__ {struct ifmedia_description* desc; scalar_t__ alias; } ;


 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static struct ifmedia_description *FUNC_1(int VAR_0,
    struct ifmedia_type_to_subtype *VAR_1)
{
 int VAR_2;
 struct ifmedia_description *VAR_3;

 for (VAR_2 = 0; VAR_1->modes[VAR_2].desc != ((void*)0); VAR_2++) {
  if (VAR_1->modes[VAR_2].alias)
   continue;
  for (VAR_3 = VAR_1->modes[VAR_2].desc;
      VAR_3->ifmt_string != ((void*)0); VAR_3++) {
   if (FUNC_0(VAR_0) == VAR_3->ifmt_word)
    return VAR_3;
  }
 }

 return ((void*)0);
}
