
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wpa_s ;
typedef int u8 ;
struct wpa_supplicant {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct wpa_supplicant*,int ,int) ;
 scalar_t__ FUNC_1 (struct wpa_supplicant*,int *) ;
 int FUNC_2 (struct wpa_supplicant*) ;
 scalar_t__ FUNC_3 (struct wpa_supplicant*,int *) ;
 int * FUNC_4 (struct wpa_supplicant*,int *) ;
 int FUNC_5 (int ,char*) ;

__attribute__((used)) static int FUNC_6(void)
{
 struct wpa_supplicant VAR_1;
 int VAR_2 = -1;

 FUNC_0(&VAR_1, 0, sizeof(VAR_1));

 FUNC_2(&VAR_1);

 if (FUNC_4(((void*)0), ((void*)0)) != ((void*)0) ||
     FUNC_4(((void*)0), (u8 *) "123456") != ((void*)0) ||
     FUNC_4(&VAR_1, ((void*)0)) != ((void*)0) ||
     FUNC_4(&VAR_1, (u8 *) "123456") != ((void*)0))
  goto fail;

 if (FUNC_1(((void*)0), ((void*)0)) == 0 ||
     FUNC_1(((void*)0), (u8 *) "123456") == 0 ||
     FUNC_1(&VAR_1, ((void*)0)) == 0)
  goto fail;

 if (FUNC_3(((void*)0), ((void*)0)) == 0 ||
     FUNC_3(((void*)0), (u8 *) "123456") == 0 ||
     FUNC_3(&VAR_1, ((void*)0)) == 0 ||
     FUNC_3(&VAR_1, (u8 *) "123456") == 0)
  goto fail;

 if (FUNC_1(&VAR_1, (u8 *) "111111") < 0 ||
     FUNC_1(&VAR_1, (u8 *) "111111") < 0 ||
     FUNC_1(&VAR_1, (u8 *) "222222") < 0 ||
     FUNC_1(&VAR_1, (u8 *) "333333") < 0 ||
     FUNC_1(&VAR_1, (u8 *) "444444") < 0 ||
     FUNC_3(&VAR_1, (u8 *) "333333") < 0 ||
     FUNC_3(&VAR_1, (u8 *) "xxxxxx") == 0 ||
     FUNC_4(&VAR_1, (u8 *) "xxxxxx") != ((void*)0) ||
     FUNC_4(&VAR_1, (u8 *) "111111") == ((void*)0) ||
     FUNC_4(&VAR_1, (u8 *) "222222") == ((void*)0) ||
     FUNC_4(&VAR_1, (u8 *) "444444") == ((void*)0) ||
     FUNC_3(&VAR_1, (u8 *) "111111") < 0 ||
     FUNC_3(&VAR_1, (u8 *) "222222") < 0 ||
     FUNC_3(&VAR_1, (u8 *) "444444") < 0 ||
     FUNC_1(&VAR_1, (u8 *) "111111") < 0 ||
     FUNC_1(&VAR_1, (u8 *) "222222") < 0 ||
     FUNC_1(&VAR_1, (u8 *) "333333") < 0)
  goto fail;

 VAR_2 = 0;
fail:
 FUNC_2(&VAR_1);

 if (VAR_2)
  FUNC_5(VAR_0, "blacklist module test failure");

 return VAR_2;
}
