
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int buf_len; int buf_addr; } ;
struct TYPE_3__ {int buf_len; int buf_addr; } ;
struct qlnxr_qp {TYPE_2__ urq; TYPE_1__ usq; } ;
struct qlnxr_dev {int ha; } ;


 int FUNC_0 (int ,char*,struct qlnxr_qp*,int ,int ,int ,int ) ;

__attribute__((used)) static inline void
FUNC_1( struct qlnxr_dev *VAR_0,
 struct qlnxr_qp *VAR_1)
{
 FUNC_0((VAR_0->ha), "qp=%p. sq_addr=0x%llx, sq_len=%zd, "
  "rq_addr=0x%llx, rq_len=%zd\n",
  VAR_1, VAR_1->usq.buf_addr, VAR_1->usq.buf_len, VAR_1->urq.buf_addr,
  VAR_1->urq.buf_len);
 return;
}
