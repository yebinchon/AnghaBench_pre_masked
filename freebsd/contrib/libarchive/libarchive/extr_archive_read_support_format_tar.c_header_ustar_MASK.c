
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_string {char* s; } ;
struct tar {int entry_padding; int entry_bytes_remaining; int sconv; struct archive_string entry_pathname; } ;
struct archive_read {int dummy; } ;
struct archive_entry_header_ustar {char* typeflag; int rdevminor; int rdevmajor; int gname; int uname; scalar_t__* name; scalar_t__* prefix; } ;
struct archive_entry {int dummy; } ;
typedef int dev_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct archive_entry*,int ,int,int ) ;
 scalar_t__ FUNC_1 (struct archive_entry*,char*,int,int ) ;
 scalar_t__ FUNC_2 (struct archive_entry*,int ,int,int ) ;
 int FUNC_3 (struct archive_entry*,int ) ;
 int FUNC_4 (struct archive_entry*,int ) ;
 int FUNC_5 (struct archive_string*,char) ;
 int FUNC_6 (struct archive_string*) ;
 int FUNC_7 (struct archive_string*,scalar_t__*,int) ;
 int FUNC_8 (struct archive_string*,scalar_t__*,int) ;
 int FUNC_9 (struct archive_read*,struct tar*,struct archive_entry*,void const*) ;
 int FUNC_10 (struct archive_read*,int ,char*) ;
 scalar_t__ FUNC_11 (int ,int) ;

__attribute__((used)) static int
FUNC_12(struct archive_read *VAR_2, struct tar *VAR_3,
    struct archive_entry *VAR_4, const void *VAR_5)
{
 const struct archive_entry_header_ustar *VAR_6;
 struct archive_string *VAR_7;
 int VAR_8 = VAR_1, VAR_9;

 VAR_6 = (const struct archive_entry_header_ustar *)VAR_5;


 VAR_7 = &(VAR_3->entry_pathname);
 if (VAR_6->prefix[0]) {
  FUNC_8(VAR_7, VAR_6->prefix, sizeof(VAR_6->prefix));
  if (VAR_7->s[FUNC_6(VAR_7) - 1] != '/')
   FUNC_5(VAR_7, '/');
  FUNC_7(VAR_7, VAR_6->name, sizeof(VAR_6->name));
 } else {
  FUNC_8(VAR_7, VAR_6->name, sizeof(VAR_6->name));
 }
 if (FUNC_1(VAR_4, VAR_7->s, FUNC_6(VAR_7),
     VAR_3->sconv) != 0) {
  VAR_8 = FUNC_10(VAR_2, VAR_3->sconv, "Pathname");
  if (VAR_8 == VAR_0)
   return (VAR_8);
 }


 VAR_9 = FUNC_9(VAR_2, VAR_3, VAR_4, VAR_5);
 if (VAR_9 == VAR_0)
  return (VAR_9);
 if (VAR_9 < VAR_8)
  VAR_8 = VAR_9;


 if (FUNC_2(VAR_4,
     VAR_6->uname, sizeof(VAR_6->uname), VAR_3->sconv) != 0) {
  VAR_8 = FUNC_10(VAR_2, VAR_3->sconv, "Uname");
  if (VAR_8 == VAR_0)
   return (VAR_8);
 }

 if (FUNC_0(VAR_4,
     VAR_6->gname, sizeof(VAR_6->gname), VAR_3->sconv) != 0) {
  VAR_8 = FUNC_10(VAR_2, VAR_3->sconv, "Gname");
  if (VAR_8 == VAR_0)
   return (VAR_8);
 }


 if (VAR_6->typeflag[0] == '3' || VAR_6->typeflag[0] == '4') {
  FUNC_3(VAR_4, (dev_t)
      FUNC_11(VAR_6->rdevmajor, sizeof(VAR_6->rdevmajor)));
  FUNC_4(VAR_4, (dev_t)
      FUNC_11(VAR_6->rdevminor, sizeof(VAR_6->rdevminor)));
 }

 VAR_3->entry_padding = 0x1ff & (-VAR_3->entry_bytes_remaining);

 return (VAR_8);
}
