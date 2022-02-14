
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct o2nm_node {unsigned long nd_num; int nd_set_attributes; } ;
struct o2nm_cluster {int cl_nodes_lock; int cl_nodes_bitmap; struct o2nm_node** cl_nodes; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (unsigned long,int ) ;
 unsigned long FUNC_1 (char*,char**,int ) ;
 int FUNC_2 (int ,int *) ;
 struct o2nm_cluster* FUNC_3 (struct o2nm_node*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static ssize_t FUNC_6(struct o2nm_node *VAR_6, const char *VAR_7,
       size_t VAR_8)
{
 struct o2nm_cluster *VAR_9 = FUNC_3(VAR_6);
 unsigned long VAR_10;
 char *VAR_11 = (char *)VAR_7;

 VAR_10 = FUNC_1(VAR_11, &VAR_11, 0);
 if (!VAR_11 || (*VAR_11 && (*VAR_11 != '\n')))
  return -VAR_1;

 if (VAR_10 >= VAR_3)
  return -VAR_2;





 if (!FUNC_2(VAR_4, &VAR_6->nd_set_attributes) ||
     !FUNC_2(VAR_5, &VAR_6->nd_set_attributes))
  return -VAR_1;

 FUNC_4(&VAR_9->cl_nodes_lock);
 if (VAR_9->cl_nodes[VAR_10])
  VAR_11 = ((void*)0);
 else {
  VAR_9->cl_nodes[VAR_10] = VAR_6;
  VAR_6->nd_num = VAR_10;
  FUNC_0(VAR_10, VAR_9->cl_nodes_bitmap);
 }
 FUNC_5(&VAR_9->cl_nodes_lock);
 if (VAR_11 == ((void*)0))
  return -VAR_0;

 return VAR_8;
}
