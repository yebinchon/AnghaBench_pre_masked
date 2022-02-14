
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kinfo_proc {int ki_pid; int ki_tid; } ;



__attribute__((used)) static int
FUNC_0(const void *VAR_0, const void *VAR_1)
{
 int VAR_2;

 VAR_2 = ((const struct kinfo_proc *)VAR_0)->ki_pid -
     ((const struct kinfo_proc *)VAR_1)->ki_pid;
 if (VAR_2 != 0)
  return (VAR_2);
 VAR_2 = ((const struct kinfo_proc *)VAR_0)->ki_tid -
     ((const struct kinfo_proc *)VAR_1)->ki_tid;
 return (VAR_2);
}
