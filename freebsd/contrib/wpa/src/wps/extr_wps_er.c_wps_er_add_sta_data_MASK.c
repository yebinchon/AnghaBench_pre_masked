
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct wps_parse_attr {scalar_t__* msg_type; int dev_name_len; scalar_t__ dev_name; int serial_number_len; scalar_t__ serial_number; int model_number_len; scalar_t__ model_number; int model_name_len; scalar_t__ model_name; int manufacturer_len; scalar_t__ manufacturer; scalar_t__ dev_password_id; int const* primary_dev_type; int const* uuid_e; scalar_t__ config_methods; } ;
struct wps_er_sta {int m1_received; void* dev_name; void* serial_number; void* model_number; void* model_name; void* manufacturer; void* dev_passwd_id; int pri_dev_type; int uuid; void* config_methods; int list; struct wps_er_ap* ap; int addr; } ;
struct wps_er_ap {TYPE_1__* er; int sta; } ;
struct TYPE_2__ {int wps; } ;


 int VAR_0 ;
 void* FUNC_0 (scalar_t__) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int *) ;
 void* FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (int ,struct wps_er_sta*,int *) ;
 int FUNC_4 (int,int ,int ,struct wps_er_sta*,int *) ;
 int FUNC_5 (void*) ;
 int FUNC_6 (int ,int const*,int) ;
 struct wps_er_sta* FUNC_7 (int) ;
 int FUNC_8 (int ,struct wps_er_sta*,int ) ;
 struct wps_er_sta* FUNC_9 (struct wps_er_ap*,int const*,int *) ;
 int VAR_4 ;

__attribute__((used)) static struct wps_er_sta * FUNC_10(struct wps_er_ap *VAR_5,
            const u8 *VAR_6,
            struct wps_parse_attr *VAR_7,
            int VAR_8)
{
 struct wps_er_sta *VAR_9 = FUNC_9(VAR_5, VAR_6, ((void*)0));
 int VAR_10 = 0;
 int VAR_11;

 VAR_11 = !VAR_8 && VAR_7->msg_type && *VAR_7->msg_type == VAR_2;

 if (VAR_9 == ((void*)0)) {





  if (!VAR_8 && !VAR_11)
   return ((void*)0);

  VAR_9 = FUNC_7(sizeof(*VAR_9));
  if (VAR_9 == ((void*)0))
   return ((void*)0);
  FUNC_6(VAR_9->addr, VAR_6, VAR_0);
  VAR_9->ap = VAR_5;
  FUNC_1(&VAR_5->sta, &VAR_9->list);
  VAR_10 = 1;
 }

 if (VAR_11)
  VAR_9->m1_received = 1;

 if (VAR_7->config_methods && (!VAR_8 || !VAR_9->m1_received))
  VAR_9->config_methods = FUNC_0(VAR_7->config_methods);
 if (VAR_7->uuid_e && (!VAR_8 || !VAR_9->m1_received))
  FUNC_6(VAR_9->uuid, VAR_7->uuid_e, VAR_3);
 if (VAR_7->primary_dev_type && (!VAR_8 || !VAR_9->m1_received))
  FUNC_6(VAR_9->pri_dev_type, VAR_7->primary_dev_type, 8);
 if (VAR_7->dev_password_id && (!VAR_8 || !VAR_9->m1_received))
  VAR_9->dev_passwd_id = FUNC_0(VAR_7->dev_password_id);

 if (VAR_7->manufacturer) {
  FUNC_5(VAR_9->manufacturer);
  VAR_9->manufacturer = FUNC_2(VAR_7->manufacturer,
            VAR_7->manufacturer_len);
 }

 if (VAR_7->model_name) {
  FUNC_5(VAR_9->model_name);
  VAR_9->model_name = FUNC_2(VAR_7->model_name,
          VAR_7->model_name_len);
 }

 if (VAR_7->model_number) {
  FUNC_5(VAR_9->model_number);
  VAR_9->model_number = FUNC_2(VAR_7->model_number,
            VAR_7->model_number_len);
 }

 if (VAR_7->serial_number) {
  FUNC_5(VAR_9->serial_number);
  VAR_9->serial_number = FUNC_2(VAR_7->serial_number,
      VAR_7->serial_number_len);
 }

 if (VAR_7->dev_name) {
  FUNC_5(VAR_9->dev_name);
  VAR_9->dev_name = FUNC_2(VAR_7->dev_name, VAR_7->dev_name_len);
 }

 FUNC_3(VAR_4, VAR_9, ((void*)0));
 FUNC_4(300, 0, VAR_4, VAR_9, ((void*)0));

 if (VAR_11 || VAR_10)
  FUNC_8(VAR_5->er->wps, VAR_9, VAR_1);

 return VAR_9;
}
