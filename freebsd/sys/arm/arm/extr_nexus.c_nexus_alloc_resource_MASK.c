
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct rman {int dummy; } ;
struct resource {int dummy; } ;
typedef int rman_res_t ;
typedef int device_t ;


 int VAR_0 ;


 scalar_t__ FUNC_0 (int ,int,int,struct resource*) ;
 struct rman VAR_1 ;
 int FUNC_1 (struct resource*) ;
 struct resource* FUNC_2 (struct rman*,int ,int ,int ,int,int ) ;
 int FUNC_3 (struct resource*,int) ;

__attribute__((used)) static struct resource *
FUNC_4(device_t VAR_2, device_t VAR_3, int VAR_4, int *VAR_5,
    rman_res_t VAR_6, rman_res_t VAR_7, rman_res_t VAR_8, u_int VAR_9)
{
 struct resource *VAR_10;
 struct rman *VAR_11;
 int VAR_12 = VAR_9 & VAR_0;

 VAR_9 &= ~VAR_0;

 switch (VAR_4) {
 case 128:
 case 129:
  VAR_11 = &VAR_1;
  break;

 default:
  return (((void*)0));
 }

 VAR_10 = FUNC_2(VAR_11, VAR_6, VAR_7, VAR_8, VAR_9, VAR_3);
 if (VAR_10 == ((void*)0))
  return (((void*)0));

 FUNC_3(VAR_10, *VAR_5);

 if (VAR_12) {
  if (FUNC_0(VAR_3, VAR_4, *VAR_5, VAR_10)) {
   FUNC_1(VAR_10);
   return (0);
  }
 }

 return (VAR_10);
}
