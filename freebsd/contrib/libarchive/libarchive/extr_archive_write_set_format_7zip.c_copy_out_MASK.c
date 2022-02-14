
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct archive_write {int archive; scalar_t__ format_data; } ;
struct _7zip {scalar_t__ temp_offset; scalar_t__ wbuff_remaining; unsigned char* wbuff; int temp_fd; } ;
typedef scalar_t__ ssize_t ;
typedef int intmax_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,char*,...) ;
 int VAR_3 ;
 int FUNC_1 (struct archive_write*) ;
 scalar_t__ FUNC_2 (int ,scalar_t__,int ) ;
 scalar_t__ FUNC_3 (int ,unsigned char*,size_t) ;

__attribute__((used)) static int
FUNC_4(struct archive_write *VAR_4, uint64_t VAR_5, uint64_t VAR_6)
{
 struct _7zip *VAR_7;
 int VAR_8;

 VAR_7 = (struct _7zip *)VAR_4->format_data;
 if (VAR_7->temp_offset > 0 &&
     FUNC_2(VAR_7->temp_fd, VAR_5, VAR_2) < 0) {
  FUNC_0(&(VAR_4->archive), VAR_3, "lseek failed");
  return (VAR_0);
 }
 while (VAR_6) {
  size_t VAR_9;
  ssize_t VAR_10;
  unsigned char *VAR_11;

  if (VAR_6 > VAR_7->wbuff_remaining)
   VAR_9 = VAR_7->wbuff_remaining;
  else
   VAR_9 = (size_t)VAR_6;
  VAR_11 = VAR_7->wbuff + (sizeof(VAR_7->wbuff) - VAR_7->wbuff_remaining);
  VAR_10 = FUNC_3(VAR_7->temp_fd, VAR_11, VAR_9);
  if (VAR_10 < 0) {
   FUNC_0(&(VAR_4->archive), VAR_3,
       "Can't read temporary file(%jd)",
       (intmax_t)VAR_10);
   return (VAR_0);
  }
  if (VAR_10 == 0) {
   FUNC_0(&(VAR_4->archive), 0,
       "Truncated 7-Zip archive");
   return (VAR_0);
  }
  VAR_7->wbuff_remaining -= VAR_10;
  VAR_6 -= VAR_10;
  if (VAR_7->wbuff_remaining == 0) {
   VAR_8 = FUNC_1(VAR_4);
   if (VAR_8 != VAR_1)
    return (VAR_8);
  }
 }
 return (VAR_1);
}
