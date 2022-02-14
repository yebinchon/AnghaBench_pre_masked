
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int zfs_handle_t ;
struct TYPE_6__ {TYPE_1__* lbh; } ;
typedef TYPE_2__ prop_data_t ;
struct TYPE_5__ {int root; int lzh; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,TYPE_2__*) ;
 int * FUNC_2 (int ,int ,int ) ;

int
FUNC_3(prop_data_t *VAR_3)
{
 zfs_handle_t *VAR_4;

 if ((VAR_4 = FUNC_2(VAR_3->lbh->lzh, VAR_3->lbh->root,
     VAR_1)) == ((void*)0))
  return (VAR_0);


 FUNC_1(VAR_4, VAR_2, VAR_3);

 FUNC_0(VAR_4);

 return (0);
}
