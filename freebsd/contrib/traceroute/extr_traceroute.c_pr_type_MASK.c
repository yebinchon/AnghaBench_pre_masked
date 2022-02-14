
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;



char *
FUNC_0(register u_char VAR_0)
{
 static char *VAR_1[] = {
 "Echo Reply", "ICMP 1", "ICMP 2", "Dest Unreachable",
 "Source Quench", "Redirect", "ICMP 6", "ICMP 7",
 "Echo", "ICMP 9", "ICMP 10", "Time Exceeded",
 "Param Problem", "Timestamp", "Timestamp Reply", "Info Request",
 "Info Reply"
 };

 if (VAR_0 > 16)
  return("OUT-OF-RANGE");

 return(VAR_1[VAR_0]);
}
