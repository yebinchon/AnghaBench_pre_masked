
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_write {int archive; scalar_t__ format_data; } ;
struct _7zip {int temp_fd; scalar_t__ temp_offset; } ;
typedef scalar_t__ ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,char*) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int,unsigned char const*,size_t) ;

__attribute__((used)) static int
FUNC_3(struct archive_write *VAR_3, const void *VAR_4, size_t VAR_5)
{
 struct _7zip *VAR_6;
 const unsigned char *VAR_7;
 ssize_t VAR_8;

 VAR_6 = (struct _7zip *)VAR_3->format_data;




 if (VAR_6->temp_fd == -1) {
  VAR_6->temp_offset = 0;
  VAR_6->temp_fd = FUNC_0(((void*)0));
  if (VAR_6->temp_fd < 0) {
   FUNC_1(&VAR_3->archive, VAR_2,
       "Couldn't create temporary file");
   return (VAR_0);
  }
 }

 VAR_7 = (const unsigned char *)VAR_4;
 while (VAR_5) {
  VAR_8 = FUNC_2(VAR_6->temp_fd, VAR_7, VAR_5);
  if (VAR_8 < 0) {
   FUNC_1(&(VAR_3->archive), VAR_2,
       "fwrite function failed");
   return (VAR_0);
  }
  VAR_5 -= VAR_8;
  VAR_7 += VAR_8;
  VAR_6->temp_offset += VAR_8;
 }
 return (VAR_1);
}
