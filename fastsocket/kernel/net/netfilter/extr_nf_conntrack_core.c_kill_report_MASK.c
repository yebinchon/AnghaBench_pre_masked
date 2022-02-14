
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nf_conn {int status; } ;
struct __nf_ct_flush_report {int report; int pid; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,struct nf_conn*,int ,int ) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static int FUNC_2(struct nf_conn *VAR_2, void *VAR_3)
{
 struct __nf_ct_flush_report *VAR_4 = (struct __nf_ct_flush_report *)VAR_3;


 if (FUNC_0(VAR_0, VAR_2,
          VAR_4->pid, VAR_4->report) < 0)
  return 1;


 FUNC_1(VAR_1, &VAR_2->status);
 return 1;
}
