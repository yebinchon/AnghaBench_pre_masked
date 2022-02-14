
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vx_rmh {int * Cmd; } ;
struct vx_pipe {int number; int is_capture; int channels; int data_mode; scalar_t__ pcx_time; scalar_t__ differed_type; } ;
struct vx_core {int uer_bits; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct vx_pipe* FUNC_0 (int,int ) ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (struct vx_rmh*,int ) ;
 int FUNC_2 (struct vx_core*,struct vx_rmh*) ;
 int FUNC_3 (struct vx_rmh*,int,int,int) ;

__attribute__((used)) static int FUNC_4(struct vx_core *VAR_8, int VAR_9,
    int VAR_10, int VAR_11,
    struct vx_pipe **VAR_12)
{
 int VAR_13;
 struct vx_pipe *VAR_14;
 struct vx_rmh VAR_15;
 int VAR_16;

 *VAR_12 = ((void*)0);
 FUNC_1(&VAR_15, VAR_3);
 FUNC_3(&VAR_15, VAR_9, VAR_10, VAR_11);




 VAR_16 = (VAR_8->uer_bits & VAR_6) != 0;
 if (! VAR_9 && VAR_16)
  VAR_15.Cmd[0] |= VAR_0;
 VAR_13 = FUNC_2(VAR_8, &VAR_15);
 if (VAR_13 < 0)
  return VAR_13;


 VAR_14 = FUNC_0(sizeof(*VAR_14), VAR_5);
 if (! VAR_14) {

  FUNC_1(&VAR_15, VAR_2);
  FUNC_3(&VAR_15, VAR_9, VAR_10, 0);
  FUNC_2(VAR_8, &VAR_15);
  return -VAR_4;
 }


 VAR_14->number = VAR_10;
 VAR_14->is_capture = VAR_9;
 VAR_14->channels = VAR_11;
 VAR_14->differed_type = 0;
 VAR_14->pcx_time = 0;
 VAR_14->data_mode = VAR_16;
 *VAR_12 = VAR_14;

 return 0;
}
