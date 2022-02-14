
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mempolicy {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct mempolicy*) ;
 int FUNC_1 (struct mempolicy*) ;

struct mempolicy *FUNC_2(struct mempolicy *VAR_1,
      struct mempolicy *VAR_2)
{
 if (!FUNC_1(VAR_2))
  return VAR_2;

 *VAR_1 = *VAR_2;
 VAR_1->flags &= ~VAR_0;
 FUNC_0(VAR_2);
 return VAR_1;
}
