
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysctl_oid {int dummy; } ;
struct evdev_dev {int ev_unit; int ev_sw_flags; int ev_sysctl_ctx; int ev_snd_flags; int ev_led_flags; int ev_msc_flags; int ev_abs_flags; int ev_rel_flags; int ev_key_flags; int ev_type_flags; int ev_prop_flags; int ev_serial; int ev_shortname; int ev_id; int ev_name; } ;
typedef int ev_unit_str ;


 int VAR_0 ;
 int VAR_1 ;
 struct sysctl_oid* FUNC_0 (int *,int ,int ,char*,int ,int *,char*,char*) ;
 int FUNC_1 (int *,int ,int ,char*,int ,int ,int,char*,char*) ;
 int FUNC_2 (int *,int ,int ,char*,int ,int ,int ,char*) ;
 int FUNC_3 (int *,int ,int ,char*,int ,int *,int ,char*) ;
 int FUNC_4 (struct sysctl_oid*) ;
 int FUNC_5 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (char*,int,char*,int) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void
FUNC_8(struct evdev_dev *VAR_4)
{
 struct sysctl_oid *VAR_5;
 char VAR_6[8];

 FUNC_6(VAR_6, sizeof(VAR_6), "%d", VAR_4->ev_unit);
 FUNC_7(&VAR_4->ev_sysctl_ctx);

 VAR_5 = FUNC_0(&VAR_4->ev_sysctl_ctx,
     FUNC_5(VAR_2), VAR_1,
     VAR_6, VAR_0, ((void*)0), "", "device index");

 FUNC_2(&VAR_4->ev_sysctl_ctx,
     FUNC_4(VAR_5), VAR_1, "name", VAR_0,
     VAR_4->ev_name, 0,
     "Input device name");

 FUNC_3(&VAR_4->ev_sysctl_ctx,
     FUNC_4(VAR_5), VAR_1, "id", VAR_0,
     &VAR_4->ev_id, VAR_3,
     "Input device identification");


 FUNC_2(&VAR_4->ev_sysctl_ctx,
     FUNC_4(VAR_5), VAR_1, "phys", VAR_0,
     VAR_4->ev_shortname, 0,
     "Input device short name");


 FUNC_2(&VAR_4->ev_sysctl_ctx,
     FUNC_4(VAR_5), VAR_1, "uniq", VAR_0,
     VAR_4->ev_serial, 0,
     "Input device unique number");

 FUNC_1(&VAR_4->ev_sysctl_ctx,
     FUNC_4(VAR_5), VAR_1, "props", VAR_0,
     VAR_4->ev_prop_flags, sizeof(VAR_4->ev_prop_flags), "",
     "Input device properties");

 FUNC_1(&VAR_4->ev_sysctl_ctx,
     FUNC_4(VAR_5), VAR_1, "type_bits", VAR_0,
     VAR_4->ev_type_flags, sizeof(VAR_4->ev_type_flags), "",
     "Input device supported events types");

 FUNC_1(&VAR_4->ev_sysctl_ctx,
     FUNC_4(VAR_5), VAR_1, "key_bits", VAR_0,
     VAR_4->ev_key_flags, sizeof(VAR_4->ev_key_flags),
     "", "Input device supported keys");

 FUNC_1(&VAR_4->ev_sysctl_ctx,
     FUNC_4(VAR_5), VAR_1, "rel_bits", VAR_0,
     VAR_4->ev_rel_flags, sizeof(VAR_4->ev_rel_flags), "",
     "Input device supported relative events");

 FUNC_1(&VAR_4->ev_sysctl_ctx,
     FUNC_4(VAR_5), VAR_1, "abs_bits", VAR_0,
     VAR_4->ev_abs_flags, sizeof(VAR_4->ev_abs_flags), "",
     "Input device supported absolute events");

 FUNC_1(&VAR_4->ev_sysctl_ctx,
     FUNC_4(VAR_5), VAR_1, "msc_bits", VAR_0,
     VAR_4->ev_msc_flags, sizeof(VAR_4->ev_msc_flags), "",
     "Input device supported miscellaneous events");

 FUNC_1(&VAR_4->ev_sysctl_ctx,
     FUNC_4(VAR_5), VAR_1, "led_bits", VAR_0,
     VAR_4->ev_led_flags, sizeof(VAR_4->ev_led_flags), "",
     "Input device supported LED events");

 FUNC_1(&VAR_4->ev_sysctl_ctx,
     FUNC_4(VAR_5), VAR_1, "snd_bits", VAR_0,
     VAR_4->ev_snd_flags, sizeof(VAR_4->ev_snd_flags), "",
     "Input device supported sound events");

 FUNC_1(&VAR_4->ev_sysctl_ctx,
     FUNC_4(VAR_5), VAR_1, "sw_bits", VAR_0,
     VAR_4->ev_sw_flags, sizeof(VAR_4->ev_sw_flags), "",
     "Input device supported switch events");
}
