
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct targ_softc {int dummy; } ;
struct TYPE_2__ {scalar_t__ num_bufs_used; } ;
struct targ_cmd_descr {TYPE_1__ mapinfo; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct targ_cmd_descr* FUNC_0 (int,int ,int ) ;

__attribute__((used)) static struct targ_cmd_descr *
FUNC_1(struct targ_softc *VAR_2)
{
 struct targ_cmd_descr *VAR_3;

 VAR_3 = FUNC_0(sizeof(*VAR_3), VAR_1,
        VAR_0);
 if (VAR_3) {
  VAR_3->mapinfo.num_bufs_used = 0;
 }
 return (VAR_3);
}
