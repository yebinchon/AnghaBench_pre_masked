
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tar {int entry_padding; int entry_bytes_remaining; int pax_header; } ;
struct archive_read {int dummy; } ;
struct archive_entry {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (struct archive_read*,struct tar*,struct archive_entry*,int *) ;
 int FUNC_2 (struct archive_read*,struct tar*,int *,void const*,size_t*) ;
 int FUNC_3 (struct archive_read*,struct tar*,struct archive_entry*,size_t*) ;

__attribute__((used)) static int
FUNC_4(struct archive_read *VAR_2, struct tar *VAR_3,
    struct archive_entry *VAR_4, const void *VAR_5, size_t *VAR_6)
{
 int VAR_7, VAR_8;

 VAR_7 = FUNC_2(VAR_2, VAR_3, &(VAR_3->pax_header), VAR_5, VAR_6);
 if (VAR_7 != VAR_0)
  return (VAR_7);


 VAR_7 = FUNC_3(VAR_2, VAR_3, VAR_4, VAR_6);
 if ((VAR_7 != VAR_0) && (VAR_7 != VAR_1))
  return (VAR_7);
 VAR_8 = FUNC_1(VAR_2, VAR_3, VAR_4, &VAR_3->pax_header);
 VAR_7 = FUNC_0(VAR_7, VAR_8);
 VAR_3->entry_padding = 0x1ff & (-VAR_3->entry_bytes_remaining);
 return (VAR_7);
}
