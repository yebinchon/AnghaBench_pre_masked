
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int32_t ;
struct via_info {int lock; } ;
struct via_dma_op {int dummy; } ;
struct via_chinfo {scalar_t__ sgd_addr; scalar_t__ dir; int buffer; int count; int base; struct via_dma_op* sgd_table; struct via_info* parent; } ;
typedef int kobj_t ;
typedef scalar_t__ bus_addr_t ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (char*,scalar_t__,...) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (struct via_info*,int ,int) ;

__attribute__((used)) static u_int32_t
FUNC_6(kobj_t VAR_2, void *VAR_3)
{
 struct via_chinfo *VAR_4 = VAR_3;
 struct via_info *VAR_5 = VAR_4->parent;
 struct via_dma_op *VAR_6;
 bus_addr_t VAR_7 = VAR_4->sgd_addr;
 u_int32_t VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;

 VAR_6 = VAR_4->sgd_table;
 FUNC_2(VAR_5->lock);
 VAR_10 = FUNC_5(VAR_5, VAR_4->base, 4);
 VAR_11 = FUNC_5(VAR_5, VAR_4->count, 4);
 VAR_9 = FUNC_5(VAR_5, VAR_4->base, 4);
 if (VAR_9 != VAR_10)
  VAR_11 = FUNC_5(VAR_5, VAR_4->count, 4);
 FUNC_3(VAR_5->lock);

 FUNC_0(FUNC_1("viachan_getptr: len / base = %x / %x\n", VAR_11, VAR_9));




 VAR_12 = (VAR_9 - VAR_7) / sizeof(struct via_dma_op);
 if (VAR_12 == 0)
  VAR_12 = VAR_1;


 VAR_8 = (VAR_12 * FUNC_4(VAR_4->buffer) / VAR_1) - VAR_11;
 if (VAR_4->dir == VAR_0) {


  VAR_8 = VAR_8 & ~0x1f;
 }

 FUNC_0(FUNC_1("return ptr=%u\n", VAR_8));
 return VAR_8;
}
