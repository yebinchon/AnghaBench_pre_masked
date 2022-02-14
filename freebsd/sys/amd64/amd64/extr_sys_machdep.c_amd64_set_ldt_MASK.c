
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef size_t u_int ;
struct user_segment_descriptor {int sd_type; scalar_t__ sd_p; scalar_t__ sd_dpl; } ;
struct thread {size_t* td_retval; struct proc* td_proc; int td_pcb; } ;
struct proc_ldt {scalar_t__ ldt_base; } ;
struct mdproc {struct proc_ldt* md_ldt; } ;
struct proc {struct mdproc p_md; } ;
struct i386_ldt_args {int start; int num; scalar_t__ descs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct thread*,size_t,int,struct user_segment_descriptor*) ;
 int VAR_7 ;
 size_t VAR_8 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,int,int,void*) ;
 int FUNC_4 (int ,int ) ;
 struct proc_ldt* FUNC_5 (struct proc*,int ) ;

int
FUNC_6(struct thread *VAR_9, struct i386_ldt_args *VAR_10,
    struct user_segment_descriptor *VAR_11)
{
 struct mdproc *VAR_12;
 struct proc_ldt *VAR_13;
 struct user_segment_descriptor *VAR_14;
 struct proc *VAR_15;
 u_int VAR_16, VAR_17;
 int VAR_18;





 VAR_12 = &VAR_9->td_proc->p_md;
 VAR_18 = 0;

 FUNC_4(VAR_9->td_pcb, VAR_5);
 VAR_15 = VAR_9->td_proc;
 if (VAR_11 == ((void*)0)) {

  if (VAR_10->start == 0 && VAR_10->num == 0)
   VAR_10->num = VAR_8;
  if (VAR_10->num == 0)
   return (VAR_1);
  if ((VAR_13 = VAR_12->md_ldt) == ((void*)0) ||
      VAR_10->start >= VAR_8)
   return (0);
  VAR_16 = VAR_10->start + VAR_10->num;
  if (VAR_16 > VAR_8)
   VAR_16 = VAR_8;
  if (VAR_16 < VAR_10->start)
   return (VAR_1);
  FUNC_1(&VAR_7);
  for (VAR_17 = VAR_10->start; VAR_17 < VAR_16; VAR_17++)
   ((volatile uint64_t *)(VAR_13->ldt_base))[VAR_17] = 0;
  FUNC_2(&VAR_7);
  return (0);
 }

 if (!(VAR_10->start == VAR_4 && VAR_10->num == 1)) {

  VAR_16 = VAR_10->start + VAR_10->num;
  if (VAR_10->start >= VAR_8 ||
      VAR_16 > VAR_8 ||
      VAR_16 < VAR_10->start)
   return (VAR_1);
 }


 for (VAR_17 = 0; VAR_17 < VAR_10->num; VAR_17++) {
  VAR_14 = &VAR_11[VAR_17];

  switch (VAR_14->sd_type) {
  case 134:
   VAR_14->sd_p = 0;
   break;
  case 139:
  case 135:
  case 143:
  case 142:
  case 130:
  case 141:
  case 140:
  case 133:
  case 128:
  case 132:
  case 138:
  case 137:
  case 131:
  case 136:
  case 129:
   return (VAR_0);


  case 156:
  case 157:
  case 152:
  case 153:

   if (VAR_14->sd_p == 0)
    return (VAR_0);
   break;
  case 151:
  case 150:
  case 147:
  case 146:
  case 149:
  case 148:
  case 145:
  case 144:
  case 159:
  case 158:
  case 155:
  case 154:
   break;
  default:
   return(VAR_1);
  }


  if ((VAR_14->sd_p != 0) && (VAR_14->sd_dpl != VAR_6))
   return (VAR_0);
 }

 if (VAR_10->start == VAR_4 && VAR_10->num == 1) {

  FUNC_1(&VAR_7);
  VAR_13 = FUNC_5(VAR_15, 0);
  if (VAR_13 == ((void*)0)) {
   FUNC_2(&VAR_7);
   return (VAR_2);
  }





  VAR_17 = 16;
  VAR_14 = &((struct user_segment_descriptor *)(VAR_13->ldt_base))[VAR_17];
  for (; VAR_17 < VAR_8; ++VAR_17, ++VAR_14) {
   if (VAR_14->sd_type == 134)
    break;
  }
  if (VAR_17 >= VAR_8) {
   FUNC_2(&VAR_7);
   return (VAR_3);
  }
  VAR_10->start = VAR_17;
  VAR_18 = FUNC_0(VAR_9, VAR_17, 1, VAR_11);
  FUNC_2(&VAR_7);
 } else {
  VAR_16 = VAR_10->start + VAR_10->num;
  if (VAR_16 > VAR_8)
   return (VAR_1);
  FUNC_1(&VAR_7);
  if (FUNC_5(VAR_15, 0) != ((void*)0)) {
   VAR_18 = FUNC_0(VAR_9, VAR_10->start, VAR_10->num,
       VAR_11);
  }
  FUNC_2(&VAR_7);
 }
 if (VAR_18 == 0)
  VAR_9->td_retval[0] = VAR_10->start;
 return (VAR_18);
}
