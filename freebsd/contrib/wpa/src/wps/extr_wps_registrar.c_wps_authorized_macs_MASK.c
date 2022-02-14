
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wps_registrar {int * authorized_macs_union; } ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;

const u8 * FUNC_1(struct wps_registrar *VAR_1, size_t *VAR_2)
{
 *VAR_2 = 0;

 while (*VAR_2 < VAR_0) {
  if (FUNC_0(VAR_1->authorized_macs_union[*VAR_2]))
   break;
  (*VAR_2)++;
 }

 return (const u8 *) VAR_1->authorized_macs_union;
}
