
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smb_request {int rq_queue; int rq_count; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct smb_request*) ;

void FUNC_3(struct smb_request *VAR_0)
{
 if (FUNC_0(&VAR_0->rq_count)) {
  FUNC_1(&VAR_0->rq_queue);
  FUNC_2(VAR_0);
 }
}
