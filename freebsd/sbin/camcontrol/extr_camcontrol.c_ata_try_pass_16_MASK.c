
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ccb_pathinq {scalar_t__ protocol; } ;
struct cam_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct cam_device*,struct ccb_pathinq*) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int
FUNC_2(struct cam_device *VAR_1)
{
 struct ccb_pathinq VAR_2;

 if (FUNC_0(VAR_1, &VAR_2) != 0) {
  FUNC_1("couldn't get CPI");
  return (-1);
 }

 if (VAR_2.protocol == VAR_0) {

  return (1);
 }


 return (0);
}
