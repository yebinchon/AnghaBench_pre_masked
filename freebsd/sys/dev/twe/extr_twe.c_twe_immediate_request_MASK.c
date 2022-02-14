
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct twe_softc {int * twe_immediate; } ;
struct twe_request {scalar_t__ tr_status; int tr_length; int * tr_data; int tr_flags; struct twe_softc* tr_sc; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *,int *,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct twe_softc*,int) ;
 int FUNC_4 (struct twe_request*) ;

__attribute__((used)) static int
FUNC_5(struct twe_request *VAR_6, int VAR_7)
{
    struct twe_softc *VAR_8;
    int VAR_9;
    int VAR_10 = 0;

    FUNC_2(4);

    VAR_8 = VAR_6->tr_sc;

    if (VAR_7 && (VAR_6->tr_data != ((void*)0))) {
 VAR_6->tr_flags |= VAR_5;
 if (VAR_6->tr_length > VAR_0)
     return (VAR_2);
 FUNC_1(VAR_6->tr_data, VAR_8->twe_immediate, VAR_6->tr_length);
    }
    VAR_6->tr_status = VAR_3;
    if ((VAR_9 = FUNC_4(VAR_6)) != 0)
 if (VAR_9 != VAR_1)
     return(VAR_9);


    while ((VAR_10++ < 5000) && (VAR_6->tr_status == VAR_3)){
 FUNC_0(1000);
 FUNC_3(VAR_8, 1);
    }
    if (VAR_7 && (VAR_6->tr_data != ((void*)0)))
 FUNC_1(VAR_8->twe_immediate, VAR_6->tr_data, VAR_6->tr_length);

    return(VAR_6->tr_status != VAR_4);
}
