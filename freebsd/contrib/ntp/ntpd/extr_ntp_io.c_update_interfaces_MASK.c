
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_30__ TYPE_6__ ;
typedef struct TYPE_29__ TYPE_4__ ;
typedef struct TYPE_28__ TYPE_3__ ;
typedef struct TYPE_27__ TYPE_2__ ;
typedef struct TYPE_26__ TYPE_1__ ;


typedef int u_short ;
struct TYPE_27__ {int addr; TYPE_6__* ep; struct TYPE_27__* link; } ;
typedef TYPE_2__ remaddr_t ;
typedef scalar_t__ isc_result_t ;
typedef int isc_mem_t ;
typedef int isc_interfaceiter_t ;
struct TYPE_26__ {unsigned int family; } ;
struct TYPE_28__ {int name; TYPE_1__ address; } ;
typedef TYPE_3__ isc_interface_t ;
typedef int (* interface_receiver_t ) (void*,TYPE_4__*) ;
struct TYPE_29__ {TYPE_6__* ep; int action; } ;
typedef TYPE_4__ interface_info_t ;
struct TYPE_30__ {char* name; int flags; scalar_t__ ignore_packets; int phase; int sin; struct TYPE_30__* elink; int * peers; } ;
typedef TYPE_6__ endpt ;





 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int,TYPE_6__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 void* VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_2 (TYPE_3__*,TYPE_6__*,int ) ;
 TYPE_6__* FUNC_3 (int ,TYPE_6__*) ;
 int FUNC_4 (TYPE_6__*) ;
 TYPE_6__* VAR_17 ;
 TYPE_6__* FUNC_5 (int *,int) ;
 int FUNC_6 (TYPE_6__*) ;
 int FUNC_7 (char*,int *,int) ;
 int FUNC_8 () ;
 int VAR_18 ;
 int VAR_19 ;
 scalar_t__ FUNC_9 (int *,int ) ;
 int FUNC_10 (int *,int ) ;
 scalar_t__ FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (int *,int **) ;
 scalar_t__ FUNC_13 (int *,TYPE_3__*) ;
 int FUNC_14 (int **) ;
 scalar_t__ FUNC_15 (int *) ;
 scalar_t__ FUNC_16 (int *) ;
 TYPE_6__* VAR_20 ;
 int FUNC_17 (int ,char*,char*,...) ;
 int FUNC_18 () ;
 scalar_t__ FUNC_19 (TYPE_6__*) ;
 TYPE_2__* VAR_21 ;
 int FUNC_20 (TYPE_6__*) ;
 int FUNC_21 (int *,int *) ;
 scalar_t__ FUNC_22 (TYPE_6__*,int *) ;
 int FUNC_23 (int *) ;
 int FUNC_24 (char*,char*,int) ;
 int FUNC_25 (void*,TYPE_4__*) ;
 int FUNC_26 (void*,TYPE_4__*) ;
 int FUNC_27 (void*,TYPE_4__*) ;
 scalar_t__ VAR_22 ;
 int VAR_23 ;

