
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int zv_state; int zv_zilog; int zv_queue_mtx; int zv_queue; } ;
typedef TYPE_1__ zvol_state_t ;
struct bio {int bio_cmd; } ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct bio* FUNC_0 (int *) ;
 int VAR_4 ;
 int FUNC_1 (struct bio*,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int *,int *,int,char*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int*) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (struct bio*) ;

__attribute__((used)) static void
FUNC_12(void *VAR_5)
{
 zvol_state_t *VAR_6;
 struct bio *VAR_7;

 FUNC_7(VAR_4);
 FUNC_6(VAR_4, VAR_2);
 FUNC_8(VAR_4);

 VAR_6 = VAR_5;
 for (;;) {
  FUNC_4(&VAR_6->zv_queue_mtx);
  VAR_7 = FUNC_0(&VAR_6->zv_queue);
  if (VAR_7 == ((void*)0)) {
   if (VAR_6->zv_state == 1) {
    VAR_6->zv_state = 2;
    FUNC_9(&VAR_6->zv_state);
    FUNC_5(&VAR_6->zv_queue_mtx);
    FUNC_2();
   }
   FUNC_3(&VAR_6->zv_queue, &VAR_6->zv_queue_mtx, VAR_2 | VAR_1,
       "zvol:io", 0);
   continue;
  }
  FUNC_5(&VAR_6->zv_queue_mtx);
  switch (VAR_7->bio_cmd) {
  case 130:
   FUNC_10(VAR_6->zv_zilog, VAR_3);
   FUNC_1(VAR_7, 0);
   break;
  case 129:
  case 128:
  case 131:
   FUNC_11(VAR_7);
   break;
  default:
   FUNC_1(VAR_7, VAR_0);
   break;
  }
 }
}
