
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rlimit {scalar_t__ rlim_max; scalar_t__ rlim_cur; } ;
struct gctl_req {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct gctl_req*,char*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,struct rlimit*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(struct gctl_req *VAR_3)
{
 struct rlimit VAR_4;


 VAR_4.rlim_cur = 0;
 VAR_4.rlim_max = 0;
 if (FUNC_2(VAR_1, &VAR_4) == -1) {
  FUNC_0(VAR_3, "Cannot disable core dumps: %s.",
      FUNC_3(VAR_2));
  return (-1);
 }

 if (FUNC_1(VAR_0) == -1) {
  FUNC_0(VAR_3, "Cannot lock memory: %s.", FUNC_3(VAR_2));
  return (-1);
 }
 return (0);
}
