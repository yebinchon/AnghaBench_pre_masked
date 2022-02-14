
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_1(void)
{
 FUNC_0(VAR_0,
"test-ratelim [-v] [-n INT] [-d INT] [-c INT] [-g INT] [-t INT]\n\n"
"Pushes bytes through a number of possibly rate-limited connections, and\n"
"displays average throughput.\n\n"
"  -n INT: Number of connections to open (default: 30)\n"
"  -d INT: Duration of the test in seconds (default: 5 sec)\n");
 FUNC_0(VAR_0,
"  -c INT: Connection-rate limit applied to each connection in bytes per second\n"
"	   (default: None.)\n"
"  -g INT: Group-rate limit applied to sum of all usage in bytes per second\n"
"	   (default: None.)\n"
"  -G INT: drain INT bytes from the group limit every tick. (default: 0)\n"
"  -t INT: Granularity of timing, in milliseconds (default: 1000 msec)\n");
}
