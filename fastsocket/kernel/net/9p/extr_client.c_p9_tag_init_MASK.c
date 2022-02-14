
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct p9_client {scalar_t__ max_tag; int * tagpool; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 () ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct p9_client *VAR_0)
{
 int VAR_1 = 0;

 VAR_0->tagpool = FUNC_2();
 if (FUNC_0(VAR_0->tagpool)) {
  VAR_1 = FUNC_1(VAR_0->tagpool);
  VAR_0->tagpool = ((void*)0);
  goto error;
 }

 FUNC_3(VAR_0->tagpool);

 VAR_0->max_tag = 0;
error:
 return VAR_1;
}
