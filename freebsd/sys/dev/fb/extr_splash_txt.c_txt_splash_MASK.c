
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int vi_flags; } ;
struct TYPE_13__ {size_t va_index; TYPE_1__ va_info; } ;
typedef TYPE_2__ video_adapter_t ;
struct TYPE_14__ {int scr; } ;
typedef TYPE_3__ scr_stat ;
struct TYPE_15__ {int * scr_map; TYPE_3__* cur_scp; } ;
typedef TYPE_4__ sc_softc_t ;
struct TYPE_16__ {int (* set_hw_cursor ) (TYPE_2__*,int,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_4__*) ;
 TYPE_4__* FUNC_1 (TYPE_2__*,int *) ;
 int FUNC_2 (TYPE_3__*,int ) ;
 int FUNC_3 (int *,int ,int) ;
 scalar_t__ VAR_6 ;
 int FUNC_4 (TYPE_2__*,int,int) ;
 TYPE_5__** VAR_7 ;

__attribute__((used)) static int
FUNC_5(video_adapter_t *VAR_8, const int VAR_9)
{
 sc_softc_t *VAR_10;
 scr_stat *VAR_11;

 VAR_10 = FUNC_1(VAR_8, ((void*)0));
 if (VAR_10 == ((void*)0))
  return (VAR_1);
 VAR_11 = VAR_10->cur_scp;
 if (VAR_9) {
  if (!VAR_6) {
   if (VAR_8->va_info.vi_flags & VAR_5)
    return VAR_1;

   FUNC_3(&VAR_11->scr, VAR_10->scr_map[0x20],
       (VAR_3 | VAR_0) << 8);
   (*VAR_7[VAR_8->va_index]->set_hw_cursor)(VAR_8, -1, -1);
   FUNC_2(VAR_11, 0);
   VAR_6 = VAR_4;

   FUNC_0(VAR_10);
  }
  return (0);
 } else {

  VAR_6 = VAR_2;
  return (0);
 }
}
