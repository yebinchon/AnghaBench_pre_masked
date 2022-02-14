
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct fd_data {int fd_provider; TYPE_1__* fd_geom; int dev; } ;
struct TYPE_3__ {struct fd_data* softc; int name; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 TYPE_1__* FUNC_2 (int *,char*,int ) ;
 int FUNC_3 (TYPE_1__*,char*,int ) ;

__attribute__((used)) static void
FUNC_4(void *VAR_1, int VAR_2)
{
 struct fd_data *VAR_3;

 VAR_3 = VAR_1;

 VAR_3->fd_geom = FUNC_2(&VAR_0,
     "fd%d", FUNC_0(VAR_3->dev));
 VAR_3->fd_provider = FUNC_3(VAR_3->fd_geom, "%s", VAR_3->fd_geom->name);
 VAR_3->fd_geom->softc = VAR_3;
 FUNC_1(VAR_3->fd_provider, 0);
}
