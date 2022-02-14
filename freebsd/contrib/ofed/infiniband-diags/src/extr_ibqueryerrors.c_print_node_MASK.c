
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_14__ {int type; int numports; TYPE_1__** ports; int smalid; int nodedesc; int guid; scalar_t__ smaenhsp0; } ;
typedef TYPE_2__ ibnd_node_t ;
struct TYPE_15__ {int member_0; } ;
typedef TYPE_3__ ib_portid_t ;
struct TYPE_16__ {int nodes_checked; scalar_t__ ports_checked; } ;
struct TYPE_13__ {int base_lid; } ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_3__*,int,char*,int) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_3__*,int ,int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (TYPE_3__*,int,char*,TYPE_2__*,int,int*) ;
 int FUNC_4 (TYPE_3__*,int,char*,TYPE_2__*,int,int*) ;
 scalar_t__ FUNC_5 (TYPE_3__*,char*,int,int*) ;
 char* FUNC_6 (int ,int ,int ) ;
 TYPE_4__ VAR_7 ;

void FUNC_7(ibnd_node_t * VAR_8, void *VAR_9)
{
 int VAR_10 = 0;
 int VAR_11 = 0;
 int VAR_12 = 1;
 int VAR_13 = 0;
 int VAR_14 = 0;
 ib_portid_t VAR_15 = { 0 };
 uint16_t VAR_16 = 0;
 char *VAR_17 = ((void*)0);

 switch (VAR_8->type) {
 case 128:
  VAR_13 = VAR_3;
  break;
 case 130:
  VAR_13 = VAR_1;
  break;
 case 129:
  VAR_13 = VAR_2;
  break;
 }

 if ((VAR_13 & VAR_6) == 0)
  return;

 if (VAR_8->type == 128 && VAR_8->smaenhsp0)
  VAR_12 = 0;

 VAR_17 = FUNC_6(VAR_5, VAR_8->guid, VAR_8->nodedesc);

 if (VAR_8->type == 128) {
  FUNC_2(&VAR_15, VAR_8->smalid, 0, 0);
  VAR_11 = 0;
 } else {
  for (VAR_11 = 1; VAR_11 <= VAR_8->numports; VAR_11++) {
   if (VAR_8->ports[VAR_11]) {
    FUNC_2(&VAR_15,
           VAR_8->ports[VAR_11]->base_lid,
           0, 0);
    break;
   }
  }
 }

 if ((FUNC_5(&VAR_15, VAR_17, VAR_11, &VAR_16) == 0) &&
     (VAR_16 & VAR_0))
  VAR_14 = 1;

 if (VAR_4) {
  for (VAR_11 = VAR_12; VAR_11 <= VAR_8->numports; VAR_11++) {
   if (VAR_8->ports[VAR_11]) {
    if (VAR_8->type == 128)
     FUNC_2(&VAR_15, VAR_8->smalid, 0, 0);
    else
     FUNC_2(&VAR_15, VAR_8->ports[VAR_11]->base_lid,
            0, 0);

    FUNC_3(&VAR_15, VAR_16, VAR_17, VAR_8, VAR_11,
      &VAR_10);
    VAR_7.ports_checked++;
    if (!VAR_14)
     FUNC_0(&VAR_15, VAR_16, VAR_17, VAR_11);
   }
  }
 } else {
  if (VAR_14)
   if (!FUNC_4(&VAR_15, VAR_16, VAR_17, VAR_8,
       0xFF, &VAR_10)) {
    VAR_7.ports_checked += VAR_8->numports;
    goto clear;
   }

  for (VAR_11 = VAR_12; VAR_11 <= VAR_8->numports; VAR_11++) {
   if (VAR_8->ports[VAR_11]) {
    if (VAR_8->type == 128)
     FUNC_2(&VAR_15, VAR_8->smalid, 0, 0);
    else
     FUNC_2(&VAR_15, VAR_8->ports[VAR_11]->base_lid,
            0, 0);

    FUNC_4(&VAR_15, VAR_16, VAR_17, VAR_8, VAR_11,
          &VAR_10);
    VAR_7.ports_checked++;
    if (!VAR_14)
     FUNC_0(&VAR_15, VAR_16, VAR_17, VAR_11);
   }
  }
 }

clear:
 VAR_7.nodes_checked++;
 if (VAR_14)
  FUNC_0(&VAR_15, VAR_16, VAR_17, 0xFF);

 FUNC_1(VAR_17);
}
