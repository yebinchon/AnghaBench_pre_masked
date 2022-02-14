
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {int dummy; } ;
struct TYPE_2__ {int last_pid; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 int VAR_1 ;
 int FUNC_2 (unsigned long*,int,int ) ;
 int FUNC_3 () ;
 int VAR_2 ;
 int FUNC_4 (struct seq_file*,char*,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 TYPE_1__* FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct seq_file *VAR_3, void *VAR_4)
{
 unsigned long VAR_5[3];

 FUNC_2(VAR_5, VAR_0/200, 0);

 FUNC_4(VAR_3, "%lu.%02lu %lu.%02lu %lu.%02lu %ld/%d %d\n",
  FUNC_1(VAR_5[0]), FUNC_0(VAR_5[0]),
  FUNC_1(VAR_5[1]), FUNC_0(VAR_5[1]),
  FUNC_1(VAR_5[2]), FUNC_0(VAR_5[2]),
  FUNC_3(), VAR_2,
  FUNC_5(VAR_1)->last_pid);
 return 0;
}
