
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u_int ;
struct sscop_msg {int dummy; } ;
struct sscop {size_t state; int aarg; } ;
struct TYPE_2__ {void (* func ) (struct sscop*,struct sscop_msg*) ;int (* cond ) (struct sscop*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sscop_msg*) ;
 int FUNC_1 (struct sscop*,int ,struct sscop*) ;
 int * VAR_2 ;
 TYPE_1__** VAR_3 ;
 int * VAR_4 ;
 int FUNC_2 (struct sscop*) ;
 void FUNC_3 (struct sscop*,struct sscop_msg*) ;

__attribute__((used)) static int
FUNC_4(struct sscop *VAR_5, u_int VAR_6, struct sscop_msg *VAR_7)
{
 void (*VAR_8)(struct sscop *, struct sscop_msg *);
 int (*VAR_9)(struct sscop *);

 VAR_8 = VAR_3[VAR_5->state][VAR_6].func;
 VAR_9 = VAR_3[VAR_5->state][VAR_6].cond;

 if(VAR_8 == ((void*)0)) {
  FUNC_1(VAR_5, VAR_0, (VAR_5, VAR_5->aarg,
      "no handler for %s in state %s - ignored",
      VAR_2[VAR_6], VAR_4[VAR_5->state]));
  FUNC_0(VAR_7);
  return 1;
 }
 if(VAR_9 == ((void*)0) || (*VAR_9)(VAR_5)) {
  FUNC_1(VAR_5, VAR_1, (VAR_5, VAR_5->aarg,
      "executing %s in %s", VAR_2[VAR_6],
      VAR_4[VAR_5->state]));
  (*VAR_8)(VAR_5, VAR_7);
  return 1;
 }
 FUNC_1(VAR_5, VAR_1, (VAR_5, VAR_5->aarg,
     "delaying %s in %s", VAR_2[VAR_6],
     VAR_4[VAR_5->state]));

 return 0;
}
