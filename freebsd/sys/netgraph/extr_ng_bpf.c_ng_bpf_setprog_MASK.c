
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ng_bpf_hookprog {scalar_t__ bpf_prog_len; int ifNotMatch; int ifMatch; int bpf_prog; } ;
typedef int hook_p ;
typedef TYPE_1__* hinfo_p ;
typedef int bpf_jit_filter ;
struct TYPE_3__ {struct ng_bpf_hookprog* prog; void* nomatch; void* match; int * jit_prog; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 TYPE_1__* FUNC_2 (int ) ;
 int FUNC_3 (struct ng_bpf_hookprog const*,struct ng_bpf_hookprog*,int) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int ,scalar_t__) ;
 scalar_t__ VAR_4 ;
 int FUNC_6 (int ,scalar_t__) ;
 int FUNC_7 (struct ng_bpf_hookprog*,int ) ;
 struct ng_bpf_hookprog* FUNC_8 (int,int ,int ) ;
 void* FUNC_9 (int ,int ) ;

__attribute__((used)) static int
FUNC_10(hook_p VAR_5, const struct ng_bpf_hookprog *VAR_6)
{
 const hinfo_p VAR_7 = FUNC_2(VAR_5);
 struct ng_bpf_hookprog *VAR_8;



 int VAR_9;


 if (VAR_6->bpf_prog_len > VAR_4 ||
     !FUNC_6(VAR_6->bpf_prog, VAR_6->bpf_prog_len))
  return (VAR_0);


 VAR_9 = FUNC_0(VAR_6->bpf_prog_len);
 VAR_8 = FUNC_8(VAR_9, VAR_2, VAR_3);
 if (VAR_8 == ((void*)0))
  return (VAR_1);
 FUNC_3(VAR_6, VAR_8, VAR_9);





 if (VAR_7->prog != ((void*)0))
  FUNC_7(VAR_7->prog, VAR_2);
 VAR_7->prog = VAR_8;







 VAR_7->match = FUNC_9(FUNC_1(VAR_5), VAR_7->prog->ifMatch);
 VAR_7->nomatch = FUNC_9(FUNC_1(VAR_5), VAR_7->prog->ifNotMatch);
 return (0);
}
