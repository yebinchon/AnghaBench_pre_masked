
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdaa_devinfo {int widget; int poll_jack; scalar_t__ poll_ival; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 struct hdaa_devinfo* FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (struct hdaa_devinfo*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct hdaa_devinfo*) ;

__attribute__((used)) static int
FUNC_8(device_t VAR_1)
{
 struct hdaa_devinfo *VAR_2 = FUNC_3(VAR_1);
 int VAR_3;

 if ((VAR_3 = FUNC_2(VAR_1)) != 0)
  return (VAR_3);

 FUNC_5(VAR_2);
 FUNC_6(VAR_1);
 VAR_2->poll_ival = 0;
 FUNC_1(&VAR_2->poll_jack);
 FUNC_7(VAR_2);
 FUNC_0(&VAR_2->poll_jack);

 FUNC_4(VAR_2->widget, VAR_0);
 return (0);
}
