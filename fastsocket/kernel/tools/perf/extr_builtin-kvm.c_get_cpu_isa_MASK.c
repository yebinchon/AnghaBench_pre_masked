
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* cpuid; } ;
struct TYPE_4__ {TYPE_1__ env; } ;
struct perf_session {TYPE_2__ header; } ;


 int VAR_0 ;
 int FUNC_0 (char*,char*) ;
 scalar_t__ FUNC_1 (char*,char*) ;

__attribute__((used)) static int FUNC_2(struct perf_session *VAR_1)
{
 char *VAR_2 = VAR_1->header.env.cpuid;
 int VAR_3;

 if (FUNC_1(VAR_2, "Intel"))
  VAR_3 = 1;
 else if (FUNC_1(VAR_2, "AMD"))
  VAR_3 = 0;
 else {
  FUNC_0("CPU %s is not supported.\n", VAR_2);
  VAR_3 = -VAR_0;
 }

 return VAR_3;
}
