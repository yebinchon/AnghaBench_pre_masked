
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef void* uint64_t ;
typedef int ispsoftc_t ;
struct TYPE_8__ {scalar_t__ portid; scalar_t__ handle; scalar_t__ prli_word3; int prli_word0; int portname; int nodename; } ;
typedef TYPE_1__ isp_pdb_t ;
struct TYPE_9__ {scalar_t__ portid; scalar_t__ handle; scalar_t__ state; scalar_t__ prli_word3; int prli_word0; scalar_t__ new_portid; int new_prli_word0; scalar_t__ new_prli_word3; void* node_wwn; void* port_wwn; scalar_t__ probational; } ;
typedef TYPE_2__ fcportdb_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,int,TYPE_2__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (void*,int ) ;
 int VAR_5 ;
 int FUNC_3 (int *,int) ;
 scalar_t__ FUNC_4 (int *,int,void*,TYPE_2__**) ;
 int FUNC_5 (int *,int,TYPE_2__**) ;
 int FUNC_6 (int *,int ,char*,int,...) ;

__attribute__((used)) static void
FUNC_7(ispsoftc_t *VAR_6, int VAR_7, isp_pdb_t *VAR_8)
{
 fcportdb_t *VAR_9;
 uint64_t VAR_10, VAR_11;

 FUNC_2(VAR_10, VAR_8->nodename);
 FUNC_2(VAR_11, VAR_8->portname);


 if (FUNC_4(VAR_6, VAR_7, VAR_11, &VAR_9)) {
  if (!VAR_9->probational) {
   FUNC_6(VAR_6, VAR_3,
       "Chan %d Port 0x%06x@0x%04x [%d] is not probational (0x%x)",
       VAR_7, VAR_9->portid, VAR_9->handle,
       FUNC_0(VAR_6, VAR_7, VAR_9), VAR_9->state);
   FUNC_3(VAR_6, VAR_7);
   return;
  }
  VAR_9->probational = 0;
  VAR_9->node_wwn = VAR_10;


  if (VAR_9->portid == VAR_8->portid &&
      VAR_9->handle == VAR_8->handle &&
      VAR_9->prli_word3 == VAR_8->prli_word3 &&
      ((VAR_8->prli_word0 & VAR_5) ==
       (VAR_9->prli_word0 & VAR_5))) {
   if (VAR_9->state != VAR_1)
    VAR_9->state = VAR_2;
   FUNC_6(VAR_6, VAR_4,
       "Chan %d Port 0x%06x@0x%04x is valid",
       VAR_7, VAR_8->portid, VAR_8->handle);
   return;
  }


  VAR_9->state = VAR_0;
  VAR_9->handle = VAR_8->handle;
  VAR_9->new_portid = VAR_8->portid;
  VAR_9->new_prli_word0 = VAR_8->prli_word0;
  VAR_9->new_prli_word3 = VAR_8->prli_word3;
  FUNC_6(VAR_6, VAR_4,
      "Chan %d Port 0x%06x@0x%04x is changed",
      VAR_7, VAR_8->portid, VAR_8->handle);
  return;
 }


 if (!FUNC_5(VAR_6, VAR_7, &VAR_9)) {
  FUNC_6(VAR_6, VAR_3, "Chan %d out of portdb entries", VAR_7);
  return;
 }

 FUNC_1(VAR_9, sizeof (fcportdb_t));
 VAR_9->probational = 0;
 VAR_9->state = VAR_1;
 VAR_9->portid = VAR_9->new_portid = VAR_8->portid;
 VAR_9->prli_word0 = VAR_9->new_prli_word0 = VAR_8->prli_word0;
 VAR_9->prli_word3 = VAR_9->new_prli_word3 = VAR_8->prli_word3;
 VAR_9->handle = VAR_8->handle;
 VAR_9->port_wwn = VAR_11;
 VAR_9->node_wwn = VAR_10;
 FUNC_6(VAR_6, VAR_4, "Chan %d Port 0x%06x@0x%04x is new",
     VAR_7, VAR_8->portid, VAR_8->handle);
}
