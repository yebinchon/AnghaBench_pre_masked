
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef void* time_t ;
struct val_anchors {int lock; TYPE_1__* autr; } ;
struct trust_anchor {int lock; TYPE_2__* autr; } ;
struct TYPE_4__ {void* retry_time; void* query_interval; scalar_t__ query_failed; int pnode; void* next_probe_time; void* last_success; void* last_queried; } ;
struct TYPE_3__ {int probe; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*) ;
 struct trust_anchor* FUNC_3 (struct val_anchors*,char*) ;
 scalar_t__ FUNC_4 (char*,int*) ;
 int FUNC_5 (int *,struct trust_anchor*) ;
 int FUNC_6 (int *,int *) ;
 scalar_t__ FUNC_7 (char*,char*,int) ;

__attribute__((used)) static int
FUNC_8(char* VAR_0, struct val_anchors* VAR_1,
 struct trust_anchor** VAR_2)
{
 struct trust_anchor* VAR_3 = *VAR_2;
 int VAR_4 = 0;
 if(FUNC_7(VAR_0, ";;id: ", 6) == 0) {
  *VAR_2 = FUNC_3(VAR_1, VAR_0+6);
  if(!*VAR_2) return -1;
  else return 1;
 } else if(FUNC_7(VAR_0, ";;REVOKED", 9) == 0) {
  if(VAR_3) {
   FUNC_2("REVOKED statement must be at start of file");
   return -1;
  }
  return 2;
 } else if(FUNC_7(VAR_0, ";;last_queried: ", 16) == 0) {
  if(!VAR_3) return -1;
  FUNC_0(&VAR_3->lock);
  VAR_3->autr->last_queried = (time_t)FUNC_4(VAR_0+16, &VAR_4);
  FUNC_1(&VAR_3->lock);
 } else if(FUNC_7(VAR_0, ";;last_success: ", 16) == 0) {
  if(!VAR_3) return -1;
  FUNC_0(&VAR_3->lock);
  VAR_3->autr->last_success = (time_t)FUNC_4(VAR_0+16, &VAR_4);
  FUNC_1(&VAR_3->lock);
 } else if(FUNC_7(VAR_0, ";;next_probe_time: ", 19) == 0) {
  if(!VAR_3) return -1;
  FUNC_0(&VAR_1->lock);
  FUNC_0(&VAR_3->lock);
  (void)FUNC_5(&VAR_1->autr->probe, VAR_3);
  VAR_3->autr->next_probe_time = (time_t)FUNC_4(VAR_0+19, &VAR_4);
  (void)FUNC_6(&VAR_1->autr->probe, &VAR_3->autr->pnode);
  FUNC_1(&VAR_3->lock);
  FUNC_1(&VAR_1->lock);
 } else if(FUNC_7(VAR_0, ";;query_failed: ", 16) == 0) {
  if(!VAR_3) return -1;
  FUNC_0(&VAR_3->lock);
  VAR_3->autr->query_failed = (uint8_t)FUNC_4(VAR_0+16, &VAR_4);
  FUNC_1(&VAR_3->lock);
 } else if(FUNC_7(VAR_0, ";;query_interval: ", 18) == 0) {
  if(!VAR_3) return -1;
  FUNC_0(&VAR_3->lock);
  VAR_3->autr->query_interval = (time_t)FUNC_4(VAR_0+18, &VAR_4);
  FUNC_1(&VAR_3->lock);
 } else if(FUNC_7(VAR_0, ";;retry_time: ", 14) == 0) {
  if(!VAR_3) return -1;
  FUNC_0(&VAR_3->lock);
  VAR_3->autr->retry_time = (time_t)FUNC_4(VAR_0+14, &VAR_4);
  FUNC_1(&VAR_3->lock);
 }
 return VAR_4;
}
