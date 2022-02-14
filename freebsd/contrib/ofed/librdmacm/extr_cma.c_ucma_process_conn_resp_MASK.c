
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ucma_abi_accept {int id; } ;
struct TYPE_6__ {TYPE_1__* channel; } ;
struct cma_id_private {TYPE_2__ id; int handle; } ;
struct TYPE_5__ {int fd; } ;


 int VAR_0 ;
 int FUNC_0 (struct ucma_abi_accept*,int,int ) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,int ) ;
 int FUNC_4 (TYPE_2__*,int ) ;
 int FUNC_5 (int ,struct ucma_abi_accept*,int) ;

__attribute__((used)) static int FUNC_6(struct cma_id_private *VAR_4)
{
 struct ucma_abi_accept VAR_5;
 int VAR_6;

 VAR_6 = FUNC_3(&VAR_4->id, VAR_3);
 if (VAR_6)
  goto err;

 VAR_6 = FUNC_4(&VAR_4->id, VAR_2);
 if (VAR_6)
  goto err;

 FUNC_0(&VAR_5, sizeof VAR_5, VAR_0);
 VAR_5.id = VAR_4->handle;

 VAR_6 = FUNC_5(VAR_4->id.channel->fd, &VAR_5, sizeof VAR_5);
 if (VAR_6 != sizeof VAR_5) {
  VAR_6 = (VAR_6 >= 0) ? FUNC_1(VAR_1) : -1;
  goto err;
 }

 return 0;
err:
 FUNC_2(&VAR_4->id);
 return VAR_6;
}
