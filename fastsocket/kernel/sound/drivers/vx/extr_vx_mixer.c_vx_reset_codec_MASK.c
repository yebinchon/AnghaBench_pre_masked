
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vx_core {scalar_t__ type; scalar_t__** output_level; TYPE_2__* hw; TYPE_1__* ops; } ;
struct TYPE_4__ {unsigned int num_codecs; } ;
struct TYPE_3__ {int akm_write; int (* reset_codec ) (struct vx_core*) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct vx_core*) ;
 int FUNC_1 (struct vx_core*,unsigned int,int ,int ) ;
 int FUNC_2 (struct vx_core*,unsigned int,int ,int) ;

void FUNC_3(struct vx_core *VAR_6, int VAR_7)
{
 unsigned int VAR_8;
 int VAR_9 = VAR_6->type >= VAR_1 ? 0x75 : 0x65;

 VAR_6->ops->reset_codec(VAR_6);


 if (! VAR_6->ops->akm_write) {

  for (VAR_8 = 0; VAR_8 < VAR_6->hw->num_codecs; VAR_8++) {

   FUNC_2(VAR_6, VAR_8, VAR_4, VAR_0);

   FUNC_2(VAR_6, VAR_8, VAR_2, 0x00);

   FUNC_2(VAR_6, VAR_8, VAR_5, VAR_9);

   FUNC_2(VAR_6, VAR_8, VAR_3, 0x00);
  }
 }


 for (VAR_8 = 0; VAR_8 < VAR_6->hw->num_codecs; VAR_8++) {
  VAR_6->output_level[VAR_8][0] = 0;
  VAR_6->output_level[VAR_8][1] = 0;
  FUNC_1(VAR_6, VAR_8, 0, 0);
 }
}
