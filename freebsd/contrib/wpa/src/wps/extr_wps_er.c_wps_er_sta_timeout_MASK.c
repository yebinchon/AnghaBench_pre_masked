
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wps_er_sta {int list; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct wps_er_sta*) ;

__attribute__((used)) static void FUNC_3(void *VAR_1, void *VAR_2)
{
 struct wps_er_sta *VAR_3 = VAR_1;
 FUNC_1(VAR_0, "WPS ER: STA entry timed out");
 FUNC_0(&VAR_3->list);
 FUNC_2(VAR_3);
}
