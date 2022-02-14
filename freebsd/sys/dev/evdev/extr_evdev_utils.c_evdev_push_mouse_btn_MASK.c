
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evdev_dev {int dummy; } ;


 int * VAR_0 ;
 int FUNC_0 (struct evdev_dev*,int ,int) ;
 size_t FUNC_1 (int *) ;

void
FUNC_2(struct evdev_dev *VAR_1, int VAR_2)
{
 size_t VAR_3;

 for (VAR_3 = 0; VAR_3 < FUNC_1(VAR_0); VAR_3++)
  FUNC_0(VAR_1, VAR_0[VAR_3],
      VAR_2 & (1 << VAR_3));
}
