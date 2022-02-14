
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct cfdata {scalar_t__ sum; int sum_extra_avail; scalar_t__ sum_calculated; int compressed_size; scalar_t__ memimage; scalar_t__ sum_extra; } ;
struct TYPE_5__ {int flags; scalar_t__ cfdata; } ;
struct cab {TYPE_3__* entry_cffolder; TYPE_2__ cfheader; struct cfdata* entry_cfdata; } ;
struct archive_read {int archive; TYPE_1__* format; } ;
struct TYPE_6__ {scalar_t__ cfdata_index; } ;
struct TYPE_4__ {scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ,char*,scalar_t__,scalar_t__,scalar_t__,int ) ;
 void* FUNC_1 (scalar_t__,int,scalar_t__) ;

__attribute__((used)) static int
FUNC_2(struct archive_read *VAR_5)
{
 struct cab *VAR_6 = (struct cab *)(VAR_5->format->data);
 struct cfdata *VAR_7 = VAR_6->entry_cfdata;
 int VAR_8;


 if (VAR_7->sum == 0)
  return (VAR_2);




 if (VAR_7->sum_extra_avail) {
  VAR_7->sum_calculated =
      FUNC_1(VAR_7->sum_extra,
         VAR_7->sum_extra_avail, VAR_7->sum_calculated);
  VAR_7->sum_extra_avail = 0;
 }

 VAR_8 = 4;
 if (VAR_6->cfheader.flags & VAR_4)
  VAR_8 += VAR_6->cfheader.cfdata;
 VAR_7->sum_calculated = FUNC_1(
     VAR_7->memimage + VAR_3, VAR_8, VAR_7->sum_calculated);
 if (VAR_7->sum_calculated != VAR_7->sum) {
  FUNC_0(&VAR_5->archive, VAR_0,
      "Checksum error CFDATA[%d] %x:%x in %d bytes",
      VAR_6->entry_cffolder->cfdata_index -1,
      VAR_7->sum, VAR_7->sum_calculated,
      VAR_7->compressed_size);
  return (VAR_1);
 }
 return (VAR_2);
}
