
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int const uint8_t ;
struct TYPE_8__ {scalar_t__ switch_multivolume; scalar_t__ cur_block_size; scalar_t__ block_parsing_finished; int const* block_buf; } ;
struct TYPE_7__ {scalar_t__ bytes_remaining; } ;
struct TYPE_6__ {scalar_t__ bit_addr; scalar_t__ in_addr; } ;
struct TYPE_5__ {scalar_t__ volume; } ;
struct rar5 {TYPE_4__ cstate; TYPE_3__ file; int last_block_hdr; TYPE_2__ bits; TYPE_1__ main; } ;
struct compressed_block_header {int dummy; } ;
struct archive_read {int dummy; } ;
typedef scalar_t__ ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct archive_read*) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (struct archive_read*,scalar_t__) ;
 int FUNC_4 (struct archive_read*,int const*) ;
 struct rar5* FUNC_5 (struct archive_read*) ;
 int FUNC_6 (struct archive_read*,scalar_t__,int const**) ;
 int FUNC_7 (struct archive_read*,int const*,scalar_t__*,int *) ;
 int FUNC_8 (struct archive_read*,struct rar5*,int const*) ;
 scalar_t__ FUNC_9 (scalar_t__,scalar_t__) ;
 int FUNC_10 (struct archive_read*,int,int const**) ;

__attribute__((used)) static int FUNC_11(struct archive_read* VAR_3) {
 const uint8_t* VAR_4;
 struct rar5* VAR_5 = FUNC_5(VAR_3);
 int VAR_6;



 if(VAR_5->main.volume && VAR_5->file.bytes_remaining == 0) {
  VAR_6 = FUNC_0(VAR_3);
  if(VAR_6 != VAR_2)
   return VAR_6;
 }

 if(VAR_5->cstate.block_parsing_finished) {
  ssize_t VAR_7;


  if(!FUNC_10(VAR_3, 6, &VAR_4)) {

   return VAR_0;
  }
  VAR_6 = FUNC_7(VAR_3, VAR_4, &VAR_7,
      &VAR_5->last_block_hdr);
  if(VAR_6 != VAR_2) {
   return VAR_6;
  }



  ssize_t VAR_8 = sizeof(struct compressed_block_header) +
   FUNC_1(&VAR_5->last_block_hdr) + 1;

  if(VAR_2 != FUNC_3(VAR_3, VAR_8))
   return VAR_0;

  VAR_5->file.bytes_remaining -= VAR_8;







  ssize_t VAR_9 =
   FUNC_9(VAR_5->file.bytes_remaining, VAR_7);

  if(VAR_7 > VAR_5->file.bytes_remaining) {
   VAR_6 = FUNC_6(VAR_3, VAR_7, &VAR_4);
   if(VAR_6 != VAR_2) {
    return VAR_6;
   }

   VAR_9 = VAR_7;






  } else {
   VAR_5->cstate.switch_multivolume = 0;





   if(!FUNC_10(VAR_3, 4 + VAR_9, &VAR_4)) {

    return VAR_0;
   }
  }

  VAR_5->cstate.block_buf = VAR_4;
  VAR_5->cstate.cur_block_size = VAR_9;
  VAR_5->cstate.block_parsing_finished = 0;

  VAR_5->bits.in_addr = 0;
  VAR_5->bits.bit_addr = 0;

  if(FUNC_2(&VAR_5->last_block_hdr)) {

   VAR_6 = FUNC_8(VAR_3, VAR_5, VAR_4);
   if(VAR_6 != VAR_2) {


    return VAR_6;
   }
  }
 } else {

  VAR_4 = VAR_5->cstate.block_buf;
 }






 VAR_6 = FUNC_4(VAR_3, VAR_4);
 if(VAR_6 != VAR_2) {
  return VAR_6;
 }

 if(VAR_5->cstate.block_parsing_finished &&
     VAR_5->cstate.switch_multivolume == 0 &&
     VAR_5->cstate.cur_block_size > 0)
 {



  if(VAR_2 != FUNC_3(VAR_3, VAR_5->cstate.cur_block_size))
   return VAR_1;

  VAR_5->file.bytes_remaining -= VAR_5->cstate.cur_block_size;
 } else if(VAR_5->cstate.switch_multivolume) {



  VAR_5->cstate.switch_multivolume = 0;
 }

 return VAR_2;
}
