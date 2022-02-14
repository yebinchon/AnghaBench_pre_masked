
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evdev_dev {int dummy; } ;
typedef size_t int32_t ;


 int FUNC_0 (struct evdev_dev*) ;
 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_1 (struct evdev_dev*,int ,int ,int) ;
 size_t FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(struct evdev_dev *VAR_2, int32_t VAR_3)
{
 int32_t VAR_4;

 FUNC_0(VAR_2);

 if (VAR_3 > FUNC_2(VAR_1))
  VAR_3 = FUNC_2(VAR_1);

 for (VAR_4 = 0; VAR_4 < FUNC_2(VAR_1); VAR_4++)
  FUNC_1(VAR_2, VAR_0, VAR_1[VAR_4],
      VAR_3 == VAR_4 + 1);
}
