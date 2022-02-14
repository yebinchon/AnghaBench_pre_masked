
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int vi_flags; int vi_buffer; } ;
typedef TYPE_1__ video_info_t ;
typedef int video_adapter_t ;
struct s3pci_softc {int mem_base; } ;
typedef int device_t ;
struct TYPE_6__ {int (* get_info ) (int *,int,TYPE_1__*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 TYPE_4__* VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,int,TYPE_1__*) ;

__attribute__((used)) static int
FUNC_2(video_adapter_t *VAR_5, int VAR_6, video_info_t *VAR_7)
{




 int VAR_8;

 if ((VAR_8 = (*VAR_3->get_info)(VAR_5, VAR_6, VAR_7)))
  return VAR_8;
 return 0;
}
