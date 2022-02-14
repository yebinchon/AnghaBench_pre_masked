
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nicpf {int flags; int check_link_mtx; int check_link; int rss_ind_tbl_size; int reg_base; int node; int dev; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int *,int ) ;
 struct nicpf* FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int *,char*,int *,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct nicpf*) ;
 int FUNC_8 (struct nicpf*) ;
 int FUNC_9 (struct nicpf*) ;
 int FUNC_10 (struct nicpf*) ;
 int FUNC_11 (int ,struct nicpf*) ;
 int FUNC_12 (struct nicpf*) ;
 int FUNC_13 (struct nicpf*) ;
 int FUNC_14 (struct nicpf*) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ) ;

__attribute__((used)) static int
FUNC_17(device_t VAR_3)
{
 struct nicpf *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_1(VAR_3);
 VAR_4->dev = VAR_3;


 FUNC_16(VAR_3);


 VAR_5 = FUNC_13(VAR_4);
 if (VAR_5 != 0) {
  FUNC_2(VAR_3, "Could not allocate PCI resources\n");
  return (VAR_5);
 }

 VAR_4->node = FUNC_6(VAR_4->reg_base);


 VAR_4->flags &= ~VAR_2;
 FUNC_10(VAR_4);


 FUNC_7(VAR_4);


 VAR_4->rss_ind_tbl_size = VAR_1;


 VAR_5 = FUNC_9(VAR_4);
 if (VAR_5 != 0)
  goto err_free_res;


 VAR_5 = FUNC_11(VAR_3, VAR_4);
 if (VAR_5 != 0)
  goto err_free_intr;

 if (VAR_4->flags & VAR_2)
  return (0);

 FUNC_3(&VAR_4->check_link_mtx, "VNIC PF link poll", ((void*)0), VAR_0);

 FUNC_0(&VAR_4->check_link, &VAR_4->check_link_mtx, 0);
 FUNC_4(&VAR_4->check_link_mtx);
 FUNC_8(VAR_4);
 FUNC_5(&VAR_4->check_link_mtx);

 return (0);

err_free_intr:
 FUNC_12(VAR_4);
err_free_res:
 FUNC_14(VAR_4);
 FUNC_15(VAR_3);

 return (VAR_5);
}
