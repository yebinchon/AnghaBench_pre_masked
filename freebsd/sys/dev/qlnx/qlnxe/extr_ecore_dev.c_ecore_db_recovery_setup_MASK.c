
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ db_recovery_counter; int lock; int list; } ;
struct ecore_hwfn {TYPE_1__ db_recovery_info; TYPE_2__* p_dev; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;
struct TYPE_4__ {int db_size; } ;


 int FUNC_0 (TYPE_2__*,char*) ;
 int FUNC_1 (struct ecore_hwfn*,int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct ecore_hwfn*,int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static enum _ecore_status_t FUNC_5(struct ecore_hwfn *VAR_4)
{
 FUNC_1(VAR_4, VAR_1, "Setting up db recovery\n");


 if (!VAR_4->p_dev->db_size) {
  FUNC_0(VAR_4->p_dev, "db_size not set\n");
  return VAR_0;
 }

 FUNC_2(&VAR_4->db_recovery_info.list);




 FUNC_4(&VAR_4->db_recovery_info.lock);
 VAR_4->db_recovery_info.db_recovery_counter = 0;

 return VAR_3;
}
