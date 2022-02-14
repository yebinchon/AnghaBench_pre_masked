
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
typedef int ispsoftc_t ;
struct TYPE_4__ {size_t state; int node_wwn; int port_wwn; int new_portid; int portid; int handle; int new_prli_word3; int prli_word3; } ;
typedef TYPE_1__ fcportdb_t ;
struct TYPE_5__ {TYPE_1__* portdb; } ;
typedef TYPE_2__ fcparam ;
typedef int buf2 ;
typedef int buf1 ;


 TYPE_2__* FUNC_0 (int *,int) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,int,int ) ;
 int FUNC_2 (int *,int ,char*,int,int,int ,char const*,char*,int ,char*,int ,int ,int ,int ,int ) ;

void
FUNC_3(ispsoftc_t *VAR_3, int VAR_4)
{
 fcparam *VAR_5 = FUNC_0(VAR_3, VAR_4);
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
  char VAR_7[64], VAR_8[64];
  const char *VAR_9[8] = {
   "NIL ",
   "PROB",
   "DEAD",
   "CHGD",
   "NEW ",
   "PVLD",
   "ZOMB",
   "VLD "
  };
  fcportdb_t *VAR_10 = &VAR_5->portdb[VAR_6];

  if (VAR_10->state == VAR_0) {
   continue;
  }
  FUNC_1(VAR_7, sizeof (VAR_7), VAR_10->prli_word3);
  FUNC_1(VAR_8, sizeof (VAR_8), VAR_10->new_prli_word3);
  FUNC_2(VAR_3, VAR_1, "Chan %d [%d]: hdl 0x%x %s %s 0x%06x =>%s 0x%06x; WWNN 0x%08x%08x WWPN 0x%08x%08x",
      VAR_4, VAR_6, VAR_10->handle, VAR_9[VAR_10->state], VAR_7, VAR_10->portid, VAR_8, VAR_10->new_portid,
      (uint32_t) (VAR_10->node_wwn >> 32), (uint32_t) (VAR_10->node_wwn), (uint32_t) (VAR_10->port_wwn >> 32), (uint32_t) (VAR_10->port_wwn));
 }
}
