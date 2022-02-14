
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ifmedia_type_to_subtype {TYPE_1__* modes; } ;
struct ifmedia_description {int ifmt_word; int * ifmt_string; } ;
struct TYPE_2__ {int * desc; } ;


 int FUNC_0 (int,char*,int) ;
 struct ifmedia_description* VAR_0 ;
 struct ifmedia_type_to_subtype* VAR_1 ;
 int FUNC_1 (int *,char const*) ;

__attribute__((used)) static int
FUNC_2(int VAR_2, const char *VAR_3)
{
 struct ifmedia_description *VAR_4;
 struct ifmedia_type_to_subtype *VAR_5;
 int VAR_6, VAR_7;


 for (VAR_4 = VAR_0, VAR_5 = VAR_1;
     VAR_4->ifmt_string != ((void*)0); VAR_4++, VAR_5++)
  if (VAR_2 == VAR_4->ifmt_word)
   break;
 if (VAR_4->ifmt_string == ((void*)0))
  FUNC_0(1, "unknown media mode 0x%x", VAR_2);

 for (VAR_7 = 0; VAR_5->modes[VAR_7].desc != ((void*)0); VAR_7++) {
  VAR_6 = FUNC_1(VAR_5->modes[VAR_7].desc, VAR_3);
  if (VAR_6 != -1)
   return (VAR_6);
 }
 return -1;
}
