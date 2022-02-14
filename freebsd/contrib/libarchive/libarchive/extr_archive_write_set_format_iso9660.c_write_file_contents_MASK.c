
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iso9660 {int temp_fd; } ;
struct archive_write {int archive; struct iso9660* format_data; } ;
typedef scalar_t__ ssize_t ;
typedef int intmax_t ;
typedef scalar_t__ int64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,char*,int ) ;
 int VAR_3 ;
 int FUNC_1 (int ,scalar_t__,int ) ;
 scalar_t__ FUNC_2 (int ,unsigned char*,size_t) ;
 unsigned char* FUNC_3 (struct archive_write*) ;
 int FUNC_4 (struct archive_write*,scalar_t__) ;
 size_t FUNC_5 (struct archive_write*) ;

__attribute__((used)) static int
FUNC_6(struct archive_write *VAR_4, int64_t VAR_5, int64_t VAR_6)
{
 struct iso9660 *VAR_7 = VAR_4->format_data;
 int VAR_8;

 FUNC_1(VAR_7->temp_fd, VAR_5, VAR_2);

 while (VAR_6) {
  size_t VAR_9;
  ssize_t VAR_10;
  unsigned char *VAR_11;

  VAR_11 = FUNC_3(VAR_4);
  VAR_9 = FUNC_5(VAR_4);
  if (VAR_9 > (size_t)VAR_6)
   VAR_9 = (size_t)VAR_6;
  VAR_10 = FUNC_2(VAR_7->temp_fd, VAR_11, VAR_9);
  if (VAR_10 <= 0) {
   FUNC_0(&VAR_4->archive, VAR_3,
       "Can't read temporary file(%jd)", (intmax_t)VAR_10);
   return (VAR_0);
  }
  VAR_6 -= VAR_10;
  VAR_8 = FUNC_4(VAR_4, VAR_10);
  if (VAR_8 < 0)
   return (VAR_8);
 }
 return (VAR_1);
}
