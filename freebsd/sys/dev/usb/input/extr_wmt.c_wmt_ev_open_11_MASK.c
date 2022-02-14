
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wmt_softc {int * xfer; int mtx; } ;
struct evdev_dev {int dummy; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(struct evdev_dev *VAR_2, void *VAR_3)
{
 struct wmt_softc *VAR_4 = VAR_3;

 FUNC_0(&VAR_4->mtx, VAR_0);
 FUNC_1(VAR_4->xfer[VAR_1]);

 return (0);
}
