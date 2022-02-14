
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct udev_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char const*,char*,int) ;
 int FUNC_1 (int ,char*,int ,char const*,char const*) ;
 char* FUNC_2 (struct udev_device*) ;
 int FUNC_3 (struct udev_device*) ;
 char* FUNC_4 (struct udev_device*) ;
 int FUNC_5 (struct udev_device*) ;
 struct udev_device* FUNC_6 (int ) ;
 int FUNC_7 (char const*,char const*,int) ;

__attribute__((used)) static void FUNC_8(int VAR_2, const char *VAR_3)
{
 struct udev_device *VAR_4;

 VAR_4 = FUNC_6(VAR_1);
 if (VAR_4) {
  const char *VAR_5 = FUNC_4(VAR_4);
  const char *VAR_6 = FUNC_2(VAR_4);

  FUNC_1(VAR_0, "Device event: %s, %s, %s\n",
   FUNC_3(VAR_4),
   VAR_5, VAR_6);

  if (VAR_5 && VAR_6
      && FUNC_0(VAR_6, "add", sizeof("add")) == 0)
   FUNC_7(VAR_5, VAR_3, 1);

  FUNC_5(VAR_4);
 }
}
