
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vt_device {int dummy; } ;
typedef int phandle_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int,char*) ;
 int FUNC_1 () ;

__attribute__((used)) static int
FUNC_2(struct vt_device *VAR_2)
{
 phandle_t VAR_3;

 VAR_3 = FUNC_1();
 if (VAR_3 == -1)
  return (VAR_0);

 if ((FUNC_0(VAR_3, "height") <= 0) ||
     (FUNC_0(VAR_3, "width") <= 0) ||
     (FUNC_0(VAR_3, "depth") <= 0) ||
     (FUNC_0(VAR_3, "linebytes") <= 0))
  return (VAR_0);

 return (VAR_1);
}
