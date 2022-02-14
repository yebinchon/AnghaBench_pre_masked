
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sum {int rsc; } ;
struct ct_mixer {struct sum** sums; struct amixer** amixers; } ;
struct amixer {TYPE_1__* ops; int rsc; } ;
typedef enum CT_AMIXER_CTL { ____Placeholder_CT_AMIXER_CTL } CT_AMIXER_CTL ;
struct TYPE_2__ {int (* setup ) (struct amixer*,int *,int ,struct sum*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_0 (struct amixer*,int *,int ,struct sum*) ;
 int FUNC_1 (struct amixer*,int *,int ,struct sum*) ;
 int FUNC_2 (struct amixer*,int *,int ,struct sum*) ;
 int FUNC_3 (struct amixer*,int *,int ,struct sum*) ;
 int FUNC_4 (struct amixer*,int *,int ,struct sum*) ;
 int FUNC_5 (struct amixer*,int *,int ,struct sum*) ;
 int FUNC_6 (struct amixer*,int *,int ,struct sum*) ;
 int FUNC_7 (struct amixer*,int *,int ,struct sum*) ;
 int FUNC_8 (struct amixer*,int *,int ,struct sum*) ;
 int FUNC_9 (struct amixer*,int *,int ,struct sum*) ;
 int FUNC_10 (struct amixer*,int *,int ,struct sum*) ;
 int FUNC_11 (struct amixer*,int *,int ,struct sum*) ;
 int FUNC_12 (struct amixer*,int *,int ,struct sum*) ;
 int FUNC_13 (struct amixer*,int *,int ,struct sum*) ;
 int FUNC_14 (struct amixer*,int *,int ,struct sum*) ;
 int FUNC_15 (struct amixer*,int *,int ,struct sum*) ;
 int FUNC_16 (struct amixer*,int *,int ,struct sum*) ;
 int FUNC_17 (struct amixer*,int *,int ,struct sum*) ;
 int FUNC_18 (struct amixer*,int *,int ,struct sum*) ;
 int FUNC_19 (struct amixer*,int *,int ,struct sum*) ;
 int FUNC_20 (struct amixer*,int *,int ,struct sum*) ;
 int FUNC_21 (struct amixer*,int *,int ,struct sum*) ;
 int FUNC_22 (struct amixer*,int *,int ,struct sum*) ;
 int FUNC_23 (struct amixer*,int *,int ,struct sum*) ;

__attribute__((used)) static int FUNC_24(struct ct_mixer *VAR_19)
{
 struct sum *VAR_20;
 struct amixer *VAR_21, *VAR_22;
 enum CT_AMIXER_CTL VAR_23, VAR_24;




 for (VAR_23 = VAR_2, VAR_24 = VAR_17;
     VAR_23 <= VAR_4; VAR_23++, VAR_24++) {
  VAR_21 = VAR_19->amixers[VAR_23*VAR_15];
  VAR_20 = VAR_19->sums[VAR_24*VAR_15];
  VAR_21->ops->setup(VAR_21, &VAR_20->rsc, VAR_16, ((void*)0));
  VAR_21 = VAR_19->amixers[VAR_23*VAR_15+1];
  VAR_20 = VAR_19->sums[VAR_24*VAR_15+1];
  VAR_21->ops->setup(VAR_21, &VAR_20->rsc, VAR_16, ((void*)0));
 }


 for (VAR_23 = VAR_13, VAR_24 = VAR_2;
     VAR_23 <= VAR_14; VAR_23++, VAR_24++) {
  VAR_21 = VAR_19->amixers[VAR_23*VAR_15];
  VAR_22 = VAR_19->amixers[VAR_24*VAR_15];
  VAR_21->ops->setup(VAR_21, &VAR_22->rsc, VAR_16, ((void*)0));
  VAR_21 = VAR_19->amixers[VAR_23*VAR_15+1];
  VAR_22 = VAR_19->amixers[VAR_24*VAR_15+1];
  VAR_21->ops->setup(VAR_21, &VAR_22->rsc, VAR_16, ((void*)0));
 }


 VAR_21 = VAR_19->amixers[VAR_12*VAR_15];
 VAR_22 = VAR_19->amixers[VAR_2*VAR_15];
 VAR_21->ops->setup(VAR_21, &VAR_22->rsc, VAR_16, ((void*)0));
 VAR_21 = VAR_19->amixers[VAR_12*VAR_15+1];
 VAR_22 = VAR_19->amixers[VAR_2*VAR_15+1];
 VAR_21->ops->setup(VAR_21, &VAR_22->rsc, VAR_16, ((void*)0));


 for (VAR_23 = VAR_7, VAR_24 = VAR_17; VAR_23 <= VAR_9; VAR_23++, VAR_24++) {
  VAR_21 = VAR_19->amixers[VAR_23*VAR_15];
  VAR_20 = VAR_19->sums[VAR_24*VAR_15];
  VAR_21->ops->setup(VAR_21, ((void*)0), VAR_16, VAR_20);
  VAR_21 = VAR_19->amixers[VAR_23*VAR_15+1];
  VAR_20 = VAR_19->sums[VAR_24*VAR_15+1];
  VAR_21->ops->setup(VAR_21, ((void*)0), VAR_16, VAR_20);
 }


 VAR_21 = VAR_19->amixers[VAR_0*VAR_15];
 VAR_20 = VAR_19->sums[VAR_17*VAR_15];
 VAR_21->ops->setup(VAR_21, ((void*)0), VAR_16, VAR_20);
 VAR_21 = VAR_19->amixers[VAR_0*VAR_15+1];
 VAR_20 = VAR_19->sums[VAR_17*VAR_15+1];
 VAR_21->ops->setup(VAR_21, ((void*)0), VAR_16, VAR_20);


 VAR_21 = VAR_19->amixers[VAR_5*VAR_15];
 VAR_20 = VAR_19->sums[VAR_17*VAR_15];
 VAR_21->ops->setup(VAR_21, ((void*)0), VAR_16, VAR_20);
 VAR_21 = VAR_19->amixers[VAR_5*VAR_15+1];
 VAR_20 = VAR_19->sums[VAR_17*VAR_15+1];
 VAR_21->ops->setup(VAR_21, ((void*)0), VAR_16, VAR_20);


 VAR_21 = VAR_19->amixers[VAR_10*VAR_15];
 VAR_20 = VAR_19->sums[VAR_17*VAR_15];
 VAR_21->ops->setup(VAR_21, ((void*)0), VAR_16, VAR_20);
 VAR_21 = VAR_19->amixers[VAR_10*VAR_15+1];
 VAR_20 = VAR_19->sums[VAR_17*VAR_15+1];
 VAR_21->ops->setup(VAR_21, ((void*)0), VAR_16, VAR_20);


 VAR_21 = VAR_19->amixers[VAR_3*VAR_15];
 VAR_20 = VAR_19->sums[VAR_18*VAR_15];
 VAR_21->ops->setup(VAR_21, &VAR_20->rsc, VAR_16, ((void*)0));
 VAR_21 = VAR_19->amixers[VAR_3*VAR_15+1];
 VAR_20 = VAR_19->sums[VAR_18*VAR_15+1];
 VAR_21->ops->setup(VAR_21, &VAR_20->rsc, VAR_16, ((void*)0));


 VAR_21 = VAR_19->amixers[VAR_8*VAR_15];
 VAR_20 = VAR_19->sums[VAR_18*VAR_15];
 VAR_21->ops->setup(VAR_21, ((void*)0), VAR_16, VAR_20);
 VAR_21 = VAR_19->amixers[VAR_8*VAR_15+1];
 VAR_20 = VAR_19->sums[VAR_18*VAR_15+1];
 VAR_21->ops->setup(VAR_21, ((void*)0), VAR_16, VAR_20);


 VAR_21 = VAR_19->amixers[VAR_1*VAR_15];
 VAR_20 = VAR_19->sums[VAR_18*VAR_15];
 VAR_21->ops->setup(VAR_21, ((void*)0), VAR_16, VAR_20);
 VAR_21 = VAR_19->amixers[VAR_1*VAR_15+1];
 VAR_20 = VAR_19->sums[VAR_18*VAR_15+1];
 VAR_21->ops->setup(VAR_21, ((void*)0), VAR_16, VAR_20);


 VAR_21 = VAR_19->amixers[VAR_6*VAR_15];
 VAR_20 = VAR_19->sums[VAR_18*VAR_15];
 VAR_21->ops->setup(VAR_21, ((void*)0), VAR_16, VAR_20);
 VAR_21 = VAR_19->amixers[VAR_6*VAR_15+1];
 VAR_20 = VAR_19->sums[VAR_18*VAR_15+1];
 VAR_21->ops->setup(VAR_21, ((void*)0), VAR_16, VAR_20);


 VAR_21 = VAR_19->amixers[VAR_11*VAR_15];
 VAR_20 = VAR_19->sums[VAR_18*VAR_15];
 VAR_21->ops->setup(VAR_21, ((void*)0), VAR_16, VAR_20);
 VAR_21 = VAR_19->amixers[VAR_11*VAR_15+1];
 VAR_20 = VAR_19->sums[VAR_18*VAR_15+1];
 VAR_21->ops->setup(VAR_21, ((void*)0), VAR_16, VAR_20);

 return 0;
}
