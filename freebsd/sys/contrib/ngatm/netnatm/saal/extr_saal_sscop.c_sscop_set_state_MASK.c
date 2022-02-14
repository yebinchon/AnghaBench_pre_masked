
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int ;
struct sscop {size_t state; int sigs; int saved_sigs; int aarg; } ;


 int FUNC_0 (int *,int *) ;
 int VAR_0 ;
 int FUNC_1 (struct sscop*,int ,struct sscop*) ;
 int * VAR_1 ;

__attribute__((used)) static void
FUNC_2(struct sscop *VAR_2, u_int VAR_3)
{
 FUNC_1(VAR_2, VAR_0, (VAR_2, VAR_2->aarg,
     "changing state from %s to %s",
     VAR_1[VAR_2->state], VAR_1[VAR_3]));

 VAR_2->state = VAR_3;
 FUNC_0(&VAR_2->saved_sigs, &VAR_2->sigs);
}
