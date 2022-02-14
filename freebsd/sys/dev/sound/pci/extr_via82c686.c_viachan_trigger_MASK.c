
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct via_info {int lock; } ;
struct via_dma_op {int dummy; } ;
struct via_chinfo {int sgd_addr; int ctrl; int base; struct via_dma_op* sgd_table; struct via_info* parent; } ;
typedef int kobj_t ;
typedef int bus_addr_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (char*,int,...) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct via_chinfo*) ;
 int FUNC_6 (struct via_info*,int ,int,int) ;

__attribute__((used)) static int
FUNC_7(kobj_t VAR_3, void *VAR_4, int VAR_5)
{
 struct via_chinfo *VAR_6 = VAR_4;
 struct via_info *VAR_7 = VAR_6->parent;
 struct via_dma_op *VAR_8;
 bus_addr_t VAR_9 = VAR_6->sgd_addr;

 if (!FUNC_1(VAR_5))
  return 0;

 VAR_8 = VAR_6->sgd_table;
 FUNC_0(FUNC_2("ado located at va=%p pa=%x\n", VAR_8, VAR_9));

 FUNC_3(VAR_7->lock);
 if (VAR_5 == VAR_0) {
  FUNC_5(VAR_6);
  FUNC_6(VAR_7, VAR_6->base, VAR_9, 4);
  FUNC_6(VAR_7, VAR_6->ctrl, VAR_1, 1);
 } else
  FUNC_6(VAR_7, VAR_6->ctrl, VAR_2, 1);
 FUNC_4(VAR_7->lock);

 FUNC_0(FUNC_2("viachan_trigger: go=%d\n", VAR_5));
 return 0;
}
