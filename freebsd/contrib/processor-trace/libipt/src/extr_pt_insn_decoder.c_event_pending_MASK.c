
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_insn_decoder {int process_event; int status; int event; int query; } ;


 int FUNC_0 (int *,int *,int) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline int FUNC_1(struct pt_insn_decoder *VAR_2)
{
 int VAR_3;

 if (!VAR_2)
  return -VAR_0;

 if (VAR_2->process_event)
  return 1;

 VAR_3 = VAR_2->status;
 if (!(VAR_3 & VAR_1))
  return 0;

 VAR_3 = FUNC_0(&VAR_2->query, &VAR_2->event,
         sizeof(VAR_2->event));
 if (VAR_3 < 0)
  return VAR_3;

 VAR_2->process_event = 1;
 VAR_2->status = VAR_3;
 return 1;
}
