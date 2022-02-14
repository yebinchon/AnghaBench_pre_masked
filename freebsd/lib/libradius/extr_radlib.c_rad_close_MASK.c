
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rad_handle {int fd; int num_servers; TYPE_1__* servers; } ;
struct TYPE_2__ {struct rad_handle* secret; } ;


 int FUNC_0 (struct rad_handle*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct rad_handle*) ;
 int FUNC_3 (struct rad_handle*,int ,int ) ;
 int FUNC_4 (struct rad_handle*) ;

void
FUNC_5(struct rad_handle *VAR_0)
{
 int VAR_1;

 if (VAR_0->fd != -1)
  FUNC_1(VAR_0->fd);
 for (VAR_1 = 0; VAR_1 < VAR_0->num_servers; VAR_1++) {
  FUNC_3(VAR_0->servers[VAR_1].secret, 0,
      FUNC_4(VAR_0->servers[VAR_1].secret));
  FUNC_2(VAR_0->servers[VAR_1].secret);
 }
 FUNC_0(VAR_0);
 FUNC_2(VAR_0);
}
