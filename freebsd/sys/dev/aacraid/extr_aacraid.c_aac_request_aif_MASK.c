
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct aac_softc {int aif_pending; } ;
struct TYPE_2__ {int Size; int XferState; int Handle; int Command; } ;
struct aac_fib {scalar_t__ data; TYPE_1__ Header; } ;
struct aac_command {struct aac_fib* cm_fib; } ;
struct aac_aif_command {int command; } ;


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
 scalar_t__ FUNC_0 (struct aac_softc*,struct aac_command**) ;
 int FUNC_1 (struct aac_command*,int *,int ,int ) ;
 int FUNC_2 (struct aac_softc*,char*,char*) ;

__attribute__((used)) static void
FUNC_3(struct aac_softc *VAR_10)
{
 struct aac_command *VAR_11;
 struct aac_fib *VAR_12;

 FUNC_2(VAR_10, VAR_9, "");

 if (FUNC_0(VAR_10, &VAR_11)) {
  VAR_10->aif_pending = 1;
  return;
 }
 VAR_10->aif_pending = 0;


 VAR_12 = VAR_11->cm_fib;
 VAR_12->Header.Size = sizeof(struct aac_fib);
 VAR_12->Header.XferState =
        VAR_3 |
        VAR_4 |
        VAR_1 |
        VAR_2 |
        VAR_6 |
        VAR_5 |
        VAR_0;

 VAR_12->Header.Handle = 0x00800000;
 VAR_12->Header.Command = VAR_8;
 ((struct aac_aif_command *)VAR_12->data)->command = VAR_7;

 FUNC_1(VAR_11, ((void*)0), 0, 0);
}
