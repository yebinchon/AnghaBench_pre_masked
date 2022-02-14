
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct sc_info {int lock; } ;
struct sc_chinfo {scalar_t__ dir; int phys_buf; int bps; int buffer; struct sc_info* parent; } ;
typedef int kobj_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct sc_info*,int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static u_int32_t
FUNC_4(kobj_t VAR_3, void *VAR_4)
{
 struct sc_chinfo *VAR_5 = VAR_4;
 struct sc_info *VAR_6 = VAR_5->parent;
 u_int32_t VAR_7, VAR_8, VAR_9;

 FUNC_1(VAR_6->lock);
 if (VAR_5->dir == VAR_2) {
  VAR_7 = FUNC_0(VAR_6, VAR_0, 4);
 } else {
  VAR_7 = FUNC_0(VAR_6, VAR_1, 4);
 }
 FUNC_2(VAR_6->lock);

 VAR_9 = FUNC_3(VAR_5->buffer);
 VAR_8 = (VAR_7 - VAR_5->phys_buf + VAR_9 - VAR_5->bps) % VAR_9;

 return VAR_8;
}
