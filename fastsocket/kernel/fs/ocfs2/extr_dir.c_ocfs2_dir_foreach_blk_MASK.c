
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct inode {int dummy; } ;
typedef int loff_t ;
typedef int filldir_t ;
struct TYPE_2__ {int ip_dyn_features; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int FUNC_1 (struct inode*,int *,int *,void*,int ,int*) ;
 int FUNC_2 (struct inode*,int *,int *,void*,int ,int*) ;

__attribute__((used)) static int FUNC_3(struct inode *VAR_1, u64 *VAR_2,
     loff_t *VAR_3, void *VAR_4, filldir_t VAR_5,
     int *VAR_6)
{
 if (FUNC_0(VAR_1)->ip_dyn_features & VAR_0)
  return FUNC_2(VAR_1, VAR_2, VAR_3, VAR_4,
      VAR_5, VAR_6);

 return FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5,
     VAR_6);
}
