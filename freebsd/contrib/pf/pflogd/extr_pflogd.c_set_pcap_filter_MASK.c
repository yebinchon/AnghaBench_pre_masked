
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_program {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int ) ;
 scalar_t__ FUNC_1 (int ,struct bpf_program*,int ,int ,int ) ;
 int FUNC_2 (struct bpf_program*) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,struct bpf_program*) ;

void
FUNC_5(void)
{
 struct bpf_program VAR_4;

 if (FUNC_1(VAR_3, &VAR_4, VAR_2, VAR_1, 0) < 0)
  FUNC_0(VAR_0, "%s", FUNC_3(VAR_3));
 else {
  if (FUNC_4(VAR_3, &VAR_4) < 0)
   FUNC_0(VAR_0, "%s", FUNC_3(VAR_3));
  FUNC_2(&VAR_4);
 }
}
