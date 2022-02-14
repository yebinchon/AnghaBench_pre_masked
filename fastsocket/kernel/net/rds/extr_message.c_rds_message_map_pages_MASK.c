
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct scatterlist {int dummy; } ;
struct TYPE_6__ {unsigned int op_nents; int * op_sg; } ;
struct TYPE_4__ {int h_len; } ;
struct TYPE_5__ {TYPE_1__ i_hdr; } ;
struct rds_message {TYPE_3__ data; TYPE_2__ m_inc; int m_flags; } ;


 int VAR_0 ;
 struct rds_message* FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_1 (unsigned int,int ) ;
 int FUNC_2 (unsigned int) ;
 struct rds_message* FUNC_3 (int,int ) ;
 int * FUNC_4 (struct rds_message*,int) ;
 int FUNC_5 (struct rds_message*) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int *,int ,int ,int ) ;
 int FUNC_8 (unsigned long) ;

struct rds_message *FUNC_9(unsigned long *VAR_4, unsigned int VAR_5)
{
 struct rds_message *VAR_6;
 unsigned int VAR_7;
 int VAR_8 = FUNC_1(VAR_5, VAR_2);
 int VAR_9 = VAR_8 * sizeof(struct scatterlist);

 VAR_6 = FUNC_3(VAR_9, VAR_1);
 if (!VAR_6)
  return FUNC_0(-VAR_0);

 FUNC_6(VAR_3, &VAR_6->m_flags);
 VAR_6->m_inc.i_hdr.h_len = FUNC_2(VAR_5);
 VAR_6->data.op_nents = FUNC_1(VAR_5, VAR_2);
 VAR_6->data.op_sg = FUNC_4(VAR_6, VAR_8);
 if (!VAR_6->data.op_sg) {
  FUNC_5(VAR_6);
  return FUNC_0(-VAR_0);
 }

 for (VAR_7 = 0; VAR_7 < VAR_6->data.op_nents; ++VAR_7) {
  FUNC_7(&VAR_6->data.op_sg[VAR_7],
    FUNC_8(VAR_4[VAR_7]),
    VAR_2, 0);
 }

 return VAR_6;
}
