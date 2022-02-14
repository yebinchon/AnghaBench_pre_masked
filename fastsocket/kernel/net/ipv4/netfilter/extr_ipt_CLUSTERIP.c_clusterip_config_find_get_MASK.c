
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clusterip_config {int entries; int refcount; } ;
typedef int __be32 ;


 struct clusterip_config* FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static inline struct clusterip_config *
FUNC_4(__be32 VAR_1, int VAR_2)
{
 struct clusterip_config *VAR_3;

 FUNC_2(&VAR_0);
 VAR_3 = FUNC_0(VAR_1);
 if (!VAR_3) {
  FUNC_3(&VAR_0);
  return ((void*)0);
 }
 FUNC_1(&VAR_3->refcount);
 if (VAR_2)
  FUNC_1(&VAR_3->entries);
 FUNC_3(&VAR_0);

 return VAR_3;
}
