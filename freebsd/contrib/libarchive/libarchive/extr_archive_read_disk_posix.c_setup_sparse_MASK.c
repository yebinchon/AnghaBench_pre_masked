
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tree {int sparse_count; int sparse_list_size; TYPE_1__* sparse_list; TYPE_1__* current_sparse; } ;
struct TYPE_5__ {int state; } ;
struct archive_read_disk {TYPE_3__ archive; struct tree* tree; } ;
struct archive_entry {int dummy; } ;
typedef void* int64_t ;
struct TYPE_4__ {void* length; void* offset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (struct archive_entry*) ;
 int FUNC_1 (struct archive_entry*,void**,void**) ;
 int FUNC_2 (struct archive_entry*) ;
 int FUNC_3 (TYPE_3__*,int ,char*) ;
 int FUNC_4 (TYPE_1__*) ;
 TYPE_1__* FUNC_5 (int) ;

__attribute__((used)) static int
FUNC_6(struct archive_read_disk *VAR_4, struct archive_entry *VAR_5)
{
 struct tree *VAR_6 = VAR_4->tree;
 int64_t VAR_7, VAR_8;
 int VAR_9;

 VAR_6->sparse_count = FUNC_2(VAR_5);
 if (VAR_6->sparse_count+1 > VAR_6->sparse_list_size) {
  FUNC_4(VAR_6->sparse_list);
  VAR_6->sparse_list_size = VAR_6->sparse_count + 1;
  VAR_6->sparse_list = FUNC_5(sizeof(VAR_6->sparse_list[0]) *
      VAR_6->sparse_list_size);
  if (VAR_6->sparse_list == ((void*)0)) {
   VAR_6->sparse_list_size = 0;
   FUNC_3(&VAR_4->archive, VAR_3,
       "Can't allocate data");
   VAR_4->archive.state = VAR_2;
   return (VAR_0);
  }
 }
 for (VAR_9 = 0; VAR_9 < VAR_6->sparse_count; VAR_9++) {
  FUNC_1(VAR_5, &VAR_8, &VAR_7);
  VAR_6->sparse_list[VAR_9].offset = VAR_8;
  VAR_6->sparse_list[VAR_9].length = VAR_7;
 }
 if (VAR_9 == 0) {
  VAR_6->sparse_list[VAR_9].offset = 0;
  VAR_6->sparse_list[VAR_9].length = FUNC_0(VAR_5);
 } else {
  VAR_6->sparse_list[VAR_9].offset = FUNC_0(VAR_5);
  VAR_6->sparse_list[VAR_9].length = 0;
 }
 VAR_6->current_sparse = VAR_6->sparse_list;

 return (VAR_1);
}
