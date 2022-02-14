
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sscfu_sig {int sig; struct SSCFU_MBUF_T* m; } ;
struct sscfu {int inhand; size_t state; int sigs; int aarg; } ;
struct SSCFU_MBUF_T {int dummy; } ;
typedef enum saal_sig { ____Placeholder_saal_sig } saal_sig ;


 int VAR_0 ;
 int FUNC_0 (int *,struct sscfu_sig*) ;
 int FUNC_1 (struct sscfu_sig*) ;
 int VAR_1 ;
 int FUNC_2 (struct sscfu*,int ,struct sscfu*) ;
 int * VAR_2 ;
 int * VAR_3 ;
 int FUNC_3 (struct sscfu*,int,struct SSCFU_MBUF_T*) ;
 int FUNC_4 (struct sscfu*) ;

int
FUNC_5(struct sscfu *VAR_4, enum saal_sig VAR_5, struct SSCFU_MBUF_T *VAR_6)
{
 struct sscfu_sig *VAR_7;

 if (VAR_4->inhand) {
  FUNC_2(VAR_4, VAR_1, (VAR_4, VAR_4->aarg,
      "queuing user signal %s(%s)",
      VAR_2[VAR_5], VAR_3[VAR_4->state]));
  FUNC_1(VAR_7);
  if (VAR_7 == ((void*)0))
   return (VAR_0);
  VAR_7->sig = VAR_5;
  VAR_7->m = VAR_6;
  FUNC_0(&VAR_4->sigs, VAR_7);
  return (0);
 }

 VAR_4->inhand = 1;
 FUNC_3(VAR_4, VAR_5, VAR_6);
 FUNC_4(VAR_4);
 return (0);
}
