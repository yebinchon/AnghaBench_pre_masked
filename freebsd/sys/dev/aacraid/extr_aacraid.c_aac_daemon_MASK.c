
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u_int32_t ;
struct timeval {int tv_sec; scalar_t__ tv_usec; } ;
struct aac_softc {int timeout_id; int aac_io_lock; int aac_daemontime; } ;
struct aac_fib_header {int dummy; } ;
struct TYPE_2__ {int Size; int XferState; int Command; } ;
struct aac_fib {scalar_t__ data; TYPE_1__ Header; } ;
struct aac_command {int cm_flags; scalar_t__ cm_datalen; int cm_timestamp; struct aac_fib* cm_fib; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 char* VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct aac_softc*,struct aac_command**) ;
 int FUNC_1 (struct aac_command*,int *,int ,int ) ;
 int FUNC_2 (struct aac_command*) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (struct aac_softc*,char*,char*) ;
 int FUNC_7 (struct timeval*) ;
 int VAR_12 ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int VAR_13 ;
 int FUNC_11 (void (*) (void*),void*,int ) ;
 int FUNC_12 (struct timeval*) ;

__attribute__((used)) static void
FUNC_13(void *VAR_14)
{
 struct aac_softc *VAR_15;
 struct timeval VAR_16;
 struct aac_command *VAR_17;
 struct aac_fib *VAR_18;

 VAR_15 = VAR_14;
 FUNC_6(VAR_15, VAR_9, "");







 FUNC_9(&VAR_15->aac_io_lock);

 FUNC_7(&VAR_16);

 if (!FUNC_0(VAR_15, &VAR_17)) {
  VAR_18 = VAR_17->cm_fib;
  VAR_17->cm_timestamp = VAR_13;
  VAR_17->cm_datalen = 0;
  VAR_17->cm_flags |= VAR_0;

  VAR_18->Header.Size =
   sizeof(struct aac_fib_header) + sizeof(u_int32_t);
  VAR_18->Header.XferState =
   VAR_5 |
   VAR_6 |
   VAR_2 |
   VAR_4 |
   VAR_8 |
   VAR_7 |
   VAR_1 |
   VAR_3;
  VAR_18->Header.Command = VAR_11;
  *(uint32_t *)VAR_18->data = VAR_16.tv_sec;

  FUNC_1(VAR_17, ((void*)0), 0, 0);
  FUNC_2(VAR_17);
 }




 FUNC_10(&VAR_15->aac_io_lock);
 VAR_16.tv_sec = 30 * 60;
 VAR_16.tv_usec = 0;
 VAR_15->timeout_id = FUNC_11(FUNC_13, (void *)VAR_15, FUNC_12(&VAR_16));

}
