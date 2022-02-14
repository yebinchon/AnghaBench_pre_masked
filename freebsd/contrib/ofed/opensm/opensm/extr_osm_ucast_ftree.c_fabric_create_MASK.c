
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int io_guid_tbl; int cn_guid_tbl; int sw_by_tuple_tbl; int sw_tbl; int hca_tbl; } ;
typedef TYPE_1__ ftree_fabric_t ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;

__attribute__((used)) static ftree_fabric_t *FUNC_3()
{
 ftree_fabric_t *VAR_0 =
     (ftree_fabric_t *) FUNC_1(sizeof(ftree_fabric_t));
 if (VAR_0 == ((void*)0))
  return ((void*)0);

 FUNC_2(VAR_0, 0, sizeof(ftree_fabric_t));

 FUNC_0(&VAR_0->hca_tbl);
 FUNC_0(&VAR_0->sw_tbl);
 FUNC_0(&VAR_0->sw_by_tuple_tbl);
 FUNC_0(&VAR_0->cn_guid_tbl);
 FUNC_0(&VAR_0->io_guid_tbl);

 return VAR_0;
}
