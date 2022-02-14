
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct parsed_hdmi_eld {int dummy; } ;
struct hdmi_eld {int monitor_present; int eld_valid; scalar_t__ eld_size; int lock; int info; int eld_buffer; } ;
struct hdmi_spec_per_pin {TYPE_2__* eld_ctl; int work; int pin_nid; struct hdmi_eld sink_eld; struct hda_codec* codec; } ;
struct hdmi_spec {struct hdmi_eld temp_eld; } ;
struct hda_codec {TYPE_1__* bus; int addr; struct hdmi_spec* spec; } ;
typedef int hda_nid_t ;
struct TYPE_4__ {int id; } ;
struct TYPE_3__ {int card; int workq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,int ,int ,int,int) ;
 scalar_t__ FUNC_1 (int ,int ,scalar_t__) ;
 int FUNC_2 (int ,int ,scalar_t__) ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int *,int ) ;
 int FUNC_8 (int ,int,int *) ;
 int FUNC_9 (struct hda_codec*,int ) ;
 scalar_t__ FUNC_10 (struct hda_codec*,int ,int ,scalar_t__*) ;
 scalar_t__ FUNC_11 (int *,int ,scalar_t__) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static void FUNC_13(struct hdmi_spec_per_pin *VAR_5, int VAR_6)
{
 struct hda_codec *VAR_7 = VAR_5->codec;
 struct hdmi_spec *VAR_8 = VAR_7->spec;
 struct hdmi_eld *VAR_9 = &VAR_8->temp_eld;
 struct hdmi_eld *VAR_10 = &VAR_5->sink_eld;
 hda_nid_t VAR_11 = VAR_5->pin_nid;
 int VAR_12 = FUNC_9(VAR_7, VAR_11);
 bool VAR_13 = 0;
 bool VAR_14 = 0;

 VAR_10->monitor_present = !!(VAR_12 & VAR_1);
 if (VAR_10->monitor_present)
  VAR_9->eld_valid = !!(VAR_12 & VAR_0);
 else
  VAR_9->eld_valid = 0;

 FUNC_0(VAR_4,
  "HDMI status: Codec=%d Pin=%d Presence_Detect=%d ELD_Valid=%d\n",
  VAR_7->addr, VAR_11, VAR_10->monitor_present, VAR_9->eld_valid);

 if (VAR_9->eld_valid) {
  if (FUNC_10(VAR_7, VAR_11, VAR_9->eld_buffer,
           &VAR_9->eld_size) < 0)
   VAR_9->eld_valid = 0;
  else {
   FUNC_3(&VAR_9->info, 0, sizeof(struct parsed_hdmi_eld));
   if (FUNC_11(&VAR_9->info, VAR_9->eld_buffer,
          VAR_9->eld_size) < 0)
    VAR_9->eld_valid = 0;
  }

  if (VAR_9->eld_valid) {
   FUNC_12(&VAR_9->info);
   VAR_13 = 1;
  }
  else if (VAR_6) {
   FUNC_7(VAR_7->bus->workq,
        &VAR_5->work,
        FUNC_4(300));
   return;
  }
 }

 FUNC_5(&VAR_10->lock);
 if (VAR_10->eld_valid && !VAR_9->eld_valid) {
  VAR_13 = 1;
  VAR_14 = 1;
 }
 if (VAR_13) {
  VAR_10->eld_valid = VAR_9->eld_valid;
  VAR_14 = VAR_10->eld_size != VAR_9->eld_size ||
         FUNC_1(VAR_10->eld_buffer, VAR_9->eld_buffer,
         VAR_9->eld_size) != 0;
  if (VAR_14)
   FUNC_2(VAR_10->eld_buffer, VAR_9->eld_buffer,
          VAR_9->eld_size);
  VAR_10->eld_size = VAR_9->eld_size;
  VAR_10->info = VAR_9->info;
 }
 FUNC_6(&VAR_10->lock);

 if (VAR_14)
  FUNC_8(VAR_7->bus->card,
          VAR_3 | VAR_2,
          &VAR_5->eld_ctl->id);
}
