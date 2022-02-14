
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int k; } ;
struct slist {TYPE_1__ s; } ;
struct TYPE_4__ {int k; } ;
struct block {TYPE_2__ s; struct slist* stmts; } ;
typedef enum e_offrel { ____Placeholder_e_offrel } e_offrel ;
typedef int compiler_state_t ;
typedef int bpf_u_int32 ;
typedef int bpf_int32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 struct slist* FUNC_1 (int *,int,int,int) ;
 int FUNC_2 (struct block*) ;
 struct block* FUNC_3 (int *,int ) ;
 struct slist* FUNC_4 (int *,int) ;
 int FUNC_5 (struct slist*,struct slist*) ;

__attribute__((used)) static struct block *
FUNC_6(compiler_state_t *VAR_5, enum e_offrel VAR_6, bpf_u_int32 VAR_7,
    bpf_u_int32 VAR_8, bpf_u_int32 VAR_9, bpf_u_int32 VAR_10, int VAR_11,
    bpf_int32 VAR_12)
{
 struct slist *VAR_13, *VAR_14;
 struct block *VAR_15;

 VAR_13 = FUNC_1(VAR_5, VAR_6, VAR_7, VAR_8);

 if (VAR_9 != 0xffffffff) {
  VAR_14 = FUNC_4(VAR_5, VAR_0|VAR_1|VAR_4);
  VAR_14->s.k = VAR_9;
  FUNC_5(VAR_13, VAR_14);
 }

 VAR_15 = FUNC_3(VAR_5, FUNC_0(VAR_10));
 VAR_15->stmts = VAR_13;
 VAR_15->s.k = VAR_12;
 if (VAR_11 && (VAR_10 == VAR_3 || VAR_10 == VAR_2))
  FUNC_2(VAR_15);
 return VAR_15;
}
