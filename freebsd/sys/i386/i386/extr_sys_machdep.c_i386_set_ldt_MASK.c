
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int sd_type; scalar_t__ sd_p; scalar_t__ sd_dpl; } ;
union descriptor {TYPE_2__ sd; } ;
typedef int uint64_t ;
typedef size_t u_int ;
struct thread {size_t* td_retval; TYPE_1__* td_proc; } ;
struct proc_ldt {size_t ldt_len; scalar_t__ ldt_base; } ;
struct mdproc {struct proc_ldt* md_ldt; } ;
struct i386_ldt_args {int start; int num; scalar_t__ descs; } ;
struct TYPE_3__ {struct mdproc p_md; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int *,int ) ;
 int VAR_6 ;
 int FUNC_1 (struct thread*,size_t) ;
 int FUNC_2 (struct thread*,size_t,int,union descriptor*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,int,int,void*) ;

int
FUNC_6(struct thread *VAR_7, struct i386_ldt_args *VAR_8,
    union descriptor *VAR_9)
{
 struct mdproc *VAR_10;
 struct proc_ldt *VAR_11;
 union descriptor *VAR_12;
 u_int VAR_13, VAR_14;
 int VAR_15;





 VAR_15 = 0;
 VAR_10 = &VAR_7->td_proc->p_md;

 if (VAR_9 == ((void*)0)) {

  if (VAR_8->start == 0 && VAR_8->num == 0) {




   VAR_8->start = VAR_4;
   VAR_8->num = VAR_3 - VAR_4;
  }
  FUNC_3(&VAR_6);
  if ((VAR_11 = VAR_10->md_ldt) == ((void*)0) ||
      VAR_8->start >= VAR_11->ldt_len) {
   FUNC_4(&VAR_6);
   return (0);
  }
  VAR_13 = VAR_8->start + VAR_8->num;
  if (VAR_13 > VAR_11->ldt_len)
   VAR_13 = VAR_11->ldt_len;
  for (VAR_14 = VAR_8->start; VAR_14 < VAR_13; VAR_14++)
   FUNC_0(&((uint64_t *)(VAR_11->ldt_base))[VAR_14],
       0);
  FUNC_4(&VAR_6);
  return (0);
 }

 if (VAR_8->start != VAR_2 || VAR_8->num != 1) {

  VAR_13 = VAR_8->start + VAR_8->num;
  if (VAR_8->start >= VAR_3 || VAR_13 > VAR_3)
   return (VAR_1);
 }


 for (VAR_14 = 0; VAR_14 < VAR_8->num; VAR_14++) {
  VAR_12 = &VAR_9[VAR_14];

  switch (VAR_12->sd.sd_type) {
  case 132:
   VAR_12->sd.sd_p = 0;
   break;
  case 139:
  case 133:
  case 143:
  case 128:
  case 141:
  case 140:
  case 131:
  case 134:
  case 130:
  case 138:
  case 129:
  case 136:
  case 135:
  case 142:
  case 137:
   return (VAR_0);


  case 156:
  case 157:
  case 152:
  case 153:

   if (VAR_12->sd.sd_p == 0)
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
   return (VAR_1);
  }


  if (VAR_12->sd.sd_p != 0 && VAR_12->sd.sd_dpl != VAR_5)
   return (VAR_0);
 }

 if (VAR_8->start == VAR_2 && VAR_8->num == 1) {

  FUNC_3(&VAR_6);
  if ((VAR_11 = VAR_10->md_ldt) == ((void*)0)) {
   if ((VAR_15 = FUNC_1(VAR_7, VAR_4 + 1))) {
    FUNC_4(&VAR_6);
    return (VAR_15);
   }
   VAR_11 = VAR_10->md_ldt;
  }
again:




  VAR_12 = &((union descriptor *)(VAR_11->ldt_base))[VAR_4];
  for (VAR_14 = VAR_4; VAR_14 < VAR_11->ldt_len; ++VAR_14) {
   if (VAR_12->sd.sd_type == 132)
    break;
   VAR_12++;
  }
  if (VAR_14 >= VAR_11->ldt_len) {
   if ((VAR_15 = FUNC_1(VAR_7, VAR_11->ldt_len+1))) {
    FUNC_4(&VAR_6);
    return (VAR_15);
   }
   goto again;
  }
  VAR_8->start = VAR_14;
  VAR_15 = FUNC_2(VAR_7, VAR_14, 1, VAR_9);
  FUNC_4(&VAR_6);
 } else {
  VAR_13 = VAR_8->start + VAR_8->num;
  FUNC_3(&VAR_6);
  if (!(VAR_15 = FUNC_1(VAR_7, VAR_13))) {
   VAR_15 = FUNC_2(VAR_7, VAR_8->start, VAR_8->num,
       VAR_9);
  }
  FUNC_4(&VAR_6);
 }
 if (VAR_15 == 0)
  VAR_7->td_retval[0] = VAR_8->start;
 return (VAR_15);
}
