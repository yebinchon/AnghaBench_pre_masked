
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_8__ {int switch_multivolume; size_t last_unstore_ptr; } ;
struct TYPE_7__ {scalar_t__ bytes_remaining; } ;
struct TYPE_6__ {scalar_t__ split_after; } ;
struct TYPE_5__ {scalar_t__ volume; } ;
struct rar5 {TYPE_4__ cstate; TYPE_3__ file; TYPE_2__ generic; TYPE_1__ main; } ;
struct archive_read {int archive; } ;
typedef size_t int64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct archive_read*) ;
 int FUNC_1 (int *,int ,char*) ;
 int FUNC_2 (struct archive_read*,size_t) ;
 size_t FUNC_3 (scalar_t__,int) ;
 int FUNC_4 (struct archive_read*,size_t,int const**) ;
 int FUNC_5 (struct rar5*,int const*,size_t) ;

__attribute__((used)) static int FUNC_6(struct archive_read* VAR_4,
    struct rar5* VAR_5, const void** VAR_6, size_t* VAR_7, int64_t* VAR_8)
{
 const uint8_t* VAR_9;

 if(VAR_5->file.bytes_remaining == 0 && VAR_5->main.volume > 0 &&
     VAR_5->generic.split_after > 0)
 {
  int VAR_10;

  VAR_5->cstate.switch_multivolume = 1;
  VAR_10 = FUNC_0(VAR_4);
  VAR_5->cstate.switch_multivolume = 0;

  if(VAR_10 != VAR_3) {


   return VAR_10;
  }
 }

 size_t VAR_11 = FUNC_3(VAR_5->file.bytes_remaining, 64 * 1024);
 if(VAR_11 == 0) {
  return VAR_0;
 }

 if(!FUNC_4(VAR_4, VAR_11, &VAR_9)) {
  FUNC_1(&VAR_4->archive, VAR_1,
      "I/O error when unstoring file");
  return VAR_2;
 }

 if(VAR_3 != FUNC_2(VAR_4, VAR_11)) {
  return VAR_0;
 }

 if(VAR_6) *VAR_6 = VAR_9;
 if(VAR_7) *VAR_7 = VAR_11;
 if(VAR_8) *VAR_8 = VAR_5->cstate.last_unstore_ptr;

 VAR_5->file.bytes_remaining -= VAR_11;
 VAR_5->cstate.last_unstore_ptr += VAR_11;

 FUNC_5(VAR_5, VAR_9, VAR_11);
 return VAR_3;
}
