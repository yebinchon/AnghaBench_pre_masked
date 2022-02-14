
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


union ctl_io {int scsiio; } ;
typedef int uint8_t ;
typedef scalar_t__ uint64_t ;
struct ctl_be_block_io {int num_segs; TYPE_1__* sg_segs; } ;
typedef int info ;
struct TYPE_4__ {scalar_t__ ptr; } ;
struct TYPE_3__ {scalar_t__ len; int addr; } ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (union ctl_io*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ,int ,scalar_t__) ;
 int FUNC_2 (int *,int,int ,int,int,int ,int,int **,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (scalar_t__,int *) ;

__attribute__((used)) static void
FUNC_5(union ctl_io *VAR_4)
{
 struct ctl_be_block_io *VAR_5;
 uint64_t VAR_6, VAR_7;
 int VAR_8;
 uint8_t VAR_9[8];

 VAR_5 = (struct ctl_be_block_io *)FUNC_0(VAR_4)->ptr;
 VAR_6 = 0;
 for (VAR_8 = 0; VAR_8 < VAR_5->num_segs; VAR_8++) {
  VAR_7 = FUNC_1(VAR_5->sg_segs[VAR_8].addr,
      VAR_5->sg_segs[VAR_8 + VAR_0].addr,
      VAR_5->sg_segs[VAR_8].len);
  VAR_6 += VAR_7;
  if (VAR_7 < VAR_5->sg_segs[VAR_8].len)
   break;
 }
 if (VAR_8 < VAR_5->num_segs) {
  FUNC_4(VAR_6, VAR_9);
  FUNC_2(&VAR_4->scsiio, 1,
                    VAR_3,
              0x1D, 0x00,
               VAR_1,
               sizeof(VAR_9), &VAR_9,
               VAR_2);
 } else
  FUNC_3(&VAR_4->scsiio);
}
