
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;

int FUNC_1(void)
{
 return FUNC_0("Permission error - are you root?\n"
      "Consider tweaking /proc/sys/kernel/perf_event_paranoid:\n"
      " -1 - Not paranoid at all\n"
      "  0 - Disallow raw tracepoint access for unpriv\n"
      "  1 - Disallow cpu events for unpriv\n"
      "  2 - Disallow kernel profiling for unpriv\n");
}
