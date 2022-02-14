
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int ;
struct TYPE_2__ {int k; } ;
struct slist {TYPE_1__ s; } ;
struct block {struct slist* stmts; } ;
typedef int compiler_state_t ;
typedef int bpf_int32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int VAR_6 ;
 int FUNC_1 () ;
 struct block* FUNC_2 (int *,int ,int ,int ,int ) ;
 struct block* FUNC_3 (int *,int ,int ,int ,int ) ;
 struct block* FUNC_4 (int *,int ,int ,int ,int ) ;
 int FUNC_5 (struct block*) ;
 struct block* FUNC_6 (int *,int ) ;
 struct slist* FUNC_7 (int *,int) ;

struct block *
FUNC_8(compiler_state_t *VAR_7, int VAR_8, int VAR_9, int VAR_10)
{
 struct block *VAR_11;
 struct slist *VAR_12;

 switch (VAR_8) {
 default:
  FUNC_1();

 case '=':
  return FUNC_2(VAR_7, VAR_6, (u_int)VAR_9, VAR_2, (bpf_int32)VAR_10);

 case '<':
  VAR_11 = FUNC_4(VAR_7, VAR_6, (u_int)VAR_9, VAR_2, (bpf_int32)VAR_10);
  return VAR_11;

 case '>':
  VAR_11 = FUNC_3(VAR_7, VAR_6, (u_int)VAR_9, VAR_2, (bpf_int32)VAR_10);
  return VAR_11;

 case '|':
  VAR_12 = FUNC_7(VAR_7, VAR_0|VAR_5|VAR_4);
  break;

 case '&':
  VAR_12 = FUNC_7(VAR_7, VAR_0|VAR_1|VAR_4);
  break;
 }
 VAR_12->s.k = VAR_10;
 VAR_11 = FUNC_6(VAR_7, FUNC_0(VAR_3));
 VAR_11->stmts = VAR_12;
 FUNC_5(VAR_11);

 return VAR_11;
}
