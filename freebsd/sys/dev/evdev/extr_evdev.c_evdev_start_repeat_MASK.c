
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct evdev_dev {int* ev_rep; int ev_rep_callout; int ev_rep_key; } ;


 int FUNC_0 (struct evdev_dev*) ;
 size_t VAR_0 ;
 int FUNC_1 (int *,int,int ,struct evdev_dev*) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_2(struct evdev_dev *VAR_3, uint16_t VAR_4)
{

 FUNC_0(VAR_3);

 if (VAR_3->ev_rep[VAR_0]) {
  VAR_3->ev_rep_key = VAR_4;
  FUNC_1(&VAR_3->ev_rep_callout,
      VAR_3->ev_rep[VAR_0] * VAR_2 / 1000,
      VAR_1, VAR_3);
 }
}
