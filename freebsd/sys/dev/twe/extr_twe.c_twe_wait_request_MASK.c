
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct twe_request {scalar_t__ tr_status; TYPE_1__* tr_sc; int tr_flags; } ;
struct TYPE_3__ {int twe_io_lock; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct twe_request*,int *,int ,char*,int ) ;
 int FUNC_3 (struct twe_request*) ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_5(struct twe_request *VAR_4)
{

    FUNC_1(4);

    FUNC_0(VAR_4->tr_sc);
    VAR_4->tr_flags |= VAR_3;
    VAR_4->tr_status = VAR_1;
    FUNC_3(VAR_4);
    FUNC_4(VAR_4->tr_sc);
    while (VAR_4->tr_status == VAR_1)
 FUNC_2(VAR_4, &VAR_4->tr_sc->twe_io_lock, VAR_0, "twewait", 0);

    return(VAR_4->tr_status != VAR_2);
}
