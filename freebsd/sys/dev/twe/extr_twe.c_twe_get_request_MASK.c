
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct twe_softc {int dummy; } ;
struct twe_request {int * tr_complete; scalar_t__ tr_flags; int tr_status; int * tr_private; int * tr_data; } ;
struct TYPE_4__ {scalar_t__ flags; scalar_t__ status; } ;
struct TYPE_5__ {TYPE_1__ generic; } ;
typedef TYPE_2__ TWE_Command ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (struct twe_request*) ;
 int FUNC_1 (struct twe_softc*) ;
 int FUNC_2 (int) ;
 int VAR_1 ;
 struct twe_request* FUNC_3 (struct twe_softc*) ;

__attribute__((used)) static int
FUNC_4(struct twe_softc *VAR_2, struct twe_request **VAR_3)
{
    TWE_Command *VAR_4;
    FUNC_2(4);

    if (!VAR_1)
 FUNC_1(VAR_2);


    *VAR_3 = FUNC_3(VAR_2);


    if (*VAR_3 != ((void*)0)) {
 VAR_4 = FUNC_0(*VAR_3);
 (*VAR_3)->tr_data = ((void*)0);
 (*VAR_3)->tr_private = ((void*)0);
 (*VAR_3)->tr_status = VAR_0;
 (*VAR_3)->tr_flags = 0;
 (*VAR_3)->tr_complete = ((void*)0);
 VAR_4->generic.status = 0;
 VAR_4->generic.flags = 0;
    }
    return(*VAR_3 == ((void*)0));
}
