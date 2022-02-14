
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vt_device {int dummy; } ;
typedef int stdout ;
typedef int phandle_t ;
typedef char ihandle_t ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int,char*,char*,int) ;
 int FUNC_2 (char) ;
 scalar_t__ FUNC_3 (char*,char*) ;

__attribute__((used)) static int
FUNC_4(struct vt_device *VAR_2)
{
 phandle_t VAR_3, VAR_4;
 ihandle_t VAR_5;
 char VAR_6[64];

 VAR_3 = FUNC_0("/chosen");
 if (VAR_3 == -1)
  return (VAR_0);

 VAR_4 = -1;
 if (FUNC_1(VAR_3, "stdout", &VAR_5, sizeof(VAR_5)) ==
     sizeof(VAR_5))
  VAR_4 = FUNC_2(VAR_5);
 if (VAR_4 == -1)
  if (FUNC_1(VAR_3, "stdout-path", VAR_6, sizeof(VAR_6)) > 0)
   VAR_4 = FUNC_0(VAR_6);
 if (VAR_4 == -1) {




  VAR_4 = FUNC_0("screen");
 }
 FUNC_1(VAR_4, "device_type", VAR_6, sizeof(VAR_6));
 if (FUNC_3(VAR_6, "display") != 0)
  return (VAR_0);


 return (VAR_1);
}
