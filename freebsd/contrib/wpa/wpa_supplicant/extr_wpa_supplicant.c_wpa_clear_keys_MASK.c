
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct wpa_supplicant {int keys_cleared; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int const*) ;
 int FUNC_2 (struct wpa_supplicant*,int const*,int ,int ) ;
 int FUNC_3 (struct wpa_supplicant*,int ,int const*,int,int ,int *,int ,int *,int ) ;

void FUNC_4(struct wpa_supplicant *VAR_3, const u8 *VAR_4)
{
 int VAR_5, VAR_6;




 VAR_6 = 4;



 for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5++) {
  if (VAR_3->keys_cleared & FUNC_0(VAR_5))
   continue;
  FUNC_3(VAR_3, VAR_2, ((void*)0), VAR_5, 0, ((void*)0), 0,
    ((void*)0), 0);
 }
 if (!(VAR_3->keys_cleared & FUNC_0(0)) && VAR_4 &&
     !FUNC_1(VAR_4)) {
  FUNC_3(VAR_3, VAR_2, VAR_4, 0, 0, ((void*)0), 0, ((void*)0),
    0);

  FUNC_2(
   VAR_3, VAR_4,
   VAR_1,
   VAR_0);
 }
 VAR_3->keys_cleared = (u32) -1;
}
