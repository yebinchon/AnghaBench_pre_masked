
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int16_t ;
struct nbns_rq {int nr_opcode; scalar_t__ nr_trnid; struct nb_ctx* nr_nbd; int nr_rq; } ;
struct nb_ctx {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct nbns_rq*,int) ;
 int FUNC_1 (struct nbns_rq*) ;
 struct nbns_rq* FUNC_2 (int) ;
 int FUNC_3 (int *,int ) ;

int
FUNC_4(int VAR_2, struct nb_ctx *VAR_3, struct nbns_rq **VAR_4)
{
 struct nbns_rq *VAR_5;
 static u_int16_t VAR_6;
 int VAR_7;

 VAR_5 = FUNC_2(sizeof(*VAR_5));
 if (VAR_5 == ((void*)0))
  return VAR_0;
 FUNC_0(VAR_5, sizeof(*VAR_5));
 VAR_7 = FUNC_3(&VAR_5->nr_rq, VAR_1);
 if (VAR_7) {
  FUNC_1(VAR_5);
  return VAR_7;
 }
 VAR_5->nr_opcode = VAR_2;
 VAR_5->nr_nbd = VAR_3;
 VAR_5->nr_trnid = VAR_6++;
 *VAR_4 = VAR_5;
 return 0;
}
