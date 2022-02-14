
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct ws_buf {int type; scalar_t__ buf; scalar_t__ n; } ;
struct TYPE_9__ {int type; } ;
struct TYPE_6__ {int s_addr; } ;
struct TYPE_8__ {TYPE_1__ sin_addr; } ;
struct TYPE_7__ {TYPE_4__* a; int npackets; int * ifp; TYPE_3__ to; } ;




 int VAR_0 ;
 int FUNC_0 (struct ws_buf*,TYPE_4__*) ;
 int FUNC_1 (struct ws_buf*,TYPE_4__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int,TYPE_3__*,int *,scalar_t__,int) ;
 int FUNC_5 (char*,int ) ;
 TYPE_2__ VAR_1 ;

__attribute__((used)) static void
FUNC_6(struct ws_buf *VAR_2)
{




 switch (VAR_2->type) {
 case 129:
  FUNC_5("skip multicast to %s because impossible",
     FUNC_3(VAR_1.to.sin_addr.s_addr));
  break;
 case 128:
  break;
 default:
  if (VAR_1.a != ((void*)0) && VAR_1.a->type == VAR_0)
   FUNC_1(VAR_2,VAR_1.a);
  if (FUNC_4(VAR_2->type, &VAR_1.to, VAR_1.ifp, VAR_2->buf,
      ((char *)VAR_2->n - (char*)VAR_2->buf)) < 0
      && VAR_1.ifp != ((void*)0))
   FUNC_2(VAR_1.ifp);
  VAR_1.npackets++;
  break;
 }

 FUNC_0(VAR_2,VAR_1.a);
}
