
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t uint16_t ;
typedef int ispsoftc_t ;
struct TYPE_5__ {int state; int portid; int new_portid; int new_prli_word3; int prli_word3; int new_prli_word0; int prli_word0; int handle; scalar_t__ probational; } ;
typedef TYPE_1__ fcportdb_t ;
struct TYPE_6__ {scalar_t__ isp_loopstate; TYPE_1__* portdb; } ;
typedef TYPE_2__ fcparam ;


 TYPE_2__* FUNC_0 (int *,int) ;



 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 size_t VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (int *,int ,int,TYPE_1__*) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int,int ,int,int) ;
 int FUNC_4 (int *,int ,char*,int,...) ;

__attribute__((used)) static int
FUNC_5(ispsoftc_t *VAR_14, int VAR_15)
{
 fcparam *VAR_16 = FUNC_0(VAR_14, VAR_15);
 fcportdb_t *VAR_17;
 uint16_t VAR_18;

 if (VAR_16->isp_loopstate < VAR_7)
  return (-1);
 if (VAR_16->isp_loopstate >= VAR_8)
  return (0);

 FUNC_4(VAR_14, VAR_6, "Chan %d FC PDB sync", VAR_15);

 VAR_16->isp_loopstate = VAR_9;

 for (VAR_18 = 0; VAR_18 < VAR_10; VAR_18++) {
  VAR_17 = &VAR_16->portdb[VAR_18];

  if (VAR_17->state == VAR_0)
   continue;
  if (VAR_17->probational && VAR_17->state != 128)
   VAR_17->state = 131;
  switch (VAR_17->state) {
  case 131:
   VAR_17->state = VAR_0;
   FUNC_1(VAR_14, VAR_3, VAR_15, VAR_17);
   if ((VAR_17->portid & 0xffff00) != 0) {
    (void) FUNC_3(VAR_14, VAR_15, VAR_17->handle,
        VAR_17->portid,
        VAR_11 |
        VAR_13 |
        VAR_12);
   }




   break;
  case 130:
   VAR_17->state = 129;
   FUNC_1(VAR_14, VAR_1, VAR_15, VAR_17);
   break;
  case 132:
   VAR_17->state = 129;
   FUNC_1(VAR_14, VAR_2, VAR_15, VAR_17);
   VAR_17->portid = VAR_17->new_portid;
   VAR_17->prli_word0 = VAR_17->new_prli_word0;
   VAR_17->prli_word3 = VAR_17->new_prli_word3;
   break;
  case 129:
   FUNC_1(VAR_14, VAR_4, VAR_15, VAR_17);
   break;
  case 128:
   break;
  default:
   FUNC_4(VAR_14, VAR_5,
       "isp_pdb_sync: state %d for idx %d",
       VAR_17->state, VAR_18);
   FUNC_2(VAR_14, VAR_15);
  }
 }

 if (VAR_16->isp_loopstate < VAR_9) {
  FUNC_4(VAR_14, VAR_6,
      "Chan %d FC PDB sync aborted", VAR_15);
  return (1);
 }

 VAR_16->isp_loopstate = VAR_8;
 FUNC_4(VAR_14, VAR_6, "Chan %d FC PDB sync done", VAR_15);
 return (0);
}
