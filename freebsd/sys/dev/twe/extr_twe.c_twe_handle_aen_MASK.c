
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int16_t ;
struct twe_softc {int dummy; } ;
struct twe_request {scalar_t__ tr_data; struct twe_softc* tr_sc; } ;
struct TYPE_2__ {scalar_t__ data; } ;
typedef TYPE_1__ TWE_Param ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (struct twe_softc*,int ) ;
 int FUNC_3 (struct twe_request*) ;

__attribute__((used)) static void
FUNC_4(struct twe_request *VAR_1)
{
    struct twe_softc *VAR_2 = VAR_1->tr_sc;
    TWE_Param *VAR_3;
    u_int16_t VAR_4;

    FUNC_0(4);



    VAR_3 = (TWE_Param *)VAR_1->tr_data;
    VAR_4 = *(u_int16_t *)(VAR_3->data);

    FUNC_1(VAR_1->tr_data, VAR_0);
    FUNC_3(VAR_1);
    FUNC_2(VAR_2, VAR_4);


}
