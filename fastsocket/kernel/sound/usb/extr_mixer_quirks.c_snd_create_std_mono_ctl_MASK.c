
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct usb_mixer_interface {int dummy; } ;
struct usb_mixer_elem_info {unsigned int id; int val_type; int channels; unsigned int control; unsigned int cmask; int max; scalar_t__ dBmax; scalar_t__ dBmin; scalar_t__ res; scalar_t__ min; struct usb_mixer_interface* mixer; } ;
struct TYPE_5__ {int * c; } ;
struct TYPE_4__ {int name; } ;
struct snd_kcontrol {TYPE_3__* vd; TYPE_2__ tlv; int private_free; TYPE_1__ id; } ;
typedef int snd_kcontrol_tlv_rw_t ;
struct TYPE_6__ {int access; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct usb_mixer_elem_info*) ;
 struct usb_mixer_elem_info* FUNC_1 (int,int ) ;
 struct snd_kcontrol* FUNC_2 (int ,struct usb_mixer_elem_info*) ;
 int VAR_4 ;
 int FUNC_3 (struct usb_mixer_interface*,struct snd_kcontrol*) ;
 int FUNC_4 (int ,int,char const*) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_5(struct usb_mixer_interface *VAR_6,
    unsigned int VAR_7,
    unsigned int VAR_8,
    unsigned int VAR_9,
    int VAR_10,
    const char *VAR_11,
    snd_kcontrol_tlv_rw_t *VAR_12)
{
 int VAR_13;
 struct usb_mixer_elem_info *VAR_14;
 struct snd_kcontrol *VAR_15;

 VAR_14 = FUNC_1(sizeof(*VAR_14), VAR_1);
 if (!VAR_14)
  return -VAR_0;

 VAR_14->id = VAR_7;
 VAR_14->mixer = VAR_6;
 VAR_14->val_type = VAR_10;
 VAR_14->channels = 1;
 VAR_14->control = VAR_8;
 VAR_14->cmask = VAR_9;



 VAR_14->min = 0;
 VAR_14->max = 1;
 VAR_14->res = 0;
 VAR_14->dBmin = 0;
 VAR_14->dBmax = 0;


 VAR_15 = FUNC_2(VAR_4, VAR_14);
 if (!VAR_15) {
  FUNC_0(VAR_14);
  return -VAR_0;
 }


 FUNC_4(VAR_15->id.name, sizeof(VAR_15->id.name), VAR_11);
 VAR_15->private_free = VAR_5;


 if (VAR_12) {
  VAR_15->tlv.c = VAR_12;
  VAR_15->vd[0].access |=
   VAR_3 |
   VAR_2;
 }

 VAR_13 = FUNC_3(VAR_6, VAR_15);
 if (VAR_13 < 0)
  return VAR_13;

 return 0;
}
