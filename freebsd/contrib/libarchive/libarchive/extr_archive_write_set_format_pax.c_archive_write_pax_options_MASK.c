
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pax {int opt_binary; int * sconv_utf8; } ;
struct archive_write {int archive; scalar_t__ format_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ,char*) ;
 int * FUNC_1 (int *,char*,int ) ;
 scalar_t__ FUNC_2 (char const*,char*) ;

__attribute__((used)) static int
FUNC_3(struct archive_write *VAR_5, const char *VAR_6,
    const char *VAR_7)
{
 struct pax *VAR_8 = (struct pax *)VAR_5->format_data;
 int VAR_9 = VAR_1;

 if (FUNC_2(VAR_6, "hdrcharset") == 0) {




  if (VAR_7 == ((void*)0) || VAR_7[0] == 0)
   FUNC_0(&VAR_5->archive, VAR_0,
       "pax: hdrcharset option needs a character-set name");
  else if (FUNC_2(VAR_7, "BINARY") == 0 ||
      FUNC_2(VAR_7, "binary") == 0) {




   VAR_8->opt_binary = 1;
   VAR_9 = VAR_3;
  } else if (FUNC_2(VAR_7, "UTF-8") == 0) {







   VAR_8->sconv_utf8 = FUNC_1(
       &(VAR_5->archive), "UTF-8", 0);
   if (VAR_8->sconv_utf8 == ((void*)0))
    VAR_9 = VAR_2;
   else
    VAR_9 = VAR_3;
  } else
   FUNC_0(&VAR_5->archive, VAR_0,
       "pax: invalid charset name");
  return (VAR_9);
 }




 return (VAR_4);
}
