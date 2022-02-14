
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sd_lolimit; int sd_hilimit; int sd_lobase; int sd_hibase; int sd_type; int sd_dpl; int sd_p; int sd_gran; int sd_def32; int sd_xx; } ;
union descriptor {TYPE_1__ sd; } ;
struct thread {int* td_retval; } ;
struct linux_modify_ldt_args {int func; int bytecount; union descriptor* ptr; } ;
struct l_descriptor {int limit; int base_addr; int read_exec_only; int contents; int seg_not_present; int limit_in_pages; int seg_32bit; int entry_number; } ;
struct l_desc_struct {int dummy; } ;
struct i386_ldt_args {int num; union descriptor* descs; int start; } ;
typedef int ld ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (union descriptor*,struct l_descriptor*,int) ;
 int FUNC_1 (struct thread*,struct i386_ldt_args*) ;
 int FUNC_2 (struct thread*,struct i386_ldt_args*,union descriptor*) ;
 int FUNC_3 (struct thread*,char*) ;
 int FUNC_4 (char*,int ) ;

int
FUNC_5(struct thread *VAR_4, struct linux_modify_ldt_args *VAR_5)
{
 int VAR_6;
 struct i386_ldt_args VAR_7;
 struct l_descriptor VAR_8;
 union descriptor VAR_9;
 int VAR_10, VAR_11;

 switch (VAR_5->func) {
 case 0x00:
  VAR_7.start = 0;
  VAR_7.descs = VAR_5->ptr;
  VAR_7.num = VAR_5->bytecount / sizeof(union descriptor);
  VAR_6 = FUNC_1(VAR_4, &VAR_7);
  VAR_4->td_retval[0] *= sizeof(union descriptor);
  break;
 case 0x02:
  VAR_10 = 5*sizeof(struct l_desc_struct);
  if (VAR_10 > VAR_5->bytecount)
   VAR_10 = VAR_5->bytecount;
  for (VAR_11 = VAR_6 = 0; VAR_11 < VAR_10 && VAR_6 == 0; VAR_11++)
   VAR_6 = FUNC_4((char *)VAR_5->ptr + VAR_11, 0);
  VAR_4->td_retval[0] = VAR_11;
  break;
 case 0x01:
 case 0x11:
  if (VAR_5->bytecount != sizeof(VAR_8))
   return (VAR_0);

  VAR_6 = FUNC_0(VAR_5->ptr, &VAR_8, sizeof(VAR_8));
  if (VAR_6)
   return (VAR_6);

  VAR_7.start = VAR_8.entry_number;
  VAR_7.descs = &VAR_9;
  VAR_7.num = 1;
  VAR_9.sd.sd_lolimit = (VAR_8.limit & 0x0000ffff);
  VAR_9.sd.sd_hilimit = (VAR_8.limit & 0x000f0000) >> 16;
  VAR_9.sd.sd_lobase = (VAR_8.base_addr & 0x00ffffff);
  VAR_9.sd.sd_hibase = (VAR_8.base_addr & 0xff000000) >> 24;
  VAR_9.sd.sd_type = VAR_3 | ((VAR_8.read_exec_only ^ 1) << 1) |
   (VAR_8.contents << 2);
  VAR_9.sd.sd_dpl = 3;
  VAR_9.sd.sd_p = (VAR_8.seg_not_present ^ 1);
  VAR_9.sd.sd_xx = 0;
  VAR_9.sd.sd_def32 = VAR_8.seg_32bit;
  VAR_9.sd.sd_gran = VAR_8.limit_in_pages;
  VAR_6 = FUNC_2(VAR_4, &VAR_7, &VAR_9);
  break;
 default:
  VAR_6 = VAR_1;
  break;
 }

 if (VAR_6 == VAR_2) {
  FUNC_3(VAR_4, "modify_ldt needs kernel option USER_LDT");
  VAR_6 = VAR_1;
 }

 return (VAR_6);
}
