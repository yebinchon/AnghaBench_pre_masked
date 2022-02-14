
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ibv_wc {scalar_t__ byte_len; int wr_id; } ;
struct ibv_grh {int dummy; } ;
struct ds_qp {scalar_t__ rbuf; } ;
struct ds_header {int version; scalar_t__ length; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct ds_qp *VAR_2, struct ibv_wc *VAR_3)
{
 struct ds_header *VAR_4;

 VAR_4 = (struct ds_header *) (VAR_2->rbuf + FUNC_0(VAR_3->wr_id));
 return ((VAR_3->byte_len >= sizeof(struct ibv_grh) + VAR_0) &&
  ((VAR_4->version == 4 && VAR_4->length == VAR_0) ||
   (VAR_4->version == 6 && VAR_4->length == VAR_1)));
}
