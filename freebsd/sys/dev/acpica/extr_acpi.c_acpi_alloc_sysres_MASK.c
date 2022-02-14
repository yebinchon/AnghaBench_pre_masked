
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct rman {int dummy; } ;
struct resource {int dummy; } ;
typedef int rman_res_t ;
typedef int device_t ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;


 struct rman VAR_1 ;
 struct rman VAR_2 ;
 scalar_t__ FUNC_1 (int ,int,int,struct resource*) ;
 int FUNC_2 (struct resource*) ;
 struct resource* FUNC_3 (struct rman*,int,int,int,int,int ) ;
 int FUNC_4 (struct resource*,int) ;

struct resource *
FUNC_5(device_t VAR_3, int VAR_4, int *VAR_5, rman_res_t VAR_6,
    rman_res_t VAR_7, rman_res_t VAR_8, u_int VAR_9)
{
    struct rman *VAR_10;
    struct resource *VAR_11;

    switch (VAR_4) {
    case 129:
 VAR_10 = &VAR_1;
 break;
    case 128:
 VAR_10 = &VAR_2;
 break;
    default:
 return (((void*)0));
    }

    FUNC_0(VAR_6 + VAR_8 - 1 == VAR_7, ("wildcard resource range"));
    VAR_11 = FUNC_3(VAR_10, VAR_6, VAR_7, VAR_8, VAR_9 & ~VAR_0,
 VAR_3);
    if (VAR_11 == ((void*)0))
 return (((void*)0));

    FUNC_4(VAR_11, *VAR_5);


    if (VAR_9 & VAR_0)
 if (FUNC_1(VAR_3, VAR_4, *VAR_5, VAR_11) != 0) {
     FUNC_2(VAR_11);
     return (((void*)0));
 }

    return (VAR_11);
}
