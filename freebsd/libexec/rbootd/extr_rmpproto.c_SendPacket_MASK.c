
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct hp_hdr {int dummy; } ;
struct TYPE_9__ {void* sxsap; void* dxsap; } ;
struct TYPE_8__ {void* len; int * saddr; int * daddr; } ;
struct TYPE_10__ {TYPE_2__ hp_llc; TYPE_1__ hp_hdr; } ;
struct TYPE_11__ {int tstamp; TYPE_3__ rmp; scalar_t__ rmplen; } ;
typedef TYPE_4__ RMPCONN ;


 int FUNC_0 (TYPE_4__*) ;
 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_1 (TYPE_4__*,int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *,int *) ;
 void* FUNC_3 (scalar_t__) ;
 int FUNC_4 (char*,char*,int ) ;

int
FUNC_5(RMPCONN *VAR_5)
{




 FUNC_4((char *)&VAR_5->rmp.hp_hdr.daddr[0],
         (char *)&VAR_5->rmp.hp_hdr.saddr[0], VAR_4);
 VAR_5->rmp.hp_hdr.len = FUNC_3(VAR_5->rmplen - sizeof(struct hp_hdr));




 VAR_5->rmp.hp_llc.dxsap = FUNC_3(VAR_3);
 VAR_5->rmp.hp_llc.sxsap = FUNC_3(VAR_2);




 (void)FUNC_2(&VAR_5->tstamp, ((void*)0));

 if (VAR_1 != ((void*)0))
  FUNC_1(VAR_5,VAR_0);




 return(FUNC_0(VAR_5));
}
