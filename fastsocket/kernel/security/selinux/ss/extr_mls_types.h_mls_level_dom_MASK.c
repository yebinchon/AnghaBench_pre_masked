
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mls_level {scalar_t__ sens; int cat; } ;


 scalar_t__ FUNC_0 (int *,int *) ;
 int VAR_0 ;

__attribute__((used)) static inline int FUNC_1(struct mls_level *VAR_1, struct mls_level *VAR_2)
{
 if (!VAR_0)
  return 1;

 return ((VAR_1->sens >= VAR_2->sens) &&
  FUNC_0(&VAR_1->cat, &VAR_2->cat));
}
