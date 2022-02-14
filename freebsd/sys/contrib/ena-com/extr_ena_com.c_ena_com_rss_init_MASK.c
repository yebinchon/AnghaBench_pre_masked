
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct ena_com_dev {int rss; } ;


 int FUNC_0 (struct ena_com_dev*) ;
 int FUNC_1 (struct ena_com_dev*) ;
 int FUNC_2 (struct ena_com_dev*) ;
 int FUNC_3 (struct ena_com_dev*,int ) ;
 int FUNC_4 (struct ena_com_dev*) ;
 int FUNC_5 (int *,int,int) ;
 scalar_t__ FUNC_6 (int) ;

int FUNC_7(struct ena_com_dev *VAR_0, u16 VAR_1)
{
 int VAR_2;

 FUNC_5(&VAR_0->rss, 0x0, sizeof(VAR_0->rss));

 VAR_2 = FUNC_3(VAR_0, VAR_1);
 if (FUNC_6(VAR_2))
  goto err_indr_tbl;

 VAR_2 = FUNC_1(VAR_0);
 if (FUNC_6(VAR_2))
  goto err_hash_key;

 VAR_2 = FUNC_0(VAR_0);
 if (FUNC_6(VAR_2))
  goto err_hash_ctrl;

 return 0;

err_hash_ctrl:
 FUNC_2(VAR_0);
err_hash_key:
 FUNC_4(VAR_0);
err_indr_tbl:

 return VAR_2;
}
