
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lafe_line_reader {int dummy; } ;
struct cpio {char* destdir; int pass_destpath; int * archive; int quiet; scalar_t__ dot; int linkresolver; int option_null; int * archive_read_disk; scalar_t__ option_follow_links; int extract_flags; } ;
typedef int int64_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 int * FUNC_4 () ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int * FUNC_9 () ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (struct cpio*,char const*) ;
 int FUNC_14 (int ,char*,...) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int,int ,char*,...) ;
 struct lafe_line_reader* FUNC_17 (char*,int ) ;
 int FUNC_18 (struct lafe_line_reader*) ;
 char* FUNC_19 (struct lafe_line_reader*) ;
 char* FUNC_20 (size_t) ;
 int FUNC_21 (char*,char const*,size_t) ;
 int VAR_1 ;
 size_t FUNC_22 (char const*) ;

__attribute__((used)) static void
FUNC_23(struct cpio *VAR_2, const char *VAR_3)
{
 struct lafe_line_reader *VAR_4;
 const char *VAR_5;
 int VAR_6;
 size_t VAR_7;


 VAR_7 = FUNC_22(VAR_3);
 VAR_2->destdir = FUNC_20(VAR_7 + 8);
 FUNC_21(VAR_2->destdir, VAR_3, VAR_7);
 if (VAR_7 == 0 || VAR_3[VAR_7 - 1] != '/')
  VAR_2->destdir[VAR_7++] = '/';
 VAR_2->destdir[VAR_7++] = '\0';

 VAR_2->archive = FUNC_9();
 if (VAR_2->archive == ((void*)0))
  FUNC_16(1, 0, "Failed to allocate archive object");
 VAR_6 = FUNC_10(VAR_2->archive, VAR_2->extract_flags);
 if (VAR_6 != VAR_0)
  FUNC_16(1, 0, "%s", FUNC_2(VAR_2->archive));
 VAR_2->linkresolver = FUNC_1();
 FUNC_11(VAR_2->archive);

 VAR_2->archive_read_disk = FUNC_4();
 if (VAR_2->archive_read_disk == ((void*)0))
  FUNC_16(1, 0, "Failed to allocate archive object");
 if (VAR_2->option_follow_links)
  FUNC_6(VAR_2->archive_read_disk);
 else
  FUNC_7(VAR_2->archive_read_disk);
 FUNC_5(VAR_2->archive_read_disk);

 VAR_4 = FUNC_17("-", VAR_2->option_null);
 while ((VAR_5 = FUNC_19(VAR_4)) != ((void*)0))
  FUNC_13(VAR_2, VAR_5);
 FUNC_18(VAR_4);

 FUNC_0(VAR_2->linkresolver);
 VAR_6 = FUNC_8(VAR_2->archive);
 if (VAR_2->dot)
  FUNC_14(VAR_1, "\n");
 if (VAR_6 != VAR_0)
  FUNC_16(1, 0, "%s", FUNC_2(VAR_2->archive));

 if (!VAR_2->quiet) {
  int64_t VAR_8 =
   (FUNC_3(VAR_2->archive, 0) + 511)
   / 512;
  FUNC_14(VAR_1, "%lu %s\n", (unsigned long)VAR_8,
      VAR_8 == 1 ? "block" : "blocks");
 }

 FUNC_12(VAR_2->archive);
 FUNC_15(VAR_2->pass_destpath);
}
