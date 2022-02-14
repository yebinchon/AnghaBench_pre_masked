
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint64_t ;
struct archive_write_disk {scalar_t__ filesize; scalar_t__ fd; int flags; size_t offset; scalar_t__ fd_offset; int total_bytes_written; int archive; TYPE_1__* pst; } ;
typedef int ssize_t ;
typedef scalar_t__ int64_t ;
struct TYPE_2__ {int st_blksize; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ,char*) ;
 int VAR_5 ;
 int FUNC_1 (struct archive_write_disk*) ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__,int ) ;
 int FUNC_3 (scalar_t__,char const*,int) ;

__attribute__((used)) static ssize_t
FUNC_4(struct archive_write_disk *VAR_6, const char *VAR_7, size_t VAR_8)
{
 uint64_t VAR_9 = VAR_8;
 ssize_t VAR_10 = 0;
 ssize_t VAR_11 = 0, VAR_12;

 if (VAR_8 == 0)
  return (VAR_2);

 if (VAR_6->filesize == 0 || VAR_6->fd < 0) {
  FUNC_0(&VAR_6->archive, 0,
      "Attempt to write to an empty file");
  return (VAR_3);
 }

 if (VAR_6->flags & VAR_0) {
  VAR_11 = 16*1024;

 }


 if (VAR_6->filesize >= 0 && (int64_t)(VAR_6->offset + VAR_8) > VAR_6->filesize)
  VAR_9 = VAR_8 = (size_t)(VAR_6->filesize - VAR_6->offset);


 while (VAR_8 > 0) {
  if (VAR_11 == 0) {
   VAR_12 = VAR_8;
  } else {

   const char *VAR_13, *VAR_14;
   int64_t VAR_15;


   for (VAR_13 = VAR_7, VAR_14 = VAR_7 + VAR_8; VAR_13 < VAR_14; ++VAR_13) {
    if (*VAR_13 != '\0')
     break;
   }
   VAR_6->offset += VAR_13 - VAR_7;
   VAR_8 -= VAR_13 - VAR_7;
   VAR_7 = VAR_13;
   if (VAR_8 == 0)
    break;


   VAR_15
       = (VAR_6->offset / VAR_11 + 1) * VAR_11;



   VAR_12 = VAR_8;
   if (VAR_6->offset + VAR_12 > VAR_15)
    VAR_12 = VAR_15 - VAR_6->offset;
  }

  if (VAR_6->offset != VAR_6->fd_offset) {
   if (FUNC_2(VAR_6->fd, VAR_6->offset, VAR_4) < 0) {
    FUNC_0(&VAR_6->archive, VAR_5,
        "Seek failed");
    return (VAR_1);
   }
   VAR_6->fd_offset = VAR_6->offset;
  }
  VAR_10 = FUNC_3(VAR_6->fd, VAR_7, VAR_12);
  if (VAR_10 < 0) {
   FUNC_0(&VAR_6->archive, VAR_5, "Write failed");
   return (VAR_3);
  }
  VAR_7 += VAR_10;
  VAR_8 -= VAR_10;
  VAR_6->total_bytes_written += VAR_10;
  VAR_6->offset += VAR_10;
  VAR_6->fd_offset = VAR_6->offset;
 }
 return (VAR_9 - VAR_8);
}
