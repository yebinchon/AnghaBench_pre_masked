
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct mm_struct {unsigned long total_vm; unsigned long hiwater_vm; unsigned long hiwater_rss; unsigned long shared_vm; unsigned long stack_vm; int start_code; int exec_vm; unsigned long reserved_vm; int locked_vm; int nr_ptes; int end_code; } ;
typedef int pte_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long FUNC_1 (struct mm_struct*,int ) ;
 unsigned long FUNC_2 (struct mm_struct*) ;
 int FUNC_3 (struct seq_file*,char*,unsigned long,unsigned long,int,unsigned long,unsigned long,unsigned long,int,unsigned long,unsigned long,int,unsigned long) ;
 int VAR_3 ;

void FUNC_4(struct seq_file *VAR_4, struct mm_struct *VAR_5)
{
 unsigned long VAR_6, VAR_7, VAR_8, VAR_9;
 unsigned long VAR_10, VAR_11, VAR_12, VAR_13;
 VAR_10 = VAR_11 = VAR_5->total_vm;
 if (VAR_10 < VAR_5->hiwater_vm)
  VAR_10 = VAR_5->hiwater_vm;
 VAR_12 = VAR_13 = FUNC_2(VAR_5);
 if (VAR_12 < VAR_5->hiwater_rss)
  VAR_12 = VAR_5->hiwater_rss;

 VAR_6 = VAR_5->total_vm - VAR_5->shared_vm - VAR_5->stack_vm;
 VAR_7 = (FUNC_0(VAR_5->end_code) - (VAR_5->start_code & VAR_0)) >> 10;
 VAR_8 = (VAR_5->exec_vm << (VAR_1-10)) - VAR_7;
 VAR_9 = FUNC_1(VAR_5, VAR_3);
 FUNC_3(VAR_4,
  "VmPeak:\t%8lu kB\n"
  "VmSize:\t%8lu kB\n"
  "VmLck:\t%8lu kB\n"
  "VmHWM:\t%8lu kB\n"
  "VmRSS:\t%8lu kB\n"
  "VmData:\t%8lu kB\n"
  "VmStk:\t%8lu kB\n"
  "VmExe:\t%8lu kB\n"
  "VmLib:\t%8lu kB\n"
  "VmPTE:\t%8lu kB\n"
  "VmSwap:\t%8lu kB\n",
  VAR_10 << (VAR_1-10),
  (VAR_11 - VAR_5->reserved_vm) << (VAR_1-10),
  VAR_5->locked_vm << (VAR_1-10),
  VAR_12 << (VAR_1-10),
  VAR_13 << (VAR_1-10),
  VAR_6 << (VAR_1-10),
  VAR_5->stack_vm << (VAR_1-10), VAR_7, VAR_8,
  (VAR_2*sizeof(pte_t)*VAR_5->nr_ptes) >> 10,
  VAR_9 << (VAR_1-10));
}
