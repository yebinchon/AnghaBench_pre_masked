
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nvme_tracker {TYPE_2__* req; } ;
struct nvme_qpair {int outstanding_tr; } ;
struct TYPE_3__ {scalar_t__ opc; } ;
struct TYPE_4__ {TYPE_1__ cmd; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct nvme_tracker* FUNC_0 (int *) ;
 struct nvme_tracker* FUNC_1 (struct nvme_tracker*,int ) ;
 int FUNC_2 (struct nvme_qpair*,struct nvme_tracker*,int ,int ,int ,int ) ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_3(struct nvme_qpair *VAR_5)
{
 struct nvme_tracker *VAR_6;

 VAR_6 = FUNC_0(&VAR_5->outstanding_tr);
 while (VAR_6 != ((void*)0)) {
  if (VAR_6->req->cmd.opc == VAR_1) {
   FUNC_2(VAR_5, VAR_6,
       VAR_2, VAR_3, 0,
       VAR_0);
   VAR_6 = FUNC_0(&VAR_5->outstanding_tr);
  } else {
   VAR_6 = FUNC_1(VAR_6, VAR_4);
  }
 }
}
