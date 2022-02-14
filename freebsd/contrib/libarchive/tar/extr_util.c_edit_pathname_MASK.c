
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bsdtar {int flags; int strip_components; } ;
struct archive_entry {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct bsdtar*,char const*,char**,int,int) ;
 int FUNC_1 (struct archive_entry*,char const*) ;
 int FUNC_2 (struct archive_entry*,char const*) ;
 int FUNC_3 (struct archive_entry*,char*) ;
 char* FUNC_4 (struct archive_entry*) ;
 char* FUNC_5 (struct archive_entry*) ;
 char const* FUNC_6 (struct archive_entry*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int ,char*) ;
 char* FUNC_9 (struct bsdtar*,char const*) ;
 char* FUNC_10 (char const*,int ) ;

int
FUNC_11(struct bsdtar *VAR_1, struct archive_entry *VAR_2)
{
 const char *VAR_3 = FUNC_5(VAR_2);
 const char *VAR_4 = VAR_3;
 const char *VAR_5 = FUNC_4(VAR_2);
 const char *VAR_6 = VAR_5;
 if (VAR_1->strip_components > 0) {
  VAR_3 = FUNC_10(VAR_3, VAR_1->strip_components);
  if (VAR_3 == ((void*)0))
   return (1);

  if (VAR_5 != ((void*)0)) {
   VAR_5 = FUNC_10(VAR_5,
       VAR_1->strip_components);
   if (VAR_5 == ((void*)0))
    return (1);
  }
 }

 if ((VAR_1->flags & VAR_0) == 0) {

  VAR_3 = FUNC_9(VAR_1, VAR_3);
  if (*VAR_3 == '\0')
   VAR_3 = ".";

  if (VAR_5 != ((void*)0)) {
   VAR_5 = FUNC_9(VAR_1, VAR_5);
   if (*VAR_5 == '\0')
    return (1);
  }
 } else {

  while (VAR_3[0] == '/' && VAR_3[1] == '/')
   VAR_3++;
 }


 if (VAR_3 != VAR_4) {
  FUNC_2(VAR_2, VAR_3);
 }
 if (VAR_5 != VAR_6) {
  FUNC_1(VAR_2, VAR_5);
 }
 return (0);
}
