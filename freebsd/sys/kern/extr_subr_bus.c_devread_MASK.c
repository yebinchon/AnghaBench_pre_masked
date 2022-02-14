
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uio {int dummy; } ;
struct dev_event_info {struct dev_event_info* dei_data; } ;
struct cdev {int dummy; } ;
struct TYPE_2__ {int mtx; int queued; int devq; int cv; scalar_t__ nonblock; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 struct dev_event_info* FUNC_1 (int *) ;
 int FUNC_2 (int *,struct dev_event_info*,int ) ;
 int FUNC_3 (int *,int *) ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 int FUNC_4 (struct dev_event_info*,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct dev_event_info*) ;
 int FUNC_8 (struct dev_event_info*,int ,struct uio*) ;

__attribute__((used)) static int
FUNC_9(struct cdev *VAR_4, struct uio *VAR_5, int VAR_6)
{
 struct dev_event_info *VAR_7;
 int VAR_8;

 FUNC_5(&VAR_3.mtx);
 while (FUNC_0(&VAR_3.devq)) {
  if (VAR_3.nonblock) {
   FUNC_6(&VAR_3.mtx);
   return (VAR_0);
  }
  VAR_8 = FUNC_3(&VAR_3.cv, &VAR_3.mtx);
  if (VAR_8) {



   FUNC_6(&VAR_3.mtx);
   return (VAR_8);
  }
 }
 VAR_7 = FUNC_1(&VAR_3.devq);
 FUNC_2(&VAR_3.devq, VAR_7, VAR_2);
 VAR_3.queued--;
 FUNC_6(&VAR_3.mtx);
 VAR_8 = FUNC_8(VAR_7->dei_data, FUNC_7(VAR_7->dei_data), VAR_5);
 FUNC_4(VAR_7->dei_data, VAR_1);
 FUNC_4(VAR_7, VAR_1);
 return (VAR_8);
}
