
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ifmedia_type_to_subtype {TYPE_1__* options; } ;
struct ifmedia_description {int ifmt_word; int * ifmt_string; } ;
struct TYPE_2__ {int * desc; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int,char*,...) ;
 int FUNC_2 (char*) ;
 struct ifmedia_description* VAR_0 ;
 struct ifmedia_type_to_subtype* VAR_1 ;
 int FUNC_3 (int *,char*) ;
 char* FUNC_4 (char const*) ;
 char* FUNC_5 (char*,char*) ;

__attribute__((used)) static int
FUNC_6(int VAR_2, const char *VAR_3)
{
 struct ifmedia_description *VAR_4;
 struct ifmedia_type_to_subtype *VAR_5;
 char *VAR_6, *VAR_7;
 int VAR_8 = 0, VAR_9, VAR_10 = 0;


 VAR_6 = FUNC_4(VAR_3);
 if (VAR_6 == ((void*)0))
  FUNC_0(1, "strdup");


 for (VAR_4 = VAR_0, VAR_5 = VAR_1;
     VAR_4->ifmt_string != ((void*)0); VAR_4++, VAR_5++)
  if (VAR_2 == VAR_4->ifmt_word)
   break;
 if (VAR_4->ifmt_string == ((void*)0))
  FUNC_1(1, "unknown media type 0x%x", VAR_2);





 VAR_7 = VAR_6;
 for (; (VAR_7 = FUNC_5(VAR_7, ",")) != ((void*)0); VAR_7 = ((void*)0)) {
  for (VAR_9 = 0; VAR_5->options[VAR_9].desc != ((void*)0); VAR_9++) {
   VAR_8 = FUNC_3(VAR_5->options[VAR_9].desc, VAR_7);
   if (VAR_8 != -1)
    break;
  }
  if (VAR_8 == 0)
   FUNC_1(1, "unknown option: %s", VAR_7);
  VAR_10 |= VAR_8;
 }

 FUNC_2(VAR_6);
 return (VAR_10);
}
