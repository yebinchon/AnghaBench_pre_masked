
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {scalar_t__ last_offset; size_t last_size; } ;
struct TYPE_3__ {struct data_ready* dready; } ;
struct rar5 {TYPE_2__ file; TYPE_1__ cstate; scalar_t__ skip_mode; } ;
struct data_ready {int used; size_t size; int const* buf; scalar_t__ offset; } ;
struct archive_read {int archive; } ;
typedef scalar_t__ int64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,char*) ;
 int FUNC_1 (struct data_ready*) ;
 int FUNC_2 (struct rar5*,int const*,size_t) ;

__attribute__((used)) static int FUNC_3(struct archive_read* VAR_3, struct rar5* VAR_4,
    const uint8_t* VAR_5, size_t VAR_6, int64_t VAR_7)
{
 int VAR_8;







 if(VAR_4->skip_mode)
  return VAR_2;


 if(VAR_7 != VAR_4->file.last_offset + VAR_4->file.last_size) {
  FUNC_0(&VAR_3->archive, VAR_0,
      "Sanity check error: output stream is not continuous");
  return VAR_1;
 }

 for(VAR_8 = 0; VAR_8 < FUNC_1(VAR_4->cstate.dready); VAR_8++) {
  struct data_ready* VAR_9 = &VAR_4->cstate.dready[VAR_8];
  if(!VAR_9->used) {
   VAR_9->used = 1;
   VAR_9->buf = VAR_5;
   VAR_9->size = VAR_6;
   VAR_9->offset = VAR_7;


   VAR_4->file.last_offset = VAR_7;
   VAR_4->file.last_size = VAR_6;



   FUNC_2(VAR_4, VAR_9->buf, VAR_9->size);

   return VAR_2;
  }
 }






 FUNC_0(&VAR_3->archive, VAR_0,
     "Error: premature end of data_ready stack");
 return VAR_1;
}
