
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tree {int entry_fd; int entry_eof; int entry_remaining_bytes; int nlink; int entry_total; int restore_time; } ;
struct TYPE_2__ {int state; } ;
struct archive_read_disk {TYPE_1__ archive; struct tree* tree; } ;
struct archive_entry {int dummy; } ;
struct archive {int dummy; } ;


 int VAR_0 ;



 int VAR_1 ;

 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct archive*,int ,int,char*) ;
 int FUNC_2 (struct archive_entry*) ;
 int FUNC_3 (struct archive_entry*,int ) ;
 int FUNC_4 (struct archive_entry*) ;
 int FUNC_5 (struct archive_entry*) ;
 int FUNC_6 (struct archive_entry*) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int,struct tree*,int *) ;
 int FUNC_9 (struct archive_read_disk*,struct tree*,struct archive_entry*) ;
 int const FUNC_10 (struct archive_read_disk*,struct archive_entry*) ;
 int FUNC_11 (struct tree*) ;
 int FUNC_12 (struct tree*) ;

__attribute__((used)) static int
FUNC_13(struct archive *VAR_6, struct archive_entry *VAR_7)
{
 struct archive_read_disk *VAR_8 = (struct archive_read_disk *)VAR_6;
 struct tree *VAR_9;
 int VAR_10;

 FUNC_1(VAR_6, VAR_1,
     VAR_5 | VAR_2,
     "archive_read_next_header2");

 VAR_9 = VAR_8->tree;
 if (VAR_9->entry_fd >= 0) {
  FUNC_8(VAR_9->entry_fd, VAR_9, &VAR_9->restore_time);
  VAR_9->entry_fd = -1;
 }

 FUNC_2(VAR_7);

 for (;;) {
  VAR_10 = FUNC_9(VAR_8, VAR_9, VAR_7);
  if (VAR_9->entry_fd >= 0) {
   FUNC_7(VAR_9->entry_fd);
   VAR_9->entry_fd = -1;
  }

  if (VAR_10 == 129) {
   FUNC_2(VAR_7);
   continue;
  }
  break;
 }


 FUNC_12(VAR_9);






 switch (VAR_10) {
 case 132:
  VAR_8->archive.state = VAR_3;
  break;
 case 130:
 case 128:

  FUNC_3(VAR_7, FUNC_11(VAR_9));
  VAR_9->entry_total = 0;
  if (FUNC_4(VAR_7) == VAR_0) {
   VAR_9->nlink = FUNC_5(VAR_7);
   VAR_9->entry_remaining_bytes = FUNC_6(VAR_7);
   VAR_9->entry_eof = (VAR_9->entry_remaining_bytes == 0)? 1: 0;
   if (!VAR_9->entry_eof &&
       FUNC_10(VAR_8, VAR_7) != 130)
    return (131);
  } else {
   VAR_9->entry_remaining_bytes = 0;
   VAR_9->entry_eof = 1;
  }
  VAR_8->archive.state = VAR_2;
  break;
 case 129:
  break;
 case 131:
  VAR_8->archive.state = VAR_4;
  break;
 }

 FUNC_0(&VAR_8->archive);
 return (VAR_10);
}
