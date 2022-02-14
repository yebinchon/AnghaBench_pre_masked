
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tar {TYPE_1__* sparse_list; int entry_offset; } ;
struct gnu_sparse {int dummy; } ;
struct archive_read {int archive; } ;
struct archive_entry_header_gnutar {scalar_t__* isextended; struct gnu_sparse* sparse; } ;
typedef int ssize_t ;
struct TYPE_2__ {int offset; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 void* FUNC_0 (struct archive_read*,int,int*) ;
 int FUNC_1 (int *,int ,char*) ;
 scalar_t__ FUNC_2 (struct archive_read*,struct tar*,struct gnu_sparse*,int) ;
 int FUNC_3 (struct archive_read*,size_t*) ;

__attribute__((used)) static int
FUNC_4(struct archive_read *VAR_3, struct tar *VAR_4,
    const struct archive_entry_header_gnutar *VAR_5, size_t *VAR_6)
{
 ssize_t VAR_7;
 const void *VAR_8;
 struct extended {
  struct gnu_sparse sparse[21];
  char isextended[1];
  char padding[7];
 };
 const struct extended *VAR_9;

 if (FUNC_2(VAR_3, VAR_4, VAR_5->sparse, 4) != VAR_2)
  return (VAR_1);
 if (VAR_5->isextended[0] == 0)
  return (VAR_2);

 do {
  FUNC_3(VAR_3, VAR_6);
  VAR_8 = FUNC_0(VAR_3, 512, &VAR_7);
  if (VAR_7 < 0)
   return (VAR_1);
  if (VAR_7 < 512) {
   FUNC_1(&VAR_3->archive, VAR_0,
       "Truncated tar archive "
       "detected while reading sparse file data");
   return (VAR_1);
  }
  *VAR_6 = 512;
  VAR_9 = (const struct extended *)VAR_8;
  if (FUNC_2(VAR_3, VAR_4, VAR_9->sparse, 21) != VAR_2)
   return (VAR_1);
 } while (VAR_9->isextended[0] != 0);
 if (VAR_4->sparse_list != ((void*)0))
  VAR_4->entry_offset = VAR_4->sparse_list->offset;
 return (VAR_2);
}
