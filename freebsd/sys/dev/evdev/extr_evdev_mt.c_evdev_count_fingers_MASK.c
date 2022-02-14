
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evdev_dev {int dummy; } ;
typedef scalar_t__ int32_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct evdev_dev*) ;
 int FUNC_1 (struct evdev_dev*,scalar_t__,int ) ;

__attribute__((used)) static int32_t
FUNC_2(struct evdev_dev *VAR_1)
{
 int32_t VAR_2 = 0, VAR_3;

 for (VAR_3 = 0; VAR_3 <= FUNC_0(VAR_1); VAR_3++)
  if (FUNC_1(VAR_1, VAR_3, VAR_0) != -1)
   VAR_2++;

 return (VAR_2);
}
