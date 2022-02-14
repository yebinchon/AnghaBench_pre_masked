
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct twe_softc {int dummy; } ;
struct twe_request {int tr_flags; int tr_length; TYPE_2__* tr_data; } ;
struct TYPE_6__ {int size; int param_count; scalar_t__ unit; int opcode; } ;
struct TYPE_8__ {TYPE_1__ param; } ;
struct TYPE_7__ {int table_id; int parameter_id; int parameter_size_bytes; int data; } ;
typedef TYPE_2__ TWE_Param ;
typedef TYPE_3__ TWE_Command ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_3__* FUNC_0 (struct twe_request*) ;
 int FUNC_1 (struct twe_softc*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (void*,int ,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_5 (int ,int ,int ) ;
 scalar_t__ FUNC_6 (struct twe_softc*,struct twe_request**) ;
 int FUNC_7 (struct twe_request*,int) ;
 int FUNC_8 (struct twe_request*) ;
 scalar_t__ FUNC_9 (struct twe_request*) ;

__attribute__((used)) static int
FUNC_10(struct twe_softc *VAR_8, int VAR_9, int VAR_10, int VAR_11, void *VAR_12)
{
    struct twe_request *VAR_13;
    TWE_Command *VAR_14;
    TWE_Param *VAR_15;
    int VAR_16;

    FUNC_3(4);

    FUNC_1(VAR_8);
    VAR_13 = ((void*)0);
    VAR_15 = ((void*)0);
    VAR_16 = VAR_1;


    if (FUNC_6(VAR_8, &VAR_13))
 goto out;


    if ((VAR_15 = (TWE_Param *)FUNC_5(VAR_7, VAR_2, VAR_3)) == ((void*)0))
 goto out;
    VAR_13->tr_data = VAR_15;
    VAR_13->tr_length = VAR_7;
    VAR_13->tr_flags = VAR_4 | VAR_5;


    VAR_14 = FUNC_0(VAR_13);
    VAR_14->param.opcode = VAR_6;
    VAR_14->param.size = 2;
    VAR_14->param.unit = 0;
    VAR_14->param.param_count = 1;


    VAR_15->table_id = VAR_9;
    VAR_15->parameter_id = VAR_10;
    VAR_15->parameter_size_bytes = VAR_11;
    FUNC_2(VAR_12, VAR_15->data, VAR_11);


    VAR_16 = FUNC_7(VAR_13, 1 );
    if (VAR_16 == 0) {
 if (FUNC_9(VAR_13))
     VAR_16 = VAR_0;
    }

out:
    if (VAR_13 != ((void*)0))
 FUNC_8(VAR_13);
    if (VAR_15 != ((void*)0))
 FUNC_4(VAR_15, VAR_2);
    return(VAR_16);
}
