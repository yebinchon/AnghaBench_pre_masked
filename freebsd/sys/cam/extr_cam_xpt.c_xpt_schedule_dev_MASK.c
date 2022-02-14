
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u_int32_t ;
struct camq {scalar_t__ generation; } ;
struct TYPE_4__ {scalar_t__ priority; scalar_t__ index; scalar_t__ generation; } ;
typedef TYPE_1__ cam_pinfo ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct camq*,scalar_t__,scalar_t__) ;
 int FUNC_2 (struct camq*,TYPE_1__*) ;

__attribute__((used)) static int
FUNC_3(struct camq *VAR_2, cam_pinfo *VAR_3,
   u_int32_t VAR_4)
{
 int VAR_5;
 u_int32_t VAR_6;

 FUNC_0(VAR_0, ("xpt_schedule_dev\n"));


 VAR_6 = VAR_3->priority;




 if (VAR_3->index != VAR_1) {

  if (VAR_4 < VAR_6) {
   FUNC_1(VAR_2, VAR_3->index,
          VAR_4);
   FUNC_0(VAR_0,
     ("changed priority to %d\n",
      VAR_4));
   VAR_5 = 1;
  } else
   VAR_5 = 0;
 } else {

  if (VAR_4 < VAR_6)
   VAR_3->priority = VAR_4;

  FUNC_0(VAR_0,
    ("Inserting onto queue\n"));
  VAR_3->generation = ++VAR_2->generation;
  FUNC_2(VAR_2, VAR_3);
  VAR_5 = 1;
 }
 return (VAR_5);
}
