
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int32_t ;
struct aac_softc {int flags; int aac_io_lock; struct aac_command* aac_commands; } ;
struct TYPE_2__ {int XferState; } ;
struct aac_fib {scalar_t__ data; TYPE_1__ Header; } ;
struct aac_command {int (* cm_complete ) (struct aac_command*) ;int cm_flags; struct aac_fib* cm_fib; } ;


 int FUNC_0 (struct aac_softc*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct aac_softc*) ;
 int FUNC_2 (struct aac_softc*,int) ;
 int VAR_4 ;
 int FUNC_3 (struct aac_softc*,int) ;
 char* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (struct aac_softc*,struct aac_fib*) ;
 int FUNC_5 (struct aac_command*) ;
 int FUNC_6 (struct aac_softc*) ;
 int FUNC_7 (struct aac_command*) ;
 int FUNC_8 (struct aac_fib*,int ) ;
 int FUNC_9 (struct aac_softc*,char*,char*) ;
 scalar_t__ FUNC_10 (int,int ,int) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (struct aac_command*) ;
 int FUNC_14 (struct aac_command*) ;

void
FUNC_15(void *VAR_9)
{
 struct aac_softc *VAR_10;
 u_int32_t VAR_11, VAR_12;
 struct aac_command *VAR_13;
 struct aac_fib *VAR_14;
 int VAR_15;

 VAR_10 = (struct aac_softc *)VAR_9;

 FUNC_9(VAR_10, VAR_5, "");
 FUNC_11(&VAR_10->aac_io_lock);
 while (1) {
  VAR_11 = FUNC_1(VAR_10);
  if (VAR_11 == 0xffffffff)
   VAR_11 = FUNC_1(VAR_10);
  if (VAR_11 == 0xffffffff)
   break;
  if (VAR_11 & 2) {
   if (VAR_11 == 0xfffffffe) {



    continue;
   }

   VAR_14 = (struct aac_fib *)FUNC_10(sizeof *VAR_14, VAR_6,
       VAR_7 | VAR_8);
   if (VAR_14 == ((void*)0)) {





    break;
   }
   VAR_11 &= ~2;
   for (VAR_15 = 0; VAR_15 < sizeof(struct aac_fib)/4; ++VAR_15)
    ((u_int32_t *)VAR_14)[VAR_15] = FUNC_2(VAR_10, VAR_11 + VAR_15*4);
   FUNC_4(VAR_10, VAR_14);
   FUNC_8(VAR_14, VAR_6);





   FUNC_3(VAR_10, VAR_11);
   FUNC_0(VAR_10, VAR_1);
  } else {
   VAR_12 = VAR_11 & 1;
   VAR_13 = VAR_10->aac_commands + (VAR_11 >> 2);
   VAR_14 = VAR_13->cm_fib;
   if (VAR_12) {
    VAR_14->Header.XferState |= VAR_3;
    *((u_int32_t *)(VAR_14->data)) = VAR_2;
   }
   FUNC_5(VAR_13);
    FUNC_7(VAR_13);
   VAR_13->cm_flags |= VAR_0;


   if (VAR_13->cm_complete != ((void*)0)) {
    VAR_13->cm_complete(VAR_13);
   } else {



    FUNC_14(VAR_13);
   }
   VAR_10->flags &= ~VAR_4;
  }
 }

 if ((VAR_10->flags & VAR_4) == 0)
  FUNC_6(VAR_10);

 FUNC_12(&VAR_10->aac_io_lock);
}
