
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int32_t ;
struct tr_rchinfo {int buffer; struct tr_info* parent; } ;
struct tr_info {int dummy; } ;
typedef int kobj_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct tr_info*,int ,int) ;

__attribute__((used)) static u_int32_t
FUNC_2(kobj_t VAR_1, void *VAR_2)
{
  struct tr_rchinfo *VAR_3 = VAR_2;
 struct tr_info *VAR_4 = VAR_3->parent;


 return FUNC_1(VAR_4, VAR_0, 4) - FUNC_0(VAR_3->buffer);
}
