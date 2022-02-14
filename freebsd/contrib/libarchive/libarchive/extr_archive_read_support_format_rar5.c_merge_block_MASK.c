
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_6__ {int * push_buf; } ;
struct TYPE_5__ {int bytes_remaining; } ;
struct TYPE_4__ {int switch_multivolume; } ;
struct rar5 {TYPE_3__ vol; scalar_t__ merge_mode; TYPE_2__ file; TYPE_1__ cstate; } ;
struct archive_read {int archive; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct archive_read*) ;
 int FUNC_1 (int *,int ,char*) ;
 int FUNC_2 (struct archive_read*,int) ;
 int FUNC_3 (void*) ;
 struct rar5* FUNC_4 (struct archive_read*) ;
 int * FUNC_5 (int) ;
 int FUNC_6 (int *,int const*,int) ;
 int FUNC_7 (int *,int ,int) ;
 int FUNC_8 (int,int) ;
 int FUNC_9 (struct archive_read*,int,int const**) ;

__attribute__((used)) static int FUNC_10(struct archive_read* VAR_6, ssize_t VAR_7,
    const uint8_t** VAR_8)
{
 struct rar5* VAR_9 = FUNC_4(VAR_6);
 ssize_t VAR_10, VAR_11 = 0;
 const uint8_t* VAR_12;
 int VAR_13;

 if(VAR_9->merge_mode) {
  FUNC_1(&VAR_6->archive, VAR_2,
      "Recursive merge is not allowed");

  return VAR_3;
 }


 VAR_9->cstate.switch_multivolume = 1;


 if(VAR_9->vol.push_buf)
  FUNC_3((void*) VAR_9->vol.push_buf);





 VAR_9->vol.push_buf = FUNC_5(VAR_7 + 8);
 if(!VAR_9->vol.push_buf) {
  FUNC_1(&VAR_6->archive, VAR_5,
      "Can't allocate memory for a merge block buffer.");
  return VAR_3;
 }



 FUNC_7(&VAR_9->vol.push_buf[VAR_7], 0, 8);





 while(1) {


  VAR_10 = FUNC_8(VAR_9->file.bytes_remaining,
      VAR_7 - VAR_11);

  if(VAR_10 == 0) {
   FUNC_1(&VAR_6->archive,
       VAR_1,
       "Encountered block size == 0 during block merge");
   return VAR_3;
  }

  if(!FUNC_9(VAR_6, VAR_10, &VAR_12))
   return VAR_0;



  if(VAR_11 + VAR_10 > VAR_7) {
   FUNC_1(&VAR_6->archive,
       VAR_2,
       "Consumed too much data when merging blocks.");
   return VAR_3;
  }




  FUNC_6(&VAR_9->vol.push_buf[VAR_11], VAR_12, VAR_10);


  if(VAR_4 != FUNC_2(VAR_6, VAR_10))
   return VAR_0;



  VAR_11 += VAR_10;
  VAR_9->file.bytes_remaining -= VAR_10;




  if(VAR_11 == VAR_7) {
   break;
  }



  if(VAR_9->file.bytes_remaining == 0) {
   VAR_9->merge_mode++;
   VAR_13 = FUNC_0(VAR_6);
   VAR_9->merge_mode--;
   if(VAR_13 != VAR_4) {
    return VAR_13;
   }
  }
 }

 *VAR_8 = VAR_9->vol.push_buf;




 return VAR_4;
}
