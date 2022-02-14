
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_string_conv {scalar_t__ nconverter; } ;
struct archive {unsigned int current_codepage; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct archive*,struct archive_string_conv*) ;
 int FUNC_1 (struct archive*,int ,char*,...) ;
 int FUNC_2 (char const*) ;
 struct archive_string_conv* FUNC_3 (int ,int ,unsigned int,int) ;
 struct archive_string_conv* FUNC_4 (struct archive*,char const*,char const*) ;
 int FUNC_5 (struct archive_string_conv*) ;
 unsigned int FUNC_6 () ;

__attribute__((used)) static struct archive_string_conv *
FUNC_7(struct archive *VAR_3, const char *VAR_4, const char *VAR_5, int VAR_6)
{
 struct archive_string_conv *VAR_7;
 unsigned VAR_8;


 VAR_7 = FUNC_4(VAR_3, VAR_4, VAR_5);
 if (VAR_7 != ((void*)0))
  return (VAR_7);

 if (VAR_3 == ((void*)0))
  VAR_8 = FUNC_6();
 else
  VAR_8 = VAR_3->current_codepage;

 VAR_7 = FUNC_3(FUNC_2(VAR_4),
     FUNC_2(VAR_5), VAR_8, VAR_6);
 if (VAR_7 == ((void*)0)) {
  if (VAR_3 != ((void*)0))
   FUNC_1(VAR_3, VAR_1,
       "Could not allocate memory for "
       "a string conversion object");
  return (((void*)0));
 }





 if (VAR_7->nconverter == 0) {
  if (VAR_3 != ((void*)0)) {





   FUNC_1(VAR_3, VAR_0,
       "A character-set conversion not fully supported "
       "on this platform");

  }

  FUNC_5(VAR_7);
  return (((void*)0));
 }




 if (VAR_3 != ((void*)0))
  FUNC_0(VAR_3, VAR_7);
 return (VAR_7);
}
