
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef void* uint64_t ;
typedef int uint32_t ;
struct TYPE_7__ {int header_size; int log2_bs; int uncompressed_size; } ;
struct isofile {TYPE_2__ zisofs; int entry; } ;
struct TYPE_8__ {int detect_magic; int making; int block_pointers_cnt; size_t block_pointers_allocated; int remaining; int allzero; void* total_size; void* block_offset; int * block_pointers; scalar_t__ block_pointers_idx; scalar_t__ magic_cnt; } ;
struct TYPE_6__ {int zisofs; int rr; } ;
struct iso9660 {TYPE_5__* cur_file; TYPE_3__ zisofs; TYPE_1__ opt; } ;
struct archive_write {int archive; struct iso9660* format_data; } ;
struct TYPE_10__ {TYPE_4__* cur_content; } ;
struct TYPE_9__ {void* size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int ,char*) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (size_t) ;
 int FUNC_5 (struct archive_write*,size_t) ;
 int FUNC_6 (struct archive_write*) ;

__attribute__((used)) static int
FUNC_7(struct archive_write *VAR_8, struct isofile *VAR_9)
{
 struct iso9660 *VAR_10 = VAR_8->format_data;






 VAR_10->zisofs.detect_magic = 0;
 VAR_10->zisofs.making = 0;

 if (!VAR_10->opt.rr || !VAR_10->opt.zisofs)
  return (VAR_1);

 if (FUNC_0(VAR_9->entry) >= 24 &&
     FUNC_0(VAR_9->entry) < VAR_4) {

  VAR_10->zisofs.detect_magic = 1;
  VAR_10->zisofs.magic_cnt = 0;
 }
 if (!VAR_10->zisofs.detect_magic)
  return (VAR_1);
 return (VAR_1);
}
