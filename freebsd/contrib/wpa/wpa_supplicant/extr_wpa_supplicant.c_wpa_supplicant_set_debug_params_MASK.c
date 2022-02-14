
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_global {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct wpa_global*) ;
 int FUNC_1 (struct wpa_global*) ;
 int FUNC_2 (struct wpa_global*) ;

int FUNC_3(struct wpa_global *VAR_9, int VAR_10,
        int VAR_11, int VAR_12)
{

 int VAR_13, VAR_14, VAR_15;


 if (VAR_10 != VAR_2 &&
     VAR_10 != VAR_4 &&
     VAR_10 != VAR_0 &&
     VAR_10 != VAR_3 &&
     VAR_10 != VAR_5 &&
     VAR_10 != VAR_1)
  return -1;

 VAR_13 = VAR_6;
 VAR_14 = VAR_8;
 VAR_15 = VAR_7;

 VAR_6 = VAR_10;
 VAR_8 = VAR_11 ? 1 : 0;
 VAR_7 = VAR_12 ? 1 : 0;

 if (VAR_6 != VAR_13)
  FUNC_0(VAR_9);
 if (VAR_8 != VAR_14)
  FUNC_2(VAR_9);
 if (VAR_7 != VAR_15)
  FUNC_1(VAR_9);

 return 0;
}
