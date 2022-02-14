
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct isa_config {int dummy; } ;
typedef scalar_t__ (* pnp_scan_cb ) (int ,int ,int *,int,struct isa_config*,int) ;
typedef int device_t ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_4 (int ,int ,int *,int,struct isa_config*,int) ;
 scalar_t__ FUNC_5 (int ,int ,int *,int,struct isa_config*,int) ;

u_char
*FUNC_6(device_t VAR_1, u_char *VAR_2, int VAR_3,
      struct isa_config *VAR_4, int VAR_5, pnp_scan_cb *VAR_6)
{
 u_char *VAR_7;
 u_char VAR_8;
 int VAR_9;

 VAR_7 = VAR_2;
 while (VAR_3 > 0) {
  VAR_8 = *VAR_7++;
  VAR_3--;
  if (FUNC_1(VAR_8) == 0) {

   VAR_9 = FUNC_2(VAR_8);
   if (VAR_3 < VAR_9)
    break;
   if ((*VAR_6)(VAR_1, VAR_8, VAR_7, VAR_9, VAR_4, VAR_5))
    return (VAR_7 + VAR_9);
   if (FUNC_3(VAR_8) == VAR_0)
    return (VAR_7 + VAR_9);
  } else {

   if (VAR_3 < 2)
    break;
   VAR_9 = FUNC_0(VAR_7);
   VAR_7 += 2;
   VAR_3 -= 2;
   if (VAR_3 < VAR_9)
    break;
   if ((*VAR_6)(VAR_1, VAR_8, VAR_7, VAR_9, VAR_4, VAR_5))
    return (VAR_7 + VAR_9);
  }
  VAR_7 += VAR_9;
  VAR_3 -= VAR_9;
 }
 return ((void*)0);
}
