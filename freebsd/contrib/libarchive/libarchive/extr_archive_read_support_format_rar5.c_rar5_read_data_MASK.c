
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ dir; scalar_t__ unpacked_size; int eof; scalar_t__ bytes_remaining; } ;
struct TYPE_3__ {scalar_t__ last_write_ptr; } ;
struct rar5 {TYPE_2__ file; TYPE_1__ cstate; int skip_mode; } ;
struct archive_read {int archive; } ;
typedef int int64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int ,char*) ;
 int FUNC_1 (struct archive_read*,struct rar5*,void const**,size_t*,int *) ;
 struct rar5* FUNC_2 (struct archive_read*) ;
 int FUNC_3 (struct rar5*,void const**,size_t*,int *) ;
 int FUNC_4 (struct archive_read*) ;

__attribute__((used)) static int FUNC_5(struct archive_read *VAR_6, const void **VAR_7,
    size_t *VAR_8, int64_t *VAR_9) {
 int VAR_10;
 struct rar5* VAR_11 = FUNC_2(VAR_6);

 if(VAR_11->file.dir > 0) {




  FUNC_0(&VAR_6->archive, VAR_1,
      "Can't decompress an entry marked as a directory");
  return VAR_3;
 }

 if(!VAR_11->skip_mode && (VAR_11->cstate.last_write_ptr > VAR_11->file.unpacked_size)) {
  FUNC_0(&VAR_6->archive, VAR_2,
      "Unpacker has written too many bytes");
  return VAR_4;
 }

 VAR_10 = FUNC_3(VAR_11, VAR_7, VAR_8, VAR_9);
 if(VAR_10 == VAR_5) {
  return VAR_10;
 }

 if(VAR_11->file.eof == 1) {
  return VAR_0;
 }

 VAR_10 = FUNC_1(VAR_6, VAR_11, VAR_7, VAR_8, VAR_9);
 if(VAR_10 != VAR_5) {
  return VAR_10;
 }

 if(VAR_11->file.bytes_remaining == 0 &&
   VAR_11->cstate.last_write_ptr == VAR_11->file.unpacked_size)
 {
  VAR_11->file.eof = 1;
  return FUNC_4(VAR_6);
 }

 return VAR_5;
}
