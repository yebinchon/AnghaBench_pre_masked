
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct contents {scalar_t__ s; int o; char* d; } ;
struct archive_entry {int dummy; } ;
struct archive_contents {int * filename; struct contents* contents; } ;
struct archive {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct archive_entry*) ;
 int FUNC_1 (struct archive_entry*) ;
 int FUNC_2 (struct archive*) ;
 int FUNC_3 (struct archive*,void const**,scalar_t__*,int*) ;
 char FUNC_4 (struct archive*) ;
 int FUNC_5 (struct archive*) ;
 struct archive* FUNC_6 () ;
 int FUNC_7 (struct archive*,struct archive_entry**) ;
 scalar_t__ FUNC_8 (struct archive*,char const*,int) ;
 scalar_t__ FUNC_9 (struct archive*) ;
 scalar_t__ FUNC_10 (struct archive*) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int,char) ;
 int FUNC_13 (struct archive*,int,int) ;
 int FUNC_14 (int *,int ) ;
 int FUNC_15 (char const*) ;
 int FUNC_16 (char*,char const*,...) ;

__attribute__((used)) static void
FUNC_17(const char *VAR_3, struct archive_contents *VAR_4)
{
 struct archive_entry *VAR_5;
 int VAR_6;

 struct contents VAR_7;

 struct contents VAR_8;
 const void *VAR_9;
 struct archive *VAR_10;

 FUNC_15(VAR_3);

 FUNC_11((VAR_10 = FUNC_6()) != ((void*)0));
 FUNC_11(0 == FUNC_9(VAR_10));
 FUNC_11(0 == FUNC_10(VAR_10));
 FUNC_16("Can't open %s", VAR_3);
 FUNC_11(0 == FUNC_8(VAR_10, VAR_3, 3));

 while (VAR_4->filename != ((void*)0)) {
  struct contents *VAR_11 = VAR_4->contents;

  if (!FUNC_13(VAR_10, 0, FUNC_7(VAR_10, &VAR_5))) {
   FUNC_12(VAR_1, FUNC_4(VAR_10));
   return;
  }
  FUNC_16("Name mismatch in archive %s", VAR_3);
  FUNC_14(VAR_4->filename, FUNC_1(VAR_5));
  FUNC_12(FUNC_0(VAR_5), 0);
  FUNC_13(VAR_10, FUNC_5(VAR_10), VAR_2);

  VAR_7 = *VAR_11++;
  while (0 == (VAR_6 = FUNC_3(VAR_10,
     &VAR_9, &VAR_8.s, &VAR_8.o))) {
   VAR_8.d = VAR_9;
   while (VAR_8.s > 0) {
    char VAR_12 = *VAR_8.d;
    if(VAR_8.o < VAR_7.o) {




     FUNC_16("%s: pad at offset %d "
         "should be zero", VAR_3, VAR_8.o);
     FUNC_12(VAR_12, 0);
    } else if (VAR_8.o == VAR_7.o) {



     FUNC_12(VAR_12, *VAR_7.d);
     VAR_7.d++;
     VAR_7.o++;
     VAR_7.s--;

     if (VAR_7.s <= 0)
      VAR_7 = *VAR_11++;
    } else {



     FUNC_16("%s: Unexpected trailing data",
         VAR_3);
     FUNC_11(VAR_8.o <= VAR_7.o);
     FUNC_4(VAR_10);
     return;
    }
    VAR_8.d++;
    VAR_8.o++;
    VAR_8.s--;
   }
  }
  FUNC_16("%s: should be end of entry", VAR_3);
  FUNC_13(VAR_10, VAR_6, VAR_0);
  FUNC_16("%s: Size returned at EOF must be zero", VAR_3);
  FUNC_12((int)VAR_8.s, 0);
  FUNC_16("%s: Offset of final empty chunk must be same as file size", VAR_3);
  FUNC_12(VAR_8.o, VAR_7.o);

  ++VAR_4;
 }

 VAR_6 = FUNC_7(VAR_10, &VAR_5);
 FUNC_13(VAR_10, VAR_0, VAR_6);

 FUNC_13(VAR_10, VAR_1, FUNC_2(VAR_10));
 FUNC_12(VAR_1, FUNC_4(VAR_10));
}
