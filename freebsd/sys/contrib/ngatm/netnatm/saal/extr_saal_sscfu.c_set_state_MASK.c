
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sscfu {size_t state; int aarg; } ;
typedef enum sscfu_state { ____Placeholder_sscfu_state } sscfu_state ;


 int VAR_0 ;
 int FUNC_0 (struct sscfu*,int ,struct sscfu*) ;
 int * VAR_1 ;

__attribute__((used)) static __inline void
FUNC_1(struct sscfu *VAR_2, enum sscfu_state VAR_3)
{
 FUNC_0(VAR_2, VAR_0, (VAR_2, VAR_2->aarg,
     "change state from %s to %s",
     VAR_1[VAR_2->state], VAR_1[VAR_3]));
 VAR_2->state = VAR_3;
}
