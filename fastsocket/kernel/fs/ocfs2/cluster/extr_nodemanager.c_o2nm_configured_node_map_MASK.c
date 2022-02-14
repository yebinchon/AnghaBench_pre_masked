
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct o2nm_cluster {int cl_nodes_lock; int cl_nodes_bitmap; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (unsigned long*,int ,int) ;
 struct o2nm_cluster* VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int FUNC_4(unsigned long *VAR_2, unsigned VAR_3)
{
 struct o2nm_cluster *VAR_4 = VAR_1;

 FUNC_0(VAR_3 < (sizeof(VAR_4->cl_nodes_bitmap)));

 if (VAR_4 == ((void*)0))
  return -VAR_0;

 FUNC_2(&VAR_4->cl_nodes_lock);
 FUNC_1(VAR_2, VAR_4->cl_nodes_bitmap, sizeof(VAR_4->cl_nodes_bitmap));
 FUNC_3(&VAR_4->cl_nodes_lock);

 return 0;
}
