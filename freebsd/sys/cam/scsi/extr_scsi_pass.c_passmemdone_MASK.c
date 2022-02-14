
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pass_softc {int dummy; } ;
struct pass_io_req {int data_flags; int num_bufs; int * dirs; int * user_bufs; int * kern_bufs; int * lengths; } ;
struct cam_periph {int path; scalar_t__ softc; } ;







 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (struct cam_periph*,struct pass_io_req*,int ) ;
 int FUNC_2 (struct pass_softc*,struct pass_io_req*) ;
 int FUNC_3 (int ,char*,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_4(struct cam_periph *VAR_2, struct pass_io_req *VAR_3)
{
 struct pass_softc *VAR_4;
 int VAR_5;
 int VAR_6;

 VAR_5 = 0;
 VAR_4 = (struct pass_softc *)VAR_2->softc;

 switch (VAR_3->data_flags) {
 case 128:



  for (VAR_6 = 0; VAR_6 < VAR_3->num_bufs; VAR_6++) {
   if (VAR_3->dirs[VAR_6] != VAR_0)
    continue;

   VAR_5 = FUNC_0(VAR_3->kern_bufs[VAR_6],
       VAR_3->user_bufs[VAR_6], VAR_3->lengths[VAR_6]);
   if (VAR_5 != 0) {
    FUNC_3(VAR_2->path, "Unable to copy %u "
       "bytes from %p to user address %p\n",
       VAR_3->lengths[VAR_6],
       VAR_3->kern_bufs[VAR_6],
       VAR_3->user_bufs[VAR_6]);
    goto bailout;
   }

  }
  break;
 case 131:

  break;
 case 130:




  if (VAR_3->dirs[0] == VAR_0)
   VAR_5 = FUNC_1(VAR_2, VAR_3, VAR_3->dirs[0]);
  break;
 case 129:




  break;
 default:
 case 132:
  VAR_5 = VAR_1;
  break;
 }

bailout:




 FUNC_2(VAR_4, VAR_3);

 return (VAR_5);
}
