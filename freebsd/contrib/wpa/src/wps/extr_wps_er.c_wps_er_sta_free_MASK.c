
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wps_er_sta {struct wps_er_sta* cred; int http; struct wps_er_sta* dev_name; struct wps_er_sta* serial_number; struct wps_er_sta* model_number; struct wps_er_sta* model_name; struct wps_er_sta* manufacturer; scalar_t__ wps; TYPE_2__* ap; } ;
struct TYPE_4__ {TYPE_1__* er; } ;
struct TYPE_3__ {int wps; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct wps_er_sta*,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct wps_er_sta*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ,struct wps_er_sta*,int ) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_5(struct wps_er_sta *VAR_2)
{
 FUNC_4(VAR_2->ap->er->wps, VAR_2, VAR_0);
 if (VAR_2->wps)
  FUNC_3(VAR_2->wps);
 FUNC_2(VAR_2->manufacturer);
 FUNC_2(VAR_2->model_name);
 FUNC_2(VAR_2->model_number);
 FUNC_2(VAR_2->serial_number);
 FUNC_2(VAR_2->dev_name);
 FUNC_1(VAR_2->http);
 FUNC_0(VAR_1, VAR_2, ((void*)0));
 FUNC_2(VAR_2->cred);
 FUNC_2(VAR_2);
}
