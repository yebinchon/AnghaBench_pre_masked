
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mtree_writer {int first; int buf; int ebuf; scalar_t__ indent; scalar_t__ dironly; int keys; int set; int * mtree_entry; } ;
struct TYPE_2__ {char* archive_format_name; int archive_format; } ;
struct archive_write {char* format_name; TYPE_1__ archive; int format_finish_entry; int format_write_data; int format_close; int format_write_header; int format_options; int (* format_free ) (struct archive_write*) ;struct mtree_writer* format_data; } ;
struct archive {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct archive*,int ,int ,char const*) ;
 int FUNC_1 (TYPE_1__*,int ,char*) ;
 int FUNC_2 (int *) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (struct archive_write*) ;
 int VAR_10 ;
 int VAR_11 ;
 struct mtree_writer* FUNC_4 (int,int) ;
 int FUNC_5 (int *,int ,int) ;
 int FUNC_6 (struct mtree_writer*) ;
 int FUNC_7 (struct archive_write*) ;

__attribute__((used)) static int
FUNC_8(struct archive *VAR_12, const char *VAR_13)
{
 struct archive_write *VAR_14 = (struct archive_write *)VAR_12;
 struct mtree_writer *VAR_15;

 FUNC_0(VAR_12, VAR_4, VAR_3, VAR_13);

 if (VAR_14->format_free != ((void*)0))
  (VAR_14->format_free)(VAR_14);

 if ((VAR_15 = FUNC_4(1, sizeof(*VAR_15))) == ((void*)0)) {
  FUNC_1(&VAR_14->archive, VAR_6,
      "Can't allocate mtree data");
  return (VAR_0);
 }

 VAR_15->mtree_entry = ((void*)0);
 VAR_15->first = 1;
 FUNC_5(&(VAR_15->set), 0, sizeof(VAR_15->set));
 VAR_15->keys = VAR_5;
 VAR_15->dironly = 0;
 VAR_15->indent = 0;
 FUNC_2(&VAR_15->ebuf);
 FUNC_2(&VAR_15->buf);
 FUNC_6(VAR_15);
 VAR_14->format_data = VAR_15;
 VAR_14->format_free = FUNC_3;
 VAR_14->format_name = "mtree";
 VAR_14->format_options = VAR_11;
 VAR_14->format_write_header = VAR_10;
 VAR_14->format_close = VAR_7;
 VAR_14->format_write_data = VAR_8;
 VAR_14->format_finish_entry = VAR_9;
 VAR_14->archive.archive_format = VAR_1;
 VAR_14->archive.archive_format_name = "mtree";

 return (VAR_2);
}
