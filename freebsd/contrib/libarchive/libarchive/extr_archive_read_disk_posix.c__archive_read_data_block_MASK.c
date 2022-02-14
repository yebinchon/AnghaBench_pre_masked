
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int noatime; } ;
struct tree {int entry_eof; scalar_t__ entry_remaining_bytes; scalar_t__ entry_fd; int nlink; int flags; void* entry_buff; size_t entry_buff_size; scalar_t__ entry_total; TYPE_3__ restore_time; TYPE_2__* current_sparse; TYPE_1__* current_filesystem; } ;
struct TYPE_8__ {void* state; } ;
struct archive_read_disk {TYPE_4__ archive; struct tree* tree; } ;
struct archive {int dummy; } ;
typedef size_t ssize_t ;
typedef int off_t ;
typedef size_t int64_t ;
struct TYPE_6__ {size_t length; scalar_t__ offset; } ;
struct TYPE_5__ {int xfer_align; void* buff; size_t buff_size; int * allocation_ptr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct archive*,int ,int ,char*) ;
 int FUNC_2 (TYPE_4__*,scalar_t__,char*,...) ;
 int FUNC_3 (scalar_t__,struct tree*,TYPE_3__*) ;
 scalar_t__ VAR_14 ;
 scalar_t__ FUNC_4 (scalar_t__,int ,int ) ;
 int VAR_15 ;
 scalar_t__ FUNC_5 (struct tree*,int ,int) ;
 size_t FUNC_6 (scalar_t__,void*,size_t) ;
 int FUNC_7 (struct archive_read_disk*) ;
 int FUNC_8 (struct tree*) ;
 int FUNC_9 (struct tree*) ;
 int FUNC_10 (struct tree*) ;

__attribute__((used)) static int
FUNC_11(struct archive *VAR_16, const void **VAR_17,
    size_t *VAR_18, int64_t *VAR_19)
{
 struct archive_read_disk *VAR_20 = (struct archive_read_disk *)VAR_16;
 struct tree *VAR_21 = VAR_20->tree;
 int VAR_22;
 ssize_t VAR_23;
 size_t VAR_24;
 int VAR_25 = 0;

 FUNC_1(VAR_16, VAR_4, VAR_5,
     "archive_read_data_block");

 if (VAR_21->entry_eof || VAR_21->entry_remaining_bytes <= 0) {
  VAR_22 = VAR_0;
  goto abort_read_data;
 }




 if (VAR_21->entry_fd < 0) {
  int VAR_26 = VAR_12 | VAR_8 | VAR_9;
   VAR_21->entry_fd = FUNC_5(VAR_21,
       FUNC_8(VAR_21), VAR_26);
   FUNC_0(VAR_21->entry_fd);
  if (VAR_21->entry_fd < 0) {
   FUNC_2(&VAR_20->archive, VAR_14,
       "Couldn't open %s", FUNC_9(VAR_21));
   VAR_22 = VAR_1;
   FUNC_10(VAR_21);
   goto abort_read_data;
  }
  FUNC_10(VAR_21);
 }




 if (VAR_21->current_filesystem->allocation_ptr == ((void*)0)) {
  VAR_22 = FUNC_7(VAR_20);
  if (VAR_22 != VAR_3) {
   VAR_20->archive.state = VAR_6;
   goto abort_read_data;
  }
 }
 VAR_21->entry_buff = VAR_21->current_filesystem->buff;
 VAR_21->entry_buff_size = VAR_21->current_filesystem->buff_size;

 VAR_24 = VAR_21->entry_buff_size;
 if ((int64_t)VAR_24 > VAR_21->current_sparse->length)
  VAR_24 = VAR_21->current_sparse->length;

 if (VAR_21->current_sparse->length == 0)
  VAR_25 = 1;





 if (VAR_21->current_sparse->offset > VAR_21->entry_total) {
  if (FUNC_4(VAR_21->entry_fd,
      (off_t)VAR_21->current_sparse->offset, VAR_13) < 0) {
   FUNC_2(&VAR_20->archive, VAR_14, "Seek error");
   VAR_22 = VAR_2;
   VAR_20->archive.state = VAR_6;
   goto abort_read_data;
  }
  VAR_23 = VAR_21->current_sparse->offset - VAR_21->entry_total;
  VAR_21->entry_remaining_bytes -= VAR_23;
  VAR_21->entry_total += VAR_23;
 }




 if (VAR_24 > 0) {
  VAR_23 = FUNC_6(VAR_21->entry_fd, VAR_21->entry_buff, VAR_24);
  if (VAR_23 < 0) {
   FUNC_2(&VAR_20->archive, VAR_14, "Read error");
   VAR_22 = VAR_2;
   VAR_20->archive.state = VAR_6;
   goto abort_read_data;
  }
 } else
  VAR_23 = 0;




 if (VAR_23 == 0 && !VAR_25) {

  VAR_21->entry_eof = 1;
  VAR_22 = VAR_0;
  goto abort_read_data;
 }
 *VAR_17 = VAR_21->entry_buff;
 *VAR_18 = VAR_23;
 *VAR_19 = VAR_21->entry_total;
 VAR_21->entry_total += VAR_23;
 VAR_21->entry_remaining_bytes -= VAR_23;
 if (VAR_21->entry_remaining_bytes == 0) {

  FUNC_3(VAR_21->entry_fd, VAR_21, &VAR_21->restore_time);
  VAR_21->entry_fd = -1;
  VAR_21->entry_eof = 1;
 }
 VAR_21->current_sparse->offset += VAR_23;
 VAR_21->current_sparse->length -= VAR_23;
 if (VAR_21->current_sparse->length == 0 && !VAR_21->entry_eof)
  VAR_21->current_sparse++;
 return (VAR_3);

abort_read_data:
 *VAR_17 = ((void*)0);
 *VAR_18 = 0;
 *VAR_19 = VAR_21->entry_total;
 if (VAR_21->entry_fd >= 0) {

  FUNC_3(VAR_21->entry_fd, VAR_21, &VAR_21->restore_time);
  VAR_21->entry_fd = -1;
 }
 return (VAR_22);
}
