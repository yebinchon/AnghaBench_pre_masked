
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct progress_data {struct archive_entry* entry; struct archive* archive; struct bsdtar* bsdtar; } ;
struct bsdtar {scalar_t__ verbose; } ;
struct archive_entry {int dummy; } ;
struct archive {int dummy; } ;


 int FUNC_0 (struct archive_entry*) ;
 int FUNC_1 (struct archive_entry*) ;
 int FUNC_2 (struct archive*) ;
 int FUNC_3 (struct archive*,int) ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 () ;
 int FUNC_6 (int ,char*,int ) ;
 int VAR_0 ;
 char* FUNC_7 (int) ;

__attribute__((used)) static void
FUNC_8(void *VAR_1)
{
 struct progress_data *VAR_2 = (struct progress_data *)VAR_1;
 struct bsdtar *VAR_3 = VAR_2->bsdtar;
 struct archive *VAR_4 = VAR_2->archive;
 struct archive_entry *VAR_5 = VAR_2->entry;
 uint64_t VAR_6, VAR_7;
 int VAR_8;

 if (!FUNC_5())
  return;

 if (VAR_3->verbose)
  FUNC_4(VAR_0, "\n");
 if (VAR_4 != ((void*)0)) {
  VAR_6 = FUNC_3(VAR_4, -1);
  VAR_7 = FUNC_3(VAR_4, 0);
  if (VAR_6 > VAR_7)
   VAR_8 = 0;
  else
   VAR_8 = (int)((VAR_7 - VAR_6) * 100 / VAR_7);
  FUNC_4(VAR_0,
      "In: %s bytes, compression %d%%;",
      FUNC_7(VAR_6), VAR_8);
  FUNC_4(VAR_0, "  Out: %d files, %s bytes\n",
      FUNC_2(VAR_4), FUNC_7(VAR_7));
 }
 if (VAR_5 != ((void*)0)) {
  FUNC_6(VAR_0, "Current: %s",
      FUNC_0(VAR_5));
  FUNC_4(VAR_0, " (%s bytes)\n",
      FUNC_7(FUNC_1(VAR_5)));
 }
}
