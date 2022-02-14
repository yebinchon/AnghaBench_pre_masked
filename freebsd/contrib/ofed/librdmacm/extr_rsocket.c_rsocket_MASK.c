
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct rsocket {int udp_sock; int index; TYPE_5__* cm_id; } ;
struct TYPE_6__ {int sa_family; } ;
struct TYPE_7__ {TYPE_1__ src_addr; } ;
struct TYPE_8__ {TYPE_2__ addr; } ;
struct TYPE_10__ {TYPE_4__* channel; TYPE_3__ route; } ;
struct TYPE_9__ {int fd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct rsocket*,int) ;
 int FUNC_2 (int *,TYPE_5__**,struct rsocket*,int ) ;
 struct rsocket* FUNC_3 (int *,int) ;
 int FUNC_4 () ;
 int FUNC_5 (struct rsocket*) ;
 int FUNC_6 (struct rsocket*,int) ;

int FUNC_7(int VAR_10, int VAR_11, int VAR_12)
{
 struct rsocket *VAR_13;
 int VAR_14, VAR_15;

 if ((VAR_10 != VAR_1 && VAR_10 != VAR_2 && VAR_10 != VAR_0) ||
     ((VAR_11 != VAR_9) && (VAR_11 != VAR_8)) ||
     (VAR_11 == VAR_9 && VAR_12 && VAR_12 != VAR_5) ||
     (VAR_11 == VAR_8 && VAR_12 && VAR_12 != VAR_6))
  return FUNC_0(VAR_4);

 FUNC_4();
 VAR_13 = FUNC_3(((void*)0), VAR_11);
 if (!VAR_13)
  return FUNC_0(VAR_3);

 if (VAR_11 == VAR_9) {
  VAR_15 = FUNC_2(((void*)0), &VAR_13->cm_id, VAR_13, VAR_7);
  if (VAR_15)
   goto err;

  VAR_13->cm_id->route.addr.src_addr.sa_family = VAR_10;
  VAR_14 = VAR_13->cm_id->channel->fd;
 } else {
  VAR_15 = FUNC_1(VAR_13, VAR_10);
  if (VAR_15)
   goto err;

  VAR_14 = VAR_13->udp_sock;
 }

 VAR_15 = FUNC_6(VAR_13, VAR_14);
 if (VAR_15 < 0)
  goto err;

 return VAR_13->index;

err:
 FUNC_5(VAR_13);
 return VAR_15;
}
