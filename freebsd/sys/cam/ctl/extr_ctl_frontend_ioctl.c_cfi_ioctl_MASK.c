
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_long ;
struct thread {int dummy; } ;
struct ctl_req {int reqtype; int error_str; int status; } ;
struct cdev {int dummy; } ;
typedef scalar_t__ caddr_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;


 int VAR_2 ;
 int FUNC_0 (struct ctl_req*) ;
 int FUNC_1 (struct ctl_req*) ;
 int FUNC_2 (int ,int,char*,int) ;

__attribute__((used)) static int
FUNC_3(struct cdev *VAR_3, u_long VAR_4, caddr_t VAR_5, int VAR_6,
    struct thread *VAR_7)
{
 struct ctl_req *VAR_8;

 if (VAR_4 == VAR_1) {
  VAR_8 = (struct ctl_req *)VAR_5;
  switch (VAR_8->reqtype) {
  case 129:
   FUNC_0(VAR_8);
   break;
  case 128:
   FUNC_1(VAR_8);
   break;
  default:
   VAR_8->status = VAR_0;
   FUNC_2(VAR_8->error_str, sizeof(VAR_8->error_str),
       "Unsupported request type %d", VAR_8->reqtype);
  }
  return (0);
 }

 return (VAR_2);
}
