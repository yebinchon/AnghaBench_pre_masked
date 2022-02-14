
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpa_supplicant {scalar_t__** tspecs; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static u8 FUNC_0(struct wpa_supplicant *VAR_2)
{
 int VAR_3, VAR_4, VAR_5 = 0;

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
  for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
   if (VAR_2->tspecs[VAR_3][VAR_4])
    VAR_5++;
  }
 }

 return VAR_5;
}
