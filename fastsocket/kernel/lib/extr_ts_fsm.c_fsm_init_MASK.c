
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ts_fsm_token {scalar_t__ type; scalar_t__ recur; } ;
struct ts_fsm {unsigned int ntokens; struct ts_fsm_token* tokens; } ;
struct ts_config {int flags; } ;
typedef int gfp_t ;


 int VAR_0 ;
 struct ts_config* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct ts_config*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 struct ts_config* FUNC_2 (size_t,int ) ;
 int FUNC_3 (struct ts_fsm_token*,void const*,unsigned int) ;
 scalar_t__* VAR_5 ;
 struct ts_fsm* FUNC_4 (struct ts_config*) ;

__attribute__((used)) static struct ts_config *FUNC_5(const void *VAR_6, unsigned int VAR_7,
        gfp_t VAR_8, int VAR_9)
{
 int VAR_10, VAR_11 = -VAR_0;
 struct ts_config *VAR_12;
 struct ts_fsm *VAR_13;
 struct ts_fsm_token *VAR_14 = (struct ts_fsm_token *) VAR_6;
 unsigned int VAR_15 = VAR_7 / sizeof(*VAR_14);
 size_t VAR_16 = sizeof(*VAR_13) + VAR_7;

 if (VAR_7 % sizeof(struct ts_fsm_token) || VAR_15 < 1)
  goto errout;

 if (VAR_9 & VAR_4)
  goto errout;

 for (VAR_10 = 0; VAR_10 < VAR_15; VAR_10++) {
  struct ts_fsm_token *VAR_17 = &VAR_14[VAR_10];

  if (VAR_17->type > VAR_3 || VAR_17->recur > VAR_2)
   goto errout;

  if (VAR_17->recur == VAR_1 &&
      (VAR_10 != 0 || VAR_10 == (VAR_15 - 1)))
   goto errout;
 }

 VAR_12 = FUNC_2(VAR_16, VAR_8);
 if (FUNC_1(VAR_12))
  return VAR_12;

 VAR_12->flags = VAR_9;
 VAR_13 = FUNC_4(VAR_12);
 VAR_13->ntokens = VAR_15;
 FUNC_3(VAR_13->tokens, VAR_6, VAR_7);

 for (VAR_10 = 0; VAR_10 < VAR_13->ntokens; VAR_10++) {
  struct ts_fsm_token *VAR_18 = &VAR_13->tokens[VAR_10];
  VAR_18->type = VAR_5[VAR_18->type];
 }

 return VAR_12;

errout:
 return FUNC_0(VAR_11);
}
