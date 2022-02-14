
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_int16_t ;
struct twe_softc {int dummy; } ;
struct TYPE_4__ {scalar_t__ data; } ;
typedef TYPE_1__ TWE_Param ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 TYPE_1__* FUNC_1 (struct twe_softc*,int,int,int,int *) ;

__attribute__((used)) static int
FUNC_2(struct twe_softc *VAR_2, int VAR_3, int VAR_4, u_int16_t *VAR_5)
{
    TWE_Param *VAR_6;

    if ((VAR_6 = FUNC_1(VAR_2, VAR_3, VAR_4, 2, ((void*)0))) == ((void*)0))
 return(VAR_0);
    *VAR_5 = *(u_int16_t *)VAR_6->data;
    FUNC_0(VAR_6, VAR_1);
    return(0);
}
