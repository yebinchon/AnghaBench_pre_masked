
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sta_info {size_t* supp_op_classes; } ;


 int FUNC_0 (size_t*) ;
 size_t* FUNC_1 (int) ;
 int FUNC_2 (size_t*,int const*,size_t) ;

void FUNC_3(struct sta_info *VAR_0,
     const u8 *VAR_1,
     size_t VAR_2)
{
 if (!VAR_1)
  return;
 FUNC_0(VAR_0->supp_op_classes);
 VAR_0->supp_op_classes = FUNC_1(1 + VAR_2);
 if (!VAR_0->supp_op_classes)
  return;

 VAR_0->supp_op_classes[0] = VAR_2;
 FUNC_2(VAR_0->supp_op_classes + 1, VAR_1,
    VAR_2);
}
