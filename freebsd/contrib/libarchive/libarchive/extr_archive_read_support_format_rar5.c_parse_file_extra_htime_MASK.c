
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int e_unix_ns; int e_atime; int e_ctime; int e_mtime; } ;
struct rar5 {TYPE_1__ file; } ;
struct archive_read {int dummy; } ;
struct archive_entry {int dummy; } ;
typedef size_t ssize_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct archive_entry*,int ,int ) ;
 int FUNC_1 (struct archive_entry*,int ,int ) ;
 int FUNC_2 (struct archive_entry*,int ,int ) ;
 scalar_t__ FUNC_3 (struct archive_read*,size_t) ;
 int FUNC_4 (struct archive_read*,char,int *,size_t*) ;
 int FUNC_5 (struct archive_read*,int *) ;
 int FUNC_6 (struct archive_read*,size_t*,size_t*) ;

__attribute__((used)) static int FUNC_7(struct archive_read* VAR_2,
    struct archive_entry* VAR_3, struct rar5* VAR_4, ssize_t* VAR_5)
{
 char VAR_6 = 0;
 size_t VAR_7;
 size_t VAR_8;

 enum HTIME_FLAGS {
  IS_UNIX = 0x01,
  HAS_MTIME = 0x02,
  HAS_CTIME = 0x04,
  HAS_ATIME = 0x08,
  HAS_UNIX_NS = 0x10,
 };

 if(!FUNC_6(VAR_2, &VAR_7, &VAR_8))
  return VAR_0;

 *VAR_5 -= VAR_8;
 if(VAR_1 != FUNC_3(VAR_2, VAR_8)) {
  return VAR_0;
 }

 VAR_6 = VAR_7 & IS_UNIX;

 if(VAR_7 & HAS_MTIME) {
  FUNC_4(VAR_2, VAR_6, &VAR_4->file.e_mtime,
      VAR_5);
  FUNC_2(VAR_3, VAR_4->file.e_mtime, 0);
 }

 if(VAR_7 & HAS_CTIME) {
  FUNC_4(VAR_2, VAR_6, &VAR_4->file.e_ctime,
      VAR_5);
  FUNC_1(VAR_3, VAR_4->file.e_ctime, 0);
 }

 if(VAR_7 & HAS_ATIME) {
  FUNC_4(VAR_2, VAR_6, &VAR_4->file.e_atime,
      VAR_5);
  FUNC_0(VAR_3, VAR_4->file.e_atime, 0);
 }

 if(VAR_7 & HAS_UNIX_NS) {
  if(!FUNC_5(VAR_2, &VAR_4->file.e_unix_ns))
   return VAR_0;

  *VAR_5 -= 4;
 }

 return VAR_1;
}
