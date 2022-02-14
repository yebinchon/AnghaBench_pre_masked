
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int (* be_move_done ) (union ctl_io*) ;} ;
struct TYPE_5__ {TYPE_1__* ctl_private; } ;
union ctl_io {TYPE_3__ scsiio; TYPE_2__ io_hdr; } ;
struct ctl_fe_ioctl_params {int state; int sem; int ioctl_mtx; } ;
typedef int params ;
typedef int ctl_fe_ioctl_state ;
struct TYPE_4__ {struct ctl_fe_ioctl_params* ptr; } ;


 int FUNC_0 (char*) ;



 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct ctl_fe_ioctl_params*,int) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (union ctl_io*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,char*,int *,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (union ctl_io*) ;

__attribute__((used)) static int
FUNC_12(union ctl_io *VAR_3)
{
 struct ctl_fe_ioctl_params VAR_4;
 ctl_fe_ioctl_state VAR_5;
 int VAR_6, VAR_7;

 FUNC_1(&VAR_4, sizeof(VAR_4));
 FUNC_8(&VAR_4.ioctl_mtx, "ctliocmtx", ((void*)0), VAR_2);
 FUNC_5(&VAR_4.sem, "ctlioccv");
 VAR_4.state = 128;
 VAR_5 = VAR_4.state;

 VAR_3->io_hdr.ctl_private[VAR_0].ptr = &VAR_4;

 FUNC_0(("cfi_submit_wait\n"));


 if ((VAR_7 = FUNC_3(VAR_3)) != VAR_1)
  return (VAR_7);

 VAR_6 = 0;

 do {
  FUNC_9(&VAR_4.ioctl_mtx);





  if (VAR_4.state == VAR_5) {

   FUNC_6(&VAR_4.sem, &VAR_4.ioctl_mtx);
  }
  VAR_5 = VAR_4.state;

  switch (VAR_4.state) {
  case 128:


   FUNC_10(&VAR_4.ioctl_mtx);
   break;
  case 130:
   FUNC_0(("got CTL_IOCTL_DATAMOVE\n"));





   VAR_4.state = VAR_5 = 128;

   FUNC_10(&VAR_4.ioctl_mtx);
   FUNC_2(&VAR_3->scsiio);







   VAR_3->scsiio.be_move_done(VAR_3);
   break;
  case 129:
   FUNC_10(&VAR_4.ioctl_mtx);
   FUNC_0(("got CTL_IOCTL_DONE\n"));
   VAR_6 = 1;
   break;
  default:
   FUNC_10(&VAR_4.ioctl_mtx);

   break;
  }
 } while (VAR_6 == 0);

 FUNC_7(&VAR_4.ioctl_mtx);
 FUNC_4(&VAR_4.sem);

 return (VAR_1);
}
