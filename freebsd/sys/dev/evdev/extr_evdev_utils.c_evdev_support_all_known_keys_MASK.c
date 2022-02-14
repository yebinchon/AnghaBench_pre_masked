
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evdev_dev {int dummy; } ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__* VAR_2 ;
 int FUNC_0 (struct evdev_dev*,scalar_t__) ;
 size_t FUNC_1 (scalar_t__*) ;

void
FUNC_2(struct evdev_dev *VAR_3)
{
 size_t VAR_4;

 for (VAR_4 = VAR_0; VAR_4 < FUNC_1(VAR_2); VAR_4++)
  if (VAR_2[VAR_4] != VAR_1)
   FUNC_0(VAR_3, VAR_2[VAR_4]);
}
