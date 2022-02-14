
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ client; int port; } ;
struct snd_seq_port_info {int device; unsigned int subdevice; unsigned int subdevices_count; scalar_t__ seq_client; int flags; char* name; int capability; int type; int midi_channels; int seq_port; unsigned int* ports_per_device; int num_ports; struct snd_seq_port_info** ports; TYPE_2__ addr; struct snd_seq_port_info* kernel; int event_input; int unuse; int use; int unsubscribe; int subscribe; struct snd_seq_port_info* private_data; int owner; int subname; void* stream; } ;
struct snd_seq_port_callback {int device; unsigned int subdevice; unsigned int subdevices_count; scalar_t__ seq_client; int flags; char* name; int capability; int type; int midi_channels; int seq_port; unsigned int* ports_per_device; int num_ports; struct snd_seq_port_callback** ports; TYPE_2__ addr; struct snd_seq_port_callback* kernel; int event_input; int unuse; int use; int unsubscribe; int subscribe; struct snd_seq_port_callback* private_data; int owner; int subname; void* stream; } ;
struct snd_seq_device {int device; struct snd_card* card; struct snd_rawmidi* private_data; } ;
struct snd_rawmidi_info {int device; unsigned int subdevice; unsigned int subdevices_count; scalar_t__ seq_client; int flags; char* name; int capability; int type; int midi_channels; int seq_port; unsigned int* ports_per_device; int num_ports; struct snd_rawmidi_info** ports; TYPE_2__ addr; struct snd_rawmidi_info* kernel; int event_input; int unuse; int use; int unsubscribe; int subscribe; struct snd_rawmidi_info* private_data; int owner; int subname; void* stream; } ;
struct snd_rawmidi {TYPE_1__* ops; } ;
struct snd_card {size_t number; scalar_t__* shortname; } ;
struct seq_midisynth_client {int device; unsigned int subdevice; unsigned int subdevices_count; scalar_t__ seq_client; int flags; char* name; int capability; int type; int midi_channels; int seq_port; unsigned int* ports_per_device; int num_ports; struct seq_midisynth_client** ports; TYPE_2__ addr; struct seq_midisynth_client* kernel; int event_input; int unuse; int use; int unsubscribe; int subscribe; struct seq_midisynth_client* private_data; int owner; int subname; void* stream; } ;
struct seq_midisynth {int device; unsigned int subdevice; unsigned int subdevices_count; scalar_t__ seq_client; int flags; char* name; int capability; int type; int midi_channels; int seq_port; unsigned int* ports_per_device; int num_ports; struct seq_midisynth** ports; TYPE_2__ addr; struct seq_midisynth* kernel; int event_input; int unuse; int use; int unsubscribe; int subscribe; struct seq_midisynth* private_data; int owner; int subname; void* stream; } ;
typedef int pcallbacks ;
struct TYPE_3__ {int (* get_port_info ) (struct snd_rawmidi*,unsigned int,struct snd_seq_port_info*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 struct snd_seq_port_info* FUNC_0 (unsigned int,int,int ) ;
 int FUNC_1 (struct snd_seq_port_info*) ;
 struct snd_seq_port_info* FUNC_2 (int,int ) ;
 struct snd_seq_port_info* FUNC_3 (int,int ) ;
 int FUNC_4 (struct snd_seq_port_info*,int ,int) ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int VAR_28 ;
 scalar_t__ FUNC_7 (int) ;
 scalar_t__ FUNC_8 (struct snd_card*,struct snd_seq_port_info*) ;
 scalar_t__ FUNC_9 (struct snd_card*,int ,char*,char const*) ;
 int FUNC_10 (scalar_t__) ;
 scalar_t__ FUNC_11 (scalar_t__,int ,struct snd_seq_port_info*) ;
 int FUNC_12 (struct snd_seq_port_info*) ;
 scalar_t__ FUNC_13 (struct snd_seq_port_info*,struct snd_card*,int,unsigned int) ;
 int FUNC_14 (char*,int,char*,char*,...) ;
 int FUNC_15 (char*,char*,int,int,...) ;
 int FUNC_16 (char*,int ) ;
 int FUNC_17 (struct snd_rawmidi*,unsigned int,struct snd_seq_port_info*) ;
 struct snd_seq_port_info** VAR_29 ;

__attribute__((used)) static int
FUNC_18(struct snd_seq_device *VAR_30)
{
 struct seq_midisynth_client *VAR_31;
 struct seq_midisynth *VAR_32, *VAR_33;
 struct snd_seq_port_info *VAR_34;
 struct snd_rawmidi_info *VAR_35;
 struct snd_rawmidi *VAR_36 = VAR_30->private_data;
 int VAR_37 = 0;
 unsigned int VAR_38, VAR_39;
 struct snd_seq_port_callback VAR_40;
 struct snd_card *VAR_41 = VAR_30->card;
 int VAR_42 = VAR_30->device;
 unsigned int VAR_43 = 0, VAR_44 = 0;

 if (FUNC_7(!VAR_41 || VAR_42 < 0 || VAR_42 >= VAR_4))
  return -VAR_0;
 VAR_35 = FUNC_2(sizeof(*VAR_35), VAR_3);
 if (! VAR_35)
  return -VAR_2;
 VAR_35->device = VAR_42;
 VAR_35->stream = VAR_9;
 VAR_35->subdevice = 0;
 if (FUNC_8(VAR_41, VAR_35) >= 0)
  VAR_44 = VAR_35->subdevices_count;
 VAR_35->stream = VAR_8;
 if (FUNC_8(VAR_41, VAR_35) >= 0) {
  VAR_43 = VAR_35->subdevices_count;
 }
 VAR_39 = VAR_44;
 if (VAR_39 < VAR_43)
  VAR_39 = VAR_43;
 if (VAR_39 == 0) {
  FUNC_1(VAR_35);
  return -VAR_1;
 }
 if (VAR_39 > (256 / VAR_4))
  VAR_39 = 256 / VAR_4;

 FUNC_5(&VAR_28);
 VAR_31 = VAR_29[VAR_41->number];
 if (VAR_31 == ((void*)0)) {
  VAR_37 = 1;
  VAR_31 = FUNC_3(sizeof(*VAR_31), VAR_3);
  if (VAR_31 == ((void*)0)) {
   FUNC_6(&VAR_28);
   FUNC_1(VAR_35);
   return -VAR_2;
  }
  VAR_31->seq_client =
   FUNC_9(
    VAR_41, 0, "%s", VAR_41->shortname[0] ?
    (const char *)VAR_41->shortname : "External MIDI");
  if (VAR_31->seq_client < 0) {
   FUNC_1(VAR_31);
   FUNC_6(&VAR_28);
   FUNC_1(VAR_35);
   return -VAR_2;
  }
 }

 VAR_32 = FUNC_0(VAR_39, sizeof(struct seq_midisynth), VAR_3);
 VAR_34 = FUNC_2(sizeof(*VAR_34), VAR_3);
 if (VAR_32 == ((void*)0) || VAR_34 == ((void*)0))
  goto __nomem;

 for (VAR_38 = 0; VAR_38 < VAR_39; VAR_38++) {
  VAR_33 = &VAR_32[VAR_38];

  if (FUNC_13(VAR_33, VAR_41, VAR_42, VAR_38) < 0)
   goto __nomem;


  FUNC_4(VAR_34, 0, sizeof(*VAR_34));
  VAR_34->addr.client = VAR_31->seq_client;
  VAR_34->addr.port = VAR_42 * (256 / VAR_4) + VAR_38;
  VAR_34->flags = VAR_18;
  FUNC_4(VAR_35, 0, sizeof(*VAR_35));
  VAR_35->device = VAR_42;
  if (VAR_38 < VAR_44)
   VAR_35->stream = VAR_9;
  else
   VAR_35->stream = VAR_8;
  VAR_35->subdevice = VAR_38;
  if (FUNC_8(VAR_41, VAR_35) >= 0)
   FUNC_16(VAR_34->name, VAR_35->subname);
  if (! VAR_34->name[0]) {
   if (VAR_35->name[0]) {
    if (VAR_39 > 1)
     FUNC_14(VAR_34->name, sizeof(VAR_34->name), "%s-%d", VAR_35->name, VAR_38);
    else
     FUNC_14(VAR_34->name, sizeof(VAR_34->name), "%s", VAR_35->name);
   } else {

    if (VAR_39 > 1)
     FUNC_15(VAR_34->name, "MIDI %d-%d-%d", VAR_41->number, VAR_42, VAR_38);
    else
     FUNC_15(VAR_34->name, "MIDI %d-%d", VAR_41->number, VAR_42);
   }
  }
  if ((VAR_35->flags & VAR_7) && VAR_38 < VAR_44)
   VAR_34->capability |= VAR_17 | VAR_16 | VAR_14;
  if ((VAR_35->flags & VAR_6) && VAR_38 < VAR_43)
   VAR_34->capability |= VAR_12 | VAR_15 | VAR_13;
  if ((VAR_34->capability & (VAR_17|VAR_12)) == (VAR_17|VAR_12) &&
      VAR_35->flags & VAR_5)
   VAR_34->capability |= VAR_11;
  VAR_34->type = VAR_20
   | VAR_19
   | VAR_21;
  VAR_34->midi_channels = 16;
  FUNC_4(&VAR_40, 0, sizeof(VAR_40));
  VAR_40.owner = VAR_22;
  VAR_40.private_data = VAR_33;
  VAR_40.subscribe = VAR_24;
  VAR_40.unsubscribe = VAR_25;
  VAR_40.use = VAR_27;
  VAR_40.unuse = VAR_26;
  VAR_40.event_input = VAR_23;
  VAR_34->kernel = &VAR_40;
  if (VAR_36->ops && VAR_36->ops->get_port_info)
   VAR_36->ops->get_port_info(VAR_36, VAR_38, VAR_34);
  if (FUNC_11(VAR_31->seq_client, VAR_10, VAR_34)<0)
   goto __nomem;
  VAR_33->seq_client = VAR_31->seq_client;
  VAR_33->seq_port = VAR_34->addr.port;
 }
 VAR_31->ports_per_device[VAR_42] = VAR_39;
 VAR_31->ports[VAR_42] = VAR_32;
 VAR_31->num_ports++;
 if (VAR_37)
  VAR_29[VAR_41->number] = VAR_31;
 FUNC_6(&VAR_28);
 FUNC_1(VAR_35);
 FUNC_1(VAR_34);
 return 0;

      __nomem:
 if (VAR_32 != ((void*)0)) {
        for (VAR_38 = 0; VAR_38 < VAR_39; VAR_38++)
         FUNC_12(&VAR_32[VAR_38]);
  FUNC_1(VAR_32);
 }
 if (VAR_37) {
  FUNC_10(VAR_31->seq_client);
  FUNC_1(VAR_31);
 }
 FUNC_1(VAR_35);
 FUNC_1(VAR_34);
 FUNC_6(&VAR_28);
 return -VAR_2;
}
