
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tree {int max_filesystem_id; int current_filesystem_id; size_t allocated_filesystem; struct filesystem* current_filesystem; struct filesystem* filesystem_table; } ;
struct filesystem {scalar_t__ dev; int * buff; int * allocation_ptr; } ;
struct archive_read_disk {int archive; struct tree* tree; } ;
typedef scalar_t__ int64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,char*) ;
 void* FUNC_1 (struct filesystem*,size_t) ;
 int FUNC_2 (struct archive_read_disk*) ;

__attribute__((used)) static int
FUNC_3(struct archive_read_disk *VAR_3, int64_t VAR_4)
{
 struct tree *VAR_5 = VAR_3->tree;
 int VAR_6, VAR_7;

 if (VAR_5->current_filesystem != ((void*)0) &&
     VAR_5->current_filesystem->dev == VAR_4)
  return (VAR_1);

 for (VAR_6 = 0; VAR_6 < VAR_5->max_filesystem_id; VAR_6++) {
  if (VAR_5->filesystem_table[VAR_6].dev == VAR_4) {

   VAR_5->current_filesystem_id = VAR_6;
   VAR_5->current_filesystem = &(VAR_5->filesystem_table[VAR_6]);
   return (VAR_1);
  }
 }




 VAR_7 = VAR_5->max_filesystem_id++;
 if (VAR_5->max_filesystem_id > VAR_5->allocated_filesystem) {
  size_t VAR_8;
  void *VAR_9;

  VAR_8 = VAR_5->max_filesystem_id * 2;
  VAR_9 = FUNC_1(VAR_5->filesystem_table,
          VAR_8 * sizeof(*VAR_5->filesystem_table));
  if (VAR_9 == ((void*)0)) {
   FUNC_0(&VAR_3->archive, VAR_2,
       "Can't allocate tar data");
   return (VAR_0);
  }
  VAR_5->filesystem_table = (struct filesystem *)VAR_9;
  VAR_5->allocated_filesystem = VAR_8;
 }
 VAR_5->current_filesystem_id = VAR_7;
 VAR_5->current_filesystem = &(VAR_5->filesystem_table[VAR_7]);
 VAR_5->current_filesystem->dev = VAR_4;
 VAR_5->current_filesystem->allocation_ptr = ((void*)0);
 VAR_5->current_filesystem->buff = ((void*)0);



 return (FUNC_2(VAR_3));
}
