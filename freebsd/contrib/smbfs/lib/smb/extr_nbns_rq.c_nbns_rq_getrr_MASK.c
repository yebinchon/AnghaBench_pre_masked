
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct nbns_rr {int rr_type; int rr_class; int rr_rdlength; int * rr_data; int rr_ttl; int * rr_name; } ;
struct mbdata {int * mb_pos; } ;
struct nbns_rq {struct mbdata nr_rp; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct nbns_rr*,int) ;
 int FUNC_2 (struct mbdata*,int *,int) ;
 int FUNC_3 (struct mbdata*,int*) ;
 int FUNC_4 (struct mbdata*,int *) ;
 int FUNC_5 (int *) ;

int
FUNC_6(struct nbns_rq *VAR_1, struct nbns_rr *VAR_2)
{
 struct mbdata *VAR_3 = &VAR_1->nr_rp;
 u_char *VAR_4;
 int VAR_5, VAR_6;

 FUNC_1(VAR_2, sizeof(*VAR_2));
 VAR_4 = VAR_3->mb_pos;
 VAR_6 = FUNC_5(VAR_4);
 if (VAR_6 < 1)
  return FUNC_0(VAR_0);
 VAR_2->rr_name = VAR_4;
 VAR_5 = FUNC_2(VAR_3, ((void*)0), VAR_6);
 if (VAR_5)
  return VAR_5;
 FUNC_3(VAR_3, &VAR_2->rr_type);
 FUNC_3(VAR_3, &VAR_2->rr_class);
 FUNC_4(VAR_3, &VAR_2->rr_ttl);
 FUNC_3(VAR_3, &VAR_2->rr_rdlength);
 VAR_2->rr_data = VAR_3->mb_pos;
 VAR_5 = FUNC_2(VAR_3, ((void*)0), VAR_2->rr_rdlength);
 return VAR_5;
}
