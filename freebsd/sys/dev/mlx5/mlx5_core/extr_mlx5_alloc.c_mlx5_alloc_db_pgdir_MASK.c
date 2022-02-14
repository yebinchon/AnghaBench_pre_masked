
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct mlx5_db_pgdir {int db_page; TYPE_1__* fw_page; int db_dma; int bitmap; } ;
struct mlx5_core_dev {int dummy; } ;
struct TYPE_3__ {int dma_addr; int virt_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct mlx5_db_pgdir*) ;
 struct mlx5_db_pgdir* FUNC_2 (int,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 TYPE_1__* FUNC_4 (struct mlx5_core_dev*,int ,int) ;
 int FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static struct mlx5_db_pgdir *FUNC_6(struct mlx5_core_dev *VAR_3,
       int VAR_4)
{
 struct mlx5_db_pgdir *VAR_5;

 VAR_5 = FUNC_2(sizeof(*VAR_5), VAR_0);

 FUNC_0(VAR_5->bitmap, VAR_2);

 VAR_5->fw_page = FUNC_4(VAR_3, VAR_0, 1);
 if (VAR_5->fw_page != ((void*)0)) {
  VAR_5->db_page = VAR_5->fw_page->virt_addr;
  VAR_5->db_dma = VAR_5->fw_page->dma_addr;


  FUNC_3(VAR_5->db_page, 0, VAR_1);


  FUNC_5(VAR_5->fw_page);
 }
 if (!VAR_5->db_page) {
  FUNC_1(VAR_5);
  return ((void*)0);
 }

 return VAR_5;
}
