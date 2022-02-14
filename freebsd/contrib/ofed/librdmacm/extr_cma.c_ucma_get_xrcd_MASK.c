
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ibv_xrcd_init_attr {int comp_mask; int fd; int oflags; } ;
struct ibv_xrcd {int dummy; } ;
struct cma_device {struct ibv_xrcd* xrcd; int verbs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ibv_xrcd* FUNC_0 (int ,struct ibv_xrcd_init_attr*) ;
 int FUNC_1 (struct ibv_xrcd_init_attr*,int ,int) ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static struct ibv_xrcd *FUNC_4(struct cma_device *VAR_4)
{
 struct ibv_xrcd_init_attr VAR_5;

 FUNC_2(&VAR_3);
 if (!VAR_4->xrcd) {
  FUNC_1(&VAR_5, 0, sizeof VAR_5);
  VAR_5.comp_mask = VAR_0 | VAR_1;
  VAR_5.fd = -1;
  VAR_5.oflags = VAR_2;
  VAR_4->xrcd = FUNC_0(VAR_4->verbs, &VAR_5);
 }
 FUNC_3(&VAR_3);
 return VAR_4->xrcd;
}