__attribute__((used)) static int
FUNC_28(
 u_short VAR_24,
 interface_receiver_t VAR_25,
 void * VAR_26
 )
{
 isc_mem_t * VAR_27 = (void *)-1;
 interface_info_t VAR_28;
 isc_interfaceiter_t * VAR_29;
 isc_result_t VAR_30;
 isc_interface_t VAR_31;
 int VAR_32;
 unsigned int VAR_33;
 endpt VAR_34;
 endpt * VAR_35;
 endpt * VAR_36;

 FUNC_0(3, ("update_interfaces(%d)\n", VAR_24));







 VAR_32 = VAR_2;
 VAR_29 = ((void*)0);
 VAR_30 = FUNC_12(VAR_27, &VAR_29);

 if (VAR_30 != VAR_11)
  return 0;





 VAR_23 ^= 0x1;

 for (VAR_30 = FUNC_15(VAR_29);
      VAR_11 == VAR_30;
      VAR_30 = FUNC_16(VAR_29)) {

  VAR_30 = FUNC_13(VAR_29, &VAR_31);

  if (VAR_30 != VAR_11)
   break;


  VAR_33 = VAR_31.address.family;
  if (VAR_0 != VAR_33 && VAR_1 != VAR_33)
   continue;
  if (VAR_0 == VAR_33 && !VAR_18)
   continue;
  if (VAR_1 == VAR_33 && !VAR_19)
   continue;


  FUNC_6(&VAR_34);

  FUNC_2(&VAR_31, &VAR_34, VAR_24);

  FUNC_1(4, (&VAR_34, "examining ", "\n"));




  switch (FUNC_7(VAR_34.name, &VAR_34.sin,
      VAR_34.flags)) {

  case 129:
   FUNC_0(4, ("ignoring interface %s (%s) - by nic rules\n",
        VAR_34.name, FUNC_23(&VAR_34.sin)));
   continue;

  case 128:
   FUNC_0(4, ("listen interface %s (%s) - by nic rules\n",
        VAR_34.name, FUNC_23(&VAR_34.sin)));
   VAR_34.ignore_packets = VAR_10;
   break;

  case 130:
   FUNC_0(4, ("drop on interface %s (%s) - by nic rules\n",
        VAR_34.name, FUNC_23(&VAR_34.sin)));
   VAR_34.ignore_packets = VAR_12;
   break;
  }


  if (!(VAR_34.flags & VAR_8)) {
   FUNC_0(4, ("skipping interface %s (%s) - DOWN\n",
        VAR_34.name, FUNC_23(&VAR_34.sin)));
   continue;
  }






  if (FUNC_11(&VAR_34.sin))
   continue;

  if (FUNC_9(&VAR_34.sin, VAR_31.name))
   continue;




  if (!FUNC_10(&VAR_34.sin, VAR_31.name))
   continue;







  VAR_35 = FUNC_5(&VAR_34.sin, VAR_9);

  if (VAR_35 != ((void*)0) && FUNC_19(VAR_35)) {




   if (VAR_35->phase != VAR_23) {
    FUNC_24(VAR_35->name, VAR_34.name,
     sizeof(VAR_35->name));
    VAR_35->ignore_packets =
         VAR_34.ignore_packets;
   } else {

    FUNC_24(VAR_35->name, "*multiple*",
     sizeof(VAR_35->name));
   }

   FUNC_1(4, (VAR_35, "updating ",
          " present\n"));

   if (VAR_35->ignore_packets !=
       VAR_34.ignore_packets) {
    FUNC_17(VAR_13,
     "WARNING: conflicting enable configuration for interfaces %s and %s for address %s - unsupported configuration - address DISABLED",
     VAR_34.name, VAR_35->name,
     FUNC_23(&VAR_34.sin));

    VAR_35->ignore_packets = VAR_12;
   }

   VAR_35->phase = VAR_23;

   VAR_28.action = VAR_5;
   VAR_28.ep = VAR_35;
   if (VAR_25 != ((void*)0))
    (*VAR_25)(VAR_26, &VAR_28);
  } else {
   VAR_35 = FUNC_3(VAR_24, &VAR_34);

   if (VAR_35 != ((void*)0)) {
    VAR_28.action = VAR_3;
    VAR_28.ep = VAR_35;
    if (VAR_25 != ((void*)0))
     (*VAR_25)(VAR_26, &VAR_28);

    VAR_32 = VAR_15;
    FUNC_1(3,
     (VAR_35, "updating ",
      " new - created\n"));
   } else {
    FUNC_1(3,
     (&VAR_34, "updating ",
      " new - creation FAILED"));

    FUNC_17(VAR_14,
     "failed to init interface for address %s",
     FUNC_23(&VAR_34.sin));
    continue;
   }
  }
 }

 FUNC_14(&VAR_29);





 for (VAR_35 = VAR_17; VAR_35 != ((void*)0); VAR_35 = VAR_36) {
  VAR_36 = VAR_35->elink;
  if (((VAR_9 | VAR_6) & VAR_35->flags) ||
      VAR_35->phase == VAR_23)
   continue;

  FUNC_1(3, (VAR_35, "updating ",
         "GONE - deleting\n"));
  FUNC_20(VAR_35);

  VAR_28.action = VAR_4;
  VAR_28.ep = VAR_35;
  if (VAR_25 != ((void*)0))
   (*VAR_25)(VAR_26, &VAR_28);


  while (VAR_35->peers != ((void*)0))
   FUNC_21(VAR_35->peers, ((void*)0));





  if (VAR_35 == VAR_20)
   VAR_20 = ((void*)0);

  FUNC_4(VAR_35);
 }







 FUNC_18();

 if (VAR_16)
  FUNC_8();

 if (VAR_22)
  FUNC_8();
 return VAR_32;
}
