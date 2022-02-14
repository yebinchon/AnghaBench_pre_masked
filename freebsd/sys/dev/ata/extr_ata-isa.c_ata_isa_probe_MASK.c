
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
typedef int rman_res_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (int ,int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ) ;
 struct resource* FUNC_2 (int ,int ,int*,int ,int ) ;
 scalar_t__ FUNC_3 (int ,int ,int,int *,int *) ;
 int FUNC_4 (int ,int ,int,struct resource*) ;
 int FUNC_5 (int ,int ,int,scalar_t__,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,char*) ;
 scalar_t__ FUNC_8 (struct resource*) ;

__attribute__((used)) static int
FUNC_9(device_t VAR_9)
{
    struct resource *VAR_10 = ((void*)0), *VAR_11 = ((void*)0);
    rman_res_t VAR_12;
    int VAR_13;


    if (FUNC_0(FUNC_6(VAR_9), VAR_9, VAR_8) == VAR_5)
 return VAR_5;


    VAR_13 = VAR_3;
    if (!(VAR_10 = FUNC_2(VAR_9, VAR_7, &VAR_13,
        VAR_4, VAR_6)))
 return VAR_5;


    if (FUNC_3(VAR_9, VAR_7, VAR_0, &VAR_12, &VAR_12)) {
 FUNC_5(VAR_9, VAR_7, VAR_0,
    FUNC_8(VAR_10) + VAR_2, VAR_1);
    }


    VAR_13 = VAR_0;
    if (!(VAR_11 = FUNC_2(VAR_9, VAR_7, &VAR_13,
           VAR_1, VAR_6))) {
 FUNC_4(VAR_9, VAR_7, VAR_3, VAR_10);
 return VAR_5;
    }


    FUNC_4(VAR_9, VAR_7, VAR_0, VAR_11);
    FUNC_4(VAR_9, VAR_7, VAR_3, VAR_10);

    FUNC_7(VAR_9, "ATA channel");
    return (FUNC_1(VAR_9));
}
