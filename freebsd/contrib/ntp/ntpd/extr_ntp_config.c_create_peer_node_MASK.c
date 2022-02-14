
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef void* u_char ;
struct TYPE_13__ {int s; void* u; void* i; } ;
struct TYPE_14__ {int host_mode; int attr; TYPE_1__ value; int group; void* peerversion; int peerkey; void* ttl; void* maxpoll; void* minpoll; int peerflags; int * addr; } ;
typedef TYPE_2__ peer_node ;
typedef int keyid_t ;
typedef TYPE_2__ attr_val_fifo ;
typedef TYPE_2__ attr_val ;
typedef int address_node ;


 int FUNC_0 (int ,TYPE_2__*) ;
 int FUNC_1 (TYPE_2__) ;
 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 int FUNC_2 (TYPE_2__*,TYPE_2__,int ) ;
 TYPE_2__* FUNC_3 (int) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int *) ;
 int VAR_8 ;
 int FUNC_6 (int ,char*,...) ;
 int FUNC_7 (int) ;

peer_node *
FUNC_8(
 int VAR_9,
 address_node * VAR_10,
 attr_val_fifo * VAR_11
 )
{
 peer_node *VAR_12;
 attr_val *VAR_13;
 int VAR_14;
 int VAR_15 = 0;

 VAR_12 = FUNC_3(sizeof(*VAR_12));


 VAR_12->peerversion = VAR_6;


 VAR_12->host_mode = VAR_9;
 VAR_12->addr = VAR_10;
 if (VAR_11 != ((void*)0))
  FUNC_1(*VAR_11);
 while (VAR_11 != ((void*)0)) {
  FUNC_2(VAR_13, *VAR_11, VAR_8);
  if (((void*)0) == VAR_13) {
   FUNC_4(VAR_11);
   break;
  }

  VAR_14 = 1;

  switch (VAR_13->attr) {

  case 135:
   FUNC_0(VAR_12->peerflags, VAR_13);
   VAR_14 = 0;
   break;

  case 131:
   if (VAR_13->value.i < VAR_5 ||
       VAR_13->value.i > VAR_7) {
    FUNC_6(VAR_2,
     "minpoll: provided value (%d) is out of range [%d-%d])",
     VAR_13->value.i, VAR_5,
     VAR_7);
    VAR_12->minpoll = VAR_5;
   } else {
    VAR_12->minpoll =
     (u_char)VAR_13->value.u;
   }
   break;

  case 132:
   if (VAR_13->value.i < 0 ||
       VAR_13->value.i > VAR_4) {
    FUNC_6(VAR_2,
     "maxpoll: provided value (%d) is out of range [0-%d])",
     VAR_13->value.i, VAR_4);
    VAR_12->maxpoll = VAR_4;
   } else {
    VAR_12->maxpoll =
     (u_char)VAR_13->value.u;
   }
   break;

  case 129:
   if (FUNC_5(VAR_10)) {
    FUNC_6(VAR_1, "'ttl' does not apply for refclocks");
    VAR_15 = 1;
   } else if (VAR_13->value.u >= VAR_3) {
    FUNC_6(VAR_1, "ttl: invalid argument");
    VAR_15 = 1;
   } else {
    VAR_12->ttl = (u_char)VAR_13->value.u;
   }
   break;

  case 130:
   if (FUNC_5(VAR_10)) {
    VAR_12->ttl = VAR_13->value.u;
   } else {
    FUNC_6(VAR_1, "'mode' does not apply for network peers");
    VAR_15 = 1;
   }
   break;

  case 133:
   if (VAR_13->value.u >= VAR_0) {
    FUNC_6(VAR_1, "key: invalid argument");
    VAR_15 = 1;
   } else {
    VAR_12->peerkey =
     (keyid_t)VAR_13->value.u;
   }
   break;

  case 128:
   if (VAR_13->value.u >= VAR_7) {
    FUNC_6(VAR_1, "version: invalid argument");
    VAR_15 = 1;
   } else {
    VAR_12->peerversion =
     (u_char)VAR_13->value.u;
   }
   break;

  case 134:
   VAR_12->group = VAR_13->value.s;
   break;

  default:
   FUNC_6(VAR_1,
    "Unknown peer/server option token %s",
    FUNC_7(VAR_13->attr));
   VAR_15 = 1;
  }
  if (VAR_14)
   FUNC_4(VAR_13);
 }


 if (VAR_15) {
  FUNC_4(VAR_12);
  VAR_12 = ((void*)0);
 }

 return VAR_12;
}
