
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_16__ {int code; } ;
struct slist {TYPE_7__ s; struct slist* next; } ;
struct edge {TYPE_1__* pred; struct edge* next; } ;
struct TYPE_14__ {int code; int k; } ;
struct TYPE_13__ {int code; } ;
struct TYPE_12__ {int code; } ;
struct block {scalar_t__* val; scalar_t__ out_use; scalar_t__ oval; TYPE_4__ s; TYPE_3__ ef; TYPE_2__ et; struct slist* stmts; struct edge* in_edges; } ;
struct TYPE_15__ {scalar_t__ done; } ;
typedef TYPE_5__ opt_state_t ;
typedef int compiler_state_t ;
typedef scalar_t__ bpf_int32 ;
struct TYPE_11__ {scalar_t__* val; } ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 size_t VAR_6 ;
 int FUNC_3 (char*,char*,int) ;
 int FUNC_4 (char*,int ,int) ;
 int FUNC_5 (TYPE_5__*,struct block*) ;
 int FUNC_6 (TYPE_5__*,struct block*) ;
 int FUNC_7 (int *,TYPE_5__*,TYPE_7__*,scalar_t__*,int) ;

__attribute__((used)) static void
FUNC_8(compiler_state_t *VAR_7, opt_state_t *VAR_8,
    struct block *VAR_9, int VAR_10)
{
 struct slist *VAR_11;
 struct edge *VAR_12;
 int VAR_13;
 bpf_int32 VAR_14, VAR_15;
 VAR_12 = VAR_9->in_edges;
 if (VAR_12 == 0) {




  FUNC_4((char *)VAR_9->val, 0, sizeof(VAR_9->val));
 } else {






  FUNC_3((char *)VAR_9->val, (char *)VAR_12->pred->val, sizeof(VAR_9->val));
  while ((VAR_12 = VAR_12->next) != ((void*)0)) {
   for (VAR_13 = 0; VAR_13 < VAR_4; ++VAR_13)
    if (VAR_9->val[VAR_13] != VAR_12->pred->val[VAR_13])
     VAR_9->val[VAR_13] = 0;
  }
 }
 VAR_14 = VAR_9->val[VAR_0];
 VAR_15 = VAR_9->val[VAR_6];
 for (VAR_11 = VAR_9->stmts; VAR_11; VAR_11 = VAR_11->next)
  FUNC_7(VAR_7, VAR_8, &VAR_11->s, VAR_9->val, VAR_10);
 if (VAR_10 &&
     ((VAR_9->out_use == 0 &&
       VAR_14 != VAR_5 && VAR_9->val[VAR_0] == VAR_14 &&
       VAR_15 != VAR_5 && VAR_9->val[VAR_6] == VAR_15) ||
      FUNC_0(VAR_9->s.code) == VAR_3)) {
  if (VAR_9->stmts != 0) {
   VAR_9->stmts = 0;
   VAR_8->done = 0;
  }
 } else {
  FUNC_6(VAR_8, VAR_9);
  FUNC_5(VAR_8, VAR_9);
 }



 if (FUNC_1(VAR_9->s.code) == VAR_2)
  VAR_9->oval = FUNC_2(VAR_9->s.k);
 else
  VAR_9->oval = VAR_9->val[VAR_6];
 VAR_9->et.code = VAR_9->s.code;
 VAR_9->ef.code = -VAR_9->s.code;
}
