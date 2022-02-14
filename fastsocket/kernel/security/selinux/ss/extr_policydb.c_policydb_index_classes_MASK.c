
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int nprim; int table; } ;
struct TYPE_3__ {int nprim; int table; } ;
struct policydb {TYPE_2__ p_classes; void* p_class_val_to_name; void* class_val_to_struct; TYPE_1__ p_commons; void* p_common_val_to_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,struct policydb*) ;
 void* FUNC_1 (int,int ) ;

__attribute__((used)) static int FUNC_2(struct policydb *VAR_4)
{
 int VAR_5;

 VAR_4->p_common_val_to_name =
  FUNC_1(VAR_4->p_commons.nprim * sizeof(char *), VAR_1);
 if (!VAR_4->p_common_val_to_name) {
  VAR_5 = -VAR_0;
  goto out;
 }

 VAR_5 = FUNC_0(VAR_4->p_commons.table, VAR_3, VAR_4);
 if (VAR_5)
  goto out;

 VAR_4->class_val_to_struct =
  FUNC_1(VAR_4->p_classes.nprim * sizeof(*(VAR_4->class_val_to_struct)), VAR_1);
 if (!VAR_4->class_val_to_struct) {
  VAR_5 = -VAR_0;
  goto out;
 }

 VAR_4->p_class_val_to_name =
  FUNC_1(VAR_4->p_classes.nprim * sizeof(char *), VAR_1);
 if (!VAR_4->p_class_val_to_name) {
  VAR_5 = -VAR_0;
  goto out;
 }

 VAR_5 = FUNC_0(VAR_4->p_classes.table, VAR_2, VAR_4);
out:
 return VAR_5;
}
