
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ max_sges; int pbl; } ;
struct qlnxr_qp {int err_bitmap; TYPE_1__ sq; struct qlnxr_dev* dev; } ;
struct qlnxr_dev {int * ha; } ;
struct ib_send_wr {scalar_t__ num_sge; } ;
typedef int qlnx_host_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*,struct qlnxr_qp*,struct ib_send_wr*,...) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static inline bool
FUNC_3(struct qlnxr_qp *VAR_4, struct ib_send_wr *VAR_5)
{
 int VAR_6, VAR_7, VAR_8;
 struct qlnxr_dev *VAR_9 = VAR_4->dev;
 qlnx_host_t *VAR_10;

 VAR_10 = VAR_9->ha;

 FUNC_0(VAR_10, "enter[qp, wr] = [%p,%p]\n", VAR_4, VAR_5);


 VAR_7 = VAR_5->num_sge > VAR_4->sq.max_sges;
 VAR_6 = FUNC_2(&VAR_4->sq);
 VAR_8 = FUNC_1(&VAR_4->sq.pbl) <
        VAR_0;
 if (VAR_6 || VAR_7 || VAR_8) {
  if (VAR_6 &&
      !(VAR_4->err_bitmap & VAR_2)) {

   VAR_4->err_bitmap |= VAR_2;

   FUNC_0(VAR_10,
    "error: WQ is full. Post send on QP failed"
    " (this error appears only once) "
    "[qp, wr, qp->err_bitmap]=[%p, %p, 0x%x]\n",
    VAR_4, VAR_5, VAR_4->err_bitmap);
  }

  if (VAR_7 &&
      !(VAR_4->err_bitmap & VAR_1)) {

   VAR_4->err_bitmap |= VAR_1;

   FUNC_0(VAR_10,
    "error: WQ is bad. Post send on QP failed"
    " (this error appears only once) "
    "[qp, wr, qp->err_bitmap]=[%p, %p, 0x%x]\n",
    VAR_4, VAR_5, VAR_4->err_bitmap);
  }

  if (VAR_8 &&
      !(VAR_4->err_bitmap & VAR_3)) {

   VAR_4->err_bitmap |= VAR_3;

   FUNC_0(VAR_10,
    "error: WQ PBL is full. Post send on QP failed"
    " (this error appears only once) "
    "[qp, wr, qp->err_bitmap]=[%p, %p, 0x%x]\n",
    VAR_4, VAR_5, VAR_4->err_bitmap);
  }
  return 0;
 }
 FUNC_0(VAR_10, "exit[qp, wr] = [%p,%p]\n", VAR_4, VAR_5);
 return 1;
}
