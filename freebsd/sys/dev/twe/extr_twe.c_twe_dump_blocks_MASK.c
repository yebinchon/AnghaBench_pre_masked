
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_int32_t ;
struct twe_softc {int dummy; } ;
struct twe_request {int tr_length; int tr_flags; int tr_status; void* tr_data; } ;
struct TYPE_4__ {int size; int unit; int block_count; int lba; int opcode; } ;
struct TYPE_5__ {TYPE_1__ io; } ;
typedef TYPE_2__ TWE_Command ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_2__* FUNC_0 (struct twe_request*) ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (struct twe_softc*,struct twe_request**) ;
 int FUNC_2 (struct twe_request*,int ) ;
 int FUNC_3 (struct twe_request*) ;
 scalar_t__ FUNC_4 (struct twe_request*) ;

int
FUNC_5(struct twe_softc *VAR_6, int VAR_7, u_int32_t VAR_8, void *VAR_9, int VAR_10)
{
    struct twe_request *VAR_11;
    TWE_Command *VAR_12;
    int VAR_13;

    if (FUNC_1(VAR_6, &VAR_11))
 return(VAR_1);

    VAR_11->tr_data = VAR_9;
    VAR_11->tr_status = VAR_4;
    VAR_11->tr_length = VAR_10 * VAR_2;
    VAR_11->tr_flags = VAR_3;

    VAR_12 = FUNC_0(VAR_11);
    VAR_12->io.opcode = VAR_5;
    VAR_12->io.size = 3;
    VAR_12->io.unit = VAR_7;
    VAR_12->io.block_count = VAR_10;
    VAR_12->io.lba = VAR_8;

    VAR_13 = FUNC_2(VAR_11, 0);
    if (VAR_13 == 0)
 if (FUNC_4(VAR_11))
     VAR_13 = VAR_0;
    FUNC_3(VAR_11);
    return(VAR_13);
}
