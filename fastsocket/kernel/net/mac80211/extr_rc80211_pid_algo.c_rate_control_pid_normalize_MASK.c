
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rc_pid_rateinfo {int diff; } ;
struct rc_pid_info {int norm_offset; struct rc_pid_rateinfo* rinfo; } ;



__attribute__((used)) static void FUNC_0(struct rc_pid_info *VAR_0, int VAR_1)
{
 int VAR_2, VAR_3 = VAR_0->norm_offset;
 struct rc_pid_rateinfo *VAR_4 = VAR_0->rinfo;

 if (VAR_4[0].diff > VAR_3)
  VAR_4[0].diff -= VAR_3;
 else if (VAR_4[0].diff < -VAR_3)
  VAR_4[0].diff += VAR_3;
 for (VAR_2 = 0; VAR_2 < VAR_1 - 1; VAR_2++)
  if (VAR_4[VAR_2 + 1].diff > VAR_4[VAR_2].diff + VAR_3)
   VAR_4[VAR_2 + 1].diff -= VAR_3;
  else if (VAR_4[VAR_2 + 1].diff <= VAR_4[VAR_2].diff)
   VAR_4[VAR_2 + 1].diff += VAR_3;
}
