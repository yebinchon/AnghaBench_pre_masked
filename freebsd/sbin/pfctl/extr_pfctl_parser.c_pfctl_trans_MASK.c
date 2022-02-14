
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
typedef int trans ;
struct pfr_buffer {scalar_t__ pfrb_caddr; scalar_t__ pfrb_size; } ;
struct pfioc_trans_e {int dummy; } ;
struct pfioc_trans {int esize; struct pfioc_trans_e* array; scalar_t__ size; } ;


 int FUNC_0 (struct pfioc_trans*,int) ;
 int FUNC_1 (int,int ,struct pfioc_trans*) ;

int
FUNC_2(int VAR_0, struct pfr_buffer *VAR_1, u_long VAR_2, int VAR_3)
{
 struct pfioc_trans VAR_4;

 FUNC_0(&VAR_4, sizeof(VAR_4));
 VAR_4.size = VAR_1->pfrb_size - VAR_3;
 VAR_4.esize = sizeof(struct pfioc_trans_e);
 VAR_4.array = ((struct pfioc_trans_e *)VAR_1->pfrb_caddr) + VAR_3;
 return FUNC_1(VAR_0, VAR_2, &VAR_4);
}
