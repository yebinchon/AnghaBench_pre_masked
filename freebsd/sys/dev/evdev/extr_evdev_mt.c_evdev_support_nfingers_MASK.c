
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evdev_dev {int dummy; } ;
typedef size_t int32_t ;


 size_t FUNC_0 (int ,size_t) ;
 int * VAR_0 ;
 int FUNC_1 (struct evdev_dev*,int ) ;
 int FUNC_2 (int *) ;

void
FUNC_3(struct evdev_dev *VAR_1, int32_t VAR_2)
{
 int32_t VAR_3;

 for (VAR_3 = 0; VAR_3 < FUNC_0(FUNC_2(VAR_0), VAR_2); VAR_3++)
  FUNC_1(VAR_1, VAR_0[VAR_3]);
}
