
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_write {int archive; scalar_t__ format_data; } ;
struct ar_w {size_t entry_bytes_remaining; scalar_t__ is_strtab; int has_strtab; char* strtab; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct archive_write*,void const*,size_t) ;
 int FUNC_1 (int *,int ,char*) ;
 scalar_t__ FUNC_2 (size_t) ;
 int FUNC_3 (char*,void const*,size_t) ;

__attribute__((used)) static ssize_t
FUNC_4(struct archive_write *VAR_5, const void *VAR_6, size_t VAR_7)
{
 struct ar_w *VAR_8;
 int VAR_9;

 VAR_8 = (struct ar_w *)VAR_5->format_data;
 if (VAR_7 > VAR_8->entry_bytes_remaining)
  VAR_7 = (size_t)VAR_8->entry_bytes_remaining;

 if (VAR_8->is_strtab > 0) {
  if (VAR_8->has_strtab > 0) {
   FUNC_1(&VAR_5->archive, VAR_3,
       "More than one string tables exist");
   return (VAR_2);
  }

  VAR_8->strtab = (char *)FUNC_2(VAR_7 + 1);
  if (VAR_8->strtab == ((void*)0)) {
   FUNC_1(&VAR_5->archive, VAR_4,
       "Can't allocate strtab buffer");
   return (VAR_0);
  }
  FUNC_3(VAR_8->strtab, VAR_6, VAR_7);
  VAR_8->strtab[VAR_7] = '\0';
  VAR_8->has_strtab = 1;
 }

 VAR_9 = FUNC_0(VAR_5, VAR_6, VAR_7);
 if (VAR_9 != VAR_1)
  return (VAR_9);

 VAR_8->entry_bytes_remaining -= VAR_7;
 return (VAR_7);
}
