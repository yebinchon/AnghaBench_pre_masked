
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct aac_softc {int aac_max_fib_size; int aac_io_lock; int aac_dev; } ;
struct aac_fib_header {int dummy; } ;
struct aac_event {struct aac_command** ev_arg; int ev_callback; int ev_type; } ;
struct aac_command {TYPE_2__* cm_fib; scalar_t__ cm_datalen; int cm_timestamp; } ;
typedef int caddr_t ;
struct TYPE_4__ {int Size; } ;
struct TYPE_5__ {TYPE_1__ Header; } ;


 int VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct aac_softc*,struct aac_event*) ;
 scalar_t__ FUNC_1 (struct aac_softc*,struct aac_command**) ;
 int FUNC_2 (struct aac_command*) ;
 int FUNC_3 (struct aac_command*) ;
 int FUNC_4 (int ,TYPE_2__*,int) ;
 int FUNC_5 (TYPE_2__*,int ,int) ;
 int FUNC_6 (int ,char*,int,...) ;
 int FUNC_7 (struct aac_softc*,char*,char*) ;
 struct aac_event* FUNC_8 (int,int ,int) ;
 int FUNC_9 (struct aac_command*,int *,int ,char*,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int VAR_7 ;

__attribute__((used)) static int
FUNC_12(struct aac_softc *VAR_8, caddr_t VAR_9)
{
 struct aac_command *VAR_10;
 int VAR_11, VAR_12;

 FUNC_7(VAR_8, VAR_2, "");

 VAR_10 = ((void*)0);




 FUNC_10(&VAR_8->aac_io_lock);
 if (FUNC_1(VAR_8, &VAR_10)) {
  struct aac_event *VAR_13;

  VAR_13 = FUNC_8(sizeof(struct aac_event), VAR_3,
      VAR_4 | VAR_5);
  if (VAR_13 == ((void*)0)) {
   VAR_12 = VAR_1;
   FUNC_11(&VAR_8->aac_io_lock);
   goto out;
  }
  VAR_13->ev_type = VAR_0;
  VAR_13->ev_callback = VAR_6;
  VAR_13->ev_arg = &VAR_10;
  FUNC_0(VAR_8, VAR_13);
  FUNC_9(VAR_10, &VAR_8->aac_io_lock, 0, "aacraid_ctlsfib", 0);
 }
 FUNC_11(&VAR_8->aac_io_lock);




 if ((VAR_12 = FUNC_4(VAR_9, VAR_10->cm_fib,
       sizeof(struct aac_fib_header))) != 0)
  goto out;
 VAR_11 = VAR_10->cm_fib->Header.Size + sizeof(struct aac_fib_header);
 if (VAR_11 > VAR_8->aac_max_fib_size) {
  FUNC_6(VAR_8->aac_dev, "incoming FIB oversized (%d > %d)\n",
         VAR_11, VAR_8->aac_max_fib_size);
  VAR_11 = VAR_8->aac_max_fib_size;
 }
 if ((VAR_12 = FUNC_4(VAR_9, VAR_10->cm_fib, VAR_11)) != 0)
  goto out;
 VAR_10->cm_fib->Header.Size = VAR_11;
 VAR_10->cm_timestamp = VAR_7;
 VAR_10->cm_datalen = 0;




 FUNC_10(&VAR_8->aac_io_lock);
 VAR_12 = FUNC_3(VAR_10);
 FUNC_11(&VAR_8->aac_io_lock);
 if (VAR_12 != 0) {
  FUNC_6(VAR_8->aac_dev,
         "aacraid_wait_command return %d\n", VAR_12);
  goto out;
 }




 VAR_11 = VAR_10->cm_fib->Header.Size;
 if (VAR_11 > VAR_8->aac_max_fib_size) {
  FUNC_6(VAR_8->aac_dev, "outbound FIB oversized (%d > %d)\n",
         VAR_11, VAR_8->aac_max_fib_size);
  VAR_11 = VAR_8->aac_max_fib_size;
 }
 VAR_12 = FUNC_5(VAR_10->cm_fib, VAR_9, VAR_11);

out:
 if (VAR_10 != ((void*)0)) {
  FUNC_10(&VAR_8->aac_io_lock);
  FUNC_2(VAR_10);
  FUNC_11(&VAR_8->aac_io_lock);
 }
 return(VAR_12);
}
