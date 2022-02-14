
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct smb_request {int rq_flags; scalar_t__ rq_trans2buffer; scalar_t__ rq_buffer; TYPE_1__* rq_server; } ;
struct TYPE_2__ {int nr_requests; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,struct smb_request*) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_3(struct smb_request *VAR_2)
{
 FUNC_0(&VAR_2->rq_server->nr_requests);
 if (VAR_2->rq_buffer && !(VAR_2->rq_flags & VAR_0))
  FUNC_1(VAR_2->rq_buffer);
 FUNC_1(VAR_2->rq_trans2buffer);
 FUNC_2(VAR_1, VAR_2);
}
