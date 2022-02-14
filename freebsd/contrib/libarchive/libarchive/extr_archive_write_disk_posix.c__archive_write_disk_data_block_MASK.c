
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;
struct archive_write_disk {int todo; scalar_t__ filesize; int archive; int offset; } ;
struct archive {int dummy; } ;
typedef scalar_t__ ssize_t ;
typedef int int64_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ,int ,char*) ;
 int FUNC_1 (int *,int ,char*,int ) ;
 scalar_t__ FUNC_2 (struct archive_write_disk*,void const*,size_t) ;
 scalar_t__ FUNC_3 (struct archive_write_disk*,void const*,size_t) ;

__attribute__((used)) static ssize_t
FUNC_4(struct archive *VAR_5,
    const void *VAR_6, size_t VAR_7, int64_t VAR_8)
{
 struct archive_write_disk *VAR_9 = (struct archive_write_disk *)VAR_5;
 ssize_t VAR_10;

 FUNC_0(&VAR_9->archive, VAR_3,
     VAR_1, "archive_write_data_block");

 VAR_9->offset = VAR_8;
 if (VAR_9->todo & VAR_4)
  VAR_10 = FUNC_2(VAR_9, VAR_6, VAR_7);
 else
  VAR_10 = FUNC_3(VAR_9, VAR_6, VAR_7);
 if (VAR_10 < VAR_0)
  return (VAR_10);
 if ((size_t)VAR_10 < VAR_7) {
  FUNC_1(&VAR_9->archive, 0,
      "Too much data: Truncating file at %ju bytes",
      (uintmax_t)VAR_9->filesize);
  return (VAR_2);
 }

 return (VAR_0);



}
