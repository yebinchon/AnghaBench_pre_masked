
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct o2nm_node {scalar_t__ nd_num; unsigned long nd_local; int nd_set_attributes; } ;
struct o2nm_cluster {unsigned long cl_has_local; scalar_t__ cl_local_node; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t FUNC_0 (struct o2nm_node*) ;
 int FUNC_1 (struct o2nm_node*) ;
 unsigned long FUNC_2 (char*,char**,int ) ;
 int FUNC_3 (int ,int *) ;
 struct o2nm_cluster* FUNC_4 (struct o2nm_node*) ;

__attribute__((used)) static ssize_t FUNC_5(struct o2nm_node *VAR_6, const char *VAR_7,
         size_t VAR_8)
{
 struct o2nm_cluster *VAR_9 = FUNC_4(VAR_6);
 unsigned long VAR_10;
 char *VAR_11 = (char *)VAR_7;
 ssize_t VAR_12;

 VAR_10 = FUNC_2(VAR_11, &VAR_11, 0);
 if (!VAR_11 || (*VAR_11 && (*VAR_11 != '\n')))
  return -VAR_1;

 VAR_10 = !!VAR_10;



 if (!FUNC_3(VAR_3, &VAR_6->nd_set_attributes) ||
     !FUNC_3(VAR_4, &VAR_6->nd_set_attributes) ||
     !FUNC_3(VAR_5, &VAR_6->nd_set_attributes))
  return -VAR_1;



 if (VAR_10 && VAR_10 == VAR_9->cl_has_local &&
     VAR_9->cl_local_node != VAR_6->nd_num)
  return -VAR_0;


 if (VAR_10 && !VAR_9->cl_has_local) {
  VAR_12 = FUNC_0(VAR_6);
  if (VAR_12)
   return VAR_12;
 }

 if (!VAR_10 && VAR_9->cl_has_local &&
     VAR_9->cl_local_node == VAR_6->nd_num) {
  FUNC_1(VAR_6);
  VAR_9->cl_local_node = VAR_2;
 }

 VAR_6->nd_local = VAR_10;
 if (VAR_6->nd_local) {
  VAR_9->cl_has_local = VAR_10;
  VAR_9->cl_local_node = VAR_6->nd_num;
 }

 return VAR_8;
}
