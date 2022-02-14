
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_string {char const* s; } ;


 char const* VAR_0 ;
 char* FUNC_0 () ;
 char* FUNC_1 () ;
 char* FUNC_2 () ;
 char* FUNC_3 () ;
 int FUNC_4 (struct archive_string*,char const*) ;
 int FUNC_5 (struct archive_string*) ;
 int FUNC_6 (struct archive_string*,char const*,int) ;
 char* FUNC_7 () ;
 char* FUNC_8 (char const*,char) ;
 int FUNC_9 (char const*) ;

const char *
FUNC_10(void)
{
 static struct archive_string VAR_1;
 static int VAR_2 = 0;
 const char *VAR_3 = FUNC_7();
 const char *VAR_4 = FUNC_2();
 const char *VAR_5 = FUNC_0();
 const char *VAR_6 = FUNC_1();
 const char *VAR_7 = FUNC_3();

 if (!VAR_2) {
  FUNC_5(&VAR_1);

  FUNC_4(&VAR_1, VAR_0);
  if (VAR_3 != ((void*)0)) {
   FUNC_4(&VAR_1, " zlib/");
   FUNC_4(&VAR_1, VAR_3);
  }
  if (VAR_4) {
   FUNC_4(&VAR_1, " liblzma/");
   FUNC_4(&VAR_1, VAR_4);
  }
  if (VAR_5) {
   const char *VAR_8 = VAR_5;
   const char *VAR_9 = FUNC_8(VAR_8, ',');
   if (VAR_9 == ((void*)0))
    VAR_9 = VAR_8 + FUNC_9(VAR_8);
   FUNC_4(&VAR_1, " bz2lib/");
   FUNC_6(&VAR_1, VAR_8, VAR_9 - VAR_8);
  }
  if (VAR_6) {
   FUNC_4(&VAR_1, " liblz4/");
   FUNC_4(&VAR_1, VAR_6);
  }
  if (VAR_7) {
   FUNC_4(&VAR_1, " libzstd/");
   FUNC_4(&VAR_1, VAR_7);
  }
 }
 return VAR_1.s;
}
