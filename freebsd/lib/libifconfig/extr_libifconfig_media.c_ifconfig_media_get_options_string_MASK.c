
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ifmedia_type_to_subtype {TYPE_1__* options; } ;
struct ifmedia_description {char* ifmt_string; int ifmt_word; } ;
struct TYPE_2__ {struct ifmedia_description* desc; scalar_t__ alias; } ;


 int FUNC_0 (int) ;
 struct ifmedia_type_to_subtype* FUNC_1 (int) ;
 size_t FUNC_2 (char*,char*,size_t) ;

void
FUNC_3(int VAR_0, char *VAR_1, size_t VAR_2)
{
 struct ifmedia_type_to_subtype *VAR_3;
 struct ifmedia_description *VAR_4;
 int VAR_5, VAR_6 = 0;
 size_t VAR_7;

 FUNC_0(VAR_2 > 0);
 VAR_1[0] = '\0';
 VAR_3 = FUNC_1(VAR_0);
 for (VAR_5 = 0; VAR_3->options[VAR_5].desc != ((void*)0); VAR_5++) {
  if (VAR_3->options[VAR_5].alias) {
   continue;
  }
  for (VAR_4 = VAR_3->options[VAR_5].desc;
      VAR_4->ifmt_string != ((void*)0); VAR_4++) {
   if (VAR_0 & VAR_4->ifmt_word) {
    if (VAR_6++) {
     FUNC_2(VAR_1, ",", VAR_2);
    }
    VAR_7 = FUNC_2(VAR_1, VAR_4->ifmt_string, VAR_2);
    FUNC_0(VAR_7 < VAR_2);
    VAR_1 += VAR_7;
    VAR_2 -= VAR_7;
   }
  }
 }
}
