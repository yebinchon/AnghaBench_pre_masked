
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpio {int return_value; char const* destdir; size_t pass_destpath_alloc; char* pass_destpath; int * linkresolver; scalar_t__ option_rename; int gname_override; int gid_override; int uname_override; int uid_override; int archive_read_disk; } ;
struct archive_entry {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct archive_entry*,char const*) ;
 int FUNC_1 (struct archive_entry*,char const*) ;
 scalar_t__ FUNC_2 (struct archive_entry*) ;
 int FUNC_3 (struct archive_entry*) ;
 int FUNC_4 (int *,struct archive_entry**,struct archive_entry**) ;
 struct archive_entry* FUNC_5 () ;
 int FUNC_6 (struct archive_entry*,int ) ;
 int FUNC_7 (struct archive_entry*,int ) ;
 int FUNC_8 (struct archive_entry*,int ) ;
 int FUNC_9 (struct archive_entry*,int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,struct archive_entry*,int,int *) ;
 char* FUNC_12 (char const*) ;
 int FUNC_13 (struct cpio*,struct archive_entry*) ;
 int FUNC_14 (char*) ;
 int FUNC_15 (int,int ,char*,...) ;
 int FUNC_16 (int ,char*,int ) ;
 char* FUNC_17 (int) ;
 int FUNC_18 (char const*) ;
 int FUNC_19 (char*,int ) ;
 int FUNC_20 (char*,char const*) ;
 int FUNC_21 (char const*) ;

__attribute__((used)) static int
FUNC_22(struct cpio *VAR_4, const char *VAR_5)
{
 const char *VAR_6;
 struct archive_entry *VAR_7, *VAR_8;
 size_t VAR_9;
 int VAR_10;





 VAR_7 = FUNC_5();
 if (VAR_7 == ((void*)0))
  FUNC_15(1, 0, "Couldn't allocate entry");
 FUNC_1(VAR_7, VAR_5);
 VAR_10 = FUNC_11(VAR_4->archive_read_disk,
     VAR_7, -1, ((void*)0));
 if (VAR_10 < VAR_1)
  FUNC_15(1, 0, "%s",
      FUNC_10(VAR_4->archive_read_disk));
 if (VAR_10 < VAR_2)
  FUNC_16(0, "%s",
      FUNC_10(VAR_4->archive_read_disk));
 if (VAR_10 <= VAR_1) {
  FUNC_3(VAR_7);
  VAR_4->return_value = 1;
  return (VAR_10);
 }

 if (VAR_4->uid_override >= 0) {
  FUNC_8(VAR_7, VAR_4->uid_override);
  FUNC_9(VAR_7, VAR_4->uname_override);
 }
 if (VAR_4->gid_override >= 0) {
  FUNC_6(VAR_7, VAR_4->gid_override);
  FUNC_7(VAR_7, VAR_4->gname_override);
 }







 VAR_6 = VAR_5;
 if (VAR_4->destdir) {
  VAR_9 = FUNC_21(VAR_4->destdir) + FUNC_21(VAR_5) + 8;
  if (VAR_9 >= VAR_4->pass_destpath_alloc) {
   while (VAR_9 >= VAR_4->pass_destpath_alloc) {
    VAR_4->pass_destpath_alloc += 512;
    VAR_4->pass_destpath_alloc *= 2;
   }
   FUNC_14(VAR_4->pass_destpath);
   VAR_4->pass_destpath = FUNC_17(VAR_4->pass_destpath_alloc);
   if (VAR_4->pass_destpath == ((void*)0))
    FUNC_15(1, VAR_3,
        "Can't allocate path buffer");
  }
  FUNC_20(VAR_4->pass_destpath, VAR_4->destdir);
  FUNC_19(VAR_4->pass_destpath, FUNC_18(VAR_5));
  VAR_6 = VAR_4->pass_destpath;
 }
 if (VAR_4->option_rename)
  VAR_6 = FUNC_12(VAR_6);
 if (VAR_6 == ((void*)0)) {
  FUNC_3(VAR_7);
  return (0);
 }
 FUNC_0(VAR_7, VAR_6);




 VAR_8 = ((void*)0);
 if (VAR_4->linkresolver != ((void*)0)
     && FUNC_2(VAR_7) != VAR_0) {
  FUNC_4(VAR_4->linkresolver, &VAR_7, &VAR_8);
 }

 if (VAR_7 != ((void*)0)) {
  VAR_10 = FUNC_13(VAR_4, VAR_7);
  FUNC_3(VAR_7);
  if (VAR_8 != ((void*)0)) {
   if (VAR_10 == 0)
    VAR_10 = FUNC_13(VAR_4, VAR_8);
   FUNC_3(VAR_8);
  }
 }
 return (VAR_10);
}
