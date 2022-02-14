
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct p9_idpool {int pool; int lock; } ;


 int VAR_0 ;
 struct p9_idpool* FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 struct p9_idpool* FUNC_2 (int,int ) ;
 int FUNC_3 (int *) ;

struct p9_idpool *FUNC_4(void)
{
 struct p9_idpool *VAR_2;

 VAR_2 = FUNC_2(sizeof(struct p9_idpool), VAR_1);
 if (!VAR_2)
  return FUNC_0(-VAR_0);

 FUNC_3(&VAR_2->lock);
 FUNC_1(&VAR_2->pool);

 return VAR_2;
}
