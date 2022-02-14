
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct sc_info {int lock; } ;
struct sc_chinfo {int buffer; int gcr_fifo_status; struct sc_info* parent; } ;
typedef int kobj_t ;
typedef int int32_t ;


 int FUNC_0 (struct sc_info*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static u_int32_t
FUNC_4(kobj_t VAR_0, void *VAR_1)
{
 struct sc_chinfo *VAR_2 = VAR_1;
 struct sc_info *VAR_3 = VAR_2->parent;
 int32_t VAR_4, VAR_5;

 FUNC_1(VAR_3->lock);
 VAR_4 = FUNC_0(VAR_2->parent, VAR_2->gcr_fifo_status) & 0xffff;
 FUNC_2(VAR_3->lock);
 VAR_5 = FUNC_3(VAR_2->buffer);
 return (2 * VAR_5 - VAR_4 - 1) % VAR_5;
}
