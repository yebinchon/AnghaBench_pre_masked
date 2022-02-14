
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysinfo {unsigned long totalram; unsigned long totalhigh; unsigned long mem_unit; } ;
struct ipc_namespace {unsigned long msg_ctlmni; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int FUNC_0 (int *) ;
 int VAR_4 ;
 int FUNC_1 (struct sysinfo*) ;

void FUNC_2(struct ipc_namespace *VAR_5)
{
 struct sysinfo VAR_6;
 unsigned long VAR_7;
 int VAR_8;

 FUNC_1(&VAR_6);
 VAR_7 = (((VAR_6.totalram - VAR_6.totalhigh) / VAR_3) * VAR_6.mem_unit)
  / VAR_1;
 VAR_8 = FUNC_0(&VAR_4);
 VAR_7 /= VAR_8;

 if (VAR_7 < VAR_2) {
  VAR_5->msg_ctlmni = VAR_2;
  return;
 }

 if (VAR_7 > VAR_0 / VAR_8) {
  VAR_5->msg_ctlmni = VAR_0 / VAR_8;
  return;
 }

 VAR_5->msg_ctlmni = VAR_7;
}
