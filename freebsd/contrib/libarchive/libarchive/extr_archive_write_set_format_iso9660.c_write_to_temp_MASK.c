
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iso9660 {int temp_fd; } ;
struct archive_write {int archive; struct iso9660* format_data; } ;
typedef scalar_t__ ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,char*) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ,unsigned char const*,size_t) ;

__attribute__((used)) static int
FUNC_2(struct archive_write *VAR_3, const void *VAR_4, size_t VAR_5)
{
 struct iso9660 *VAR_6 = VAR_3->format_data;
 ssize_t VAR_7;
 const unsigned char *VAR_8;

 VAR_8 = (const unsigned char *)VAR_4;
 while (VAR_5) {
  VAR_7 = FUNC_1(VAR_6->temp_fd, VAR_8, VAR_5);
  if (VAR_7 < 0) {
   FUNC_0(&VAR_3->archive, VAR_2,
       "Can't write to temporary file");
   return (VAR_0);
  }
  VAR_5 -= VAR_7;
  VAR_8 += VAR_7;
 }
 return (VAR_1);
}
