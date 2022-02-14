
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_write {scalar_t__ format_data; } ;
struct _7zip {size_t entry_bytes_remaining; int entry_crc32; int * cur_file; } ;
typedef scalar_t__ ssize_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct archive_write*,void const*,size_t,int ) ;
 int FUNC_1 (int ,void const*,unsigned int) ;

__attribute__((used)) static ssize_t
FUNC_2(struct archive_write *VAR_1, const void *VAR_2, size_t VAR_3)
{
 struct _7zip *VAR_4;
 ssize_t VAR_5;

 VAR_4 = (struct _7zip *)VAR_1->format_data;

 if (VAR_3 > VAR_4->entry_bytes_remaining)
  VAR_3 = (size_t)VAR_4->entry_bytes_remaining;
 if (VAR_3 == 0 || VAR_4->cur_file == ((void*)0))
  return (0);
 VAR_5 = FUNC_0(VAR_1, VAR_2, VAR_3, VAR_0);
 if (VAR_5 < 0)
  return (VAR_5);
 VAR_4->entry_crc32 = FUNC_1(VAR_4->entry_crc32, VAR_2, (unsigned)VAR_5);
 VAR_4->entry_bytes_remaining -= VAR_5;
 return (VAR_5);
}
