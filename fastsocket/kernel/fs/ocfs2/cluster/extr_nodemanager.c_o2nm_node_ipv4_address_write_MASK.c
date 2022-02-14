
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rb_node {int dummy; } ;
struct o2nm_node {int nd_ipv4_address; int nd_ip_node; } ;
struct o2nm_cluster {int cl_nodes_lock; int cl_node_ip_tree; } ;
typedef int ssize_t ;
typedef int ipv4_addr ;
typedef int __be32 ;


 int FUNC_0 (unsigned int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,unsigned int) ;
 int FUNC_2 (int *,int *,int) ;
 scalar_t__ FUNC_3 (struct o2nm_cluster*,int ,struct rb_node***,struct rb_node**) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,struct rb_node*,struct rb_node**) ;
 int FUNC_6 (char const*,char*,unsigned int*,unsigned int*,unsigned int*,unsigned int*) ;
 struct o2nm_cluster* FUNC_7 (struct o2nm_node*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static ssize_t FUNC_10(struct o2nm_node *VAR_3,
         const char *VAR_4,
         size_t VAR_5)
{
 struct o2nm_cluster *VAR_6 = FUNC_7(VAR_3);
 int VAR_7, VAR_8;
 struct rb_node **VAR_9, *VAR_10;
 unsigned int VAR_11[4];
 __be32 VAR_12 = 0;

 VAR_7 = FUNC_6(VAR_4, "%3u.%3u.%3u.%3u", &VAR_11[3], &VAR_11[2],
       &VAR_11[1], &VAR_11[0]);
 if (VAR_7 != 4)
  return -VAR_1;

 for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_11); VAR_8++) {
  if (VAR_11[VAR_8] > 255)
   return -VAR_2;
  FUNC_1(&VAR_12, VAR_11[VAR_8] << (VAR_8 * 8));
 }

 VAR_7 = 0;
 FUNC_8(&VAR_6->cl_nodes_lock);
 if (FUNC_3(VAR_6, VAR_12, &VAR_9, &VAR_10))
  VAR_7 = -VAR_0;
 else {
  FUNC_5(&VAR_3->nd_ip_node, VAR_10, VAR_9);
  FUNC_4(&VAR_3->nd_ip_node, &VAR_6->cl_node_ip_tree);
 }
 FUNC_9(&VAR_6->cl_nodes_lock);
 if (VAR_7)
  return VAR_7;

 FUNC_2(&VAR_3->nd_ipv4_address, &VAR_12, sizeof(VAR_12));

 return VAR_5;
}
