
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lafe_line_reader {int dummy; } ;
struct cpio {int compress; int add_filter; int linkresolver; int * archive; int quiet; scalar_t__ dot; int option_null; int filename; int * passphrase; int bytes_per_block; int format; int * archive_read_disk; scalar_t__ option_follow_links; scalar_t__ option_append; } ;
struct archive_entry {int dummy; } ;
typedef int int64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct archive_entry*) ;
 int FUNC_1 (int ,struct archive_entry**,struct archive_entry**) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 () ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (int *) ;
 int FUNC_23 (int *) ;
 int FUNC_24 (int *) ;
 int FUNC_25 (int *) ;
 int FUNC_26 (int *) ;
 int * FUNC_27 () ;
 int FUNC_28 (int *,int ) ;
 int FUNC_29 (int *,int ) ;
 int FUNC_30 (int *,int ) ;
 int FUNC_31 (int *,int *) ;
 int FUNC_32 (int *,struct cpio*,int *) ;
 int FUNC_33 (struct cpio*,struct archive_entry*) ;
 int FUNC_34 (struct cpio*,char const*) ;
 int FUNC_35 (int ,char*,...) ;
 int FUNC_36 (int,int ,char*,...) ;
 struct lafe_line_reader* FUNC_37 (char*,int ) ;
 int FUNC_38 (struct lafe_line_reader*) ;
 char* FUNC_39 (struct lafe_line_reader*) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_40(struct cpio *VAR_4)
{
 struct archive_entry *VAR_5, *VAR_6;
 struct lafe_line_reader *VAR_7;
 const char *VAR_8;
 int VAR_9;

 if (VAR_4->option_append)
  FUNC_36(1, 0, "Append mode not yet supported.");

 VAR_4->archive_read_disk = FUNC_8();
 if (VAR_4->archive_read_disk == ((void*)0))
  FUNC_36(1, 0, "Failed to allocate archive object");
 if (VAR_4->option_follow_links)
  FUNC_10(VAR_4->archive_read_disk);
 else
  FUNC_11(VAR_4->archive_read_disk);
 FUNC_9(VAR_4->archive_read_disk);

 VAR_4->archive = FUNC_27();
 if (VAR_4->archive == ((void*)0))
  FUNC_36(1, 0, "Failed to allocate archive object");
 switch (VAR_4->compress) {
 case 134:
  VAR_9 = FUNC_15(VAR_4->archive);
  break;
 case 'J':
  VAR_9 = FUNC_23(VAR_4->archive);
  break;
 case 133:
  VAR_9 = FUNC_17(VAR_4->archive);
  break;
 case 132:
  VAR_9 = FUNC_18(VAR_4->archive);
  break;
 case 131:
  VAR_9 = FUNC_19(VAR_4->archive);
  break;
 case 130:
  VAR_9 = FUNC_20(VAR_4->archive);
  break;
 case 128:
  VAR_9 = FUNC_24(VAR_4->archive);
  break;
 case 'j': case 'y':
  VAR_9 = FUNC_13(VAR_4->archive);
  break;
 case 'z':
  VAR_9 = FUNC_16(VAR_4->archive);
  break;
 case 'Z':
  VAR_9 = FUNC_14(VAR_4->archive);
  break;
 default:
  VAR_9 = FUNC_21(VAR_4->archive);
  break;
 }
 if (VAR_9 < VAR_1)
  FUNC_36(1, 0, "Requested compression not available");
 switch (VAR_4->add_filter) {
 case 0:
  VAR_9 = VAR_0;
  break;
 case 135:
  VAR_9 = FUNC_12(VAR_4->archive);
  break;
 case 129:
  VAR_9 = FUNC_22(VAR_4->archive);
  break;
 }
 if (VAR_9 < VAR_1)
  FUNC_36(1, 0, "Requested filter not available");
 VAR_9 = FUNC_30(VAR_4->archive, VAR_4->format);
 if (VAR_9 != VAR_0)
  FUNC_36(1, 0, "%s", FUNC_5(VAR_4->archive));
 FUNC_29(VAR_4->archive, VAR_4->bytes_per_block);
 VAR_4->linkresolver = FUNC_3();
 FUNC_4(VAR_4->linkresolver,
     FUNC_7(VAR_4->archive));
 if (VAR_4->passphrase != ((void*)0))
  VAR_9 = FUNC_31(VAR_4->archive,
   VAR_4->passphrase);
 else
  VAR_9 = FUNC_32(VAR_4->archive, VAR_4,
   &VAR_2);
 if (VAR_9 != VAR_0)
  FUNC_36(1, 0, "%s", FUNC_5(VAR_4->archive));




 VAR_9 = FUNC_28(VAR_4->archive, VAR_4->filename);
 if (VAR_9 != VAR_0)
  FUNC_36(1, 0, "%s", FUNC_5(VAR_4->archive));
 VAR_7 = FUNC_37("-", VAR_4->option_null);
 while ((VAR_8 = FUNC_39(VAR_7)) != ((void*)0))
  FUNC_34(VAR_4, VAR_8);
 FUNC_38(VAR_7);





 VAR_5 = ((void*)0);
 FUNC_1(VAR_4->linkresolver, &VAR_5, &VAR_6);
 while (VAR_5 != ((void*)0)) {
  FUNC_33(VAR_4, VAR_5);
  FUNC_0(VAR_5);
  VAR_5 = ((void*)0);
  FUNC_1(VAR_4->linkresolver, &VAR_5, &VAR_6);
 }

 VAR_9 = FUNC_25(VAR_4->archive);
 if (VAR_4->dot)
  FUNC_35(VAR_3, "\n");
 if (VAR_9 != VAR_0)
  FUNC_36(1, 0, "%s", FUNC_5(VAR_4->archive));

 if (!VAR_4->quiet) {
  int64_t VAR_10 =
   (FUNC_6(VAR_4->archive, 0) + 511)
   / 512;
  FUNC_35(VAR_3, "%lu %s\n", (unsigned long)VAR_10,
      VAR_10 == 1 ? "block" : "blocks");
 }
 FUNC_26(VAR_4->archive);
 FUNC_2(VAR_4->linkresolver);
}
