
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ numid; } ;
struct snd_ctl_elem_info {int count; unsigned int access; int owner; int type; TYPE_3__ id; } ;
struct user_element {char* elem_data; long elem_data_size; struct snd_ctl_elem_info info; } ;
struct TYPE_5__ {int c; } ;
struct snd_kcontrol {int count; TYPE_2__* vd; struct user_element* private_data; int private_free; TYPE_1__ tlv; int put; int get; int info; int id; } ;
struct snd_ctl_file {struct snd_card* card; } ;
struct snd_card {scalar_t__ user_ctl_count; int controls_rwsem; } ;
struct snd_aes_iec958 {int dummy; } ;
typedef int kctl ;
struct TYPE_6__ {struct snd_ctl_file* owner; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;





 int FUNC_0 (int *) ;
 int FUNC_1 (struct user_element*) ;
 struct user_element* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,TYPE_3__*,int) ;
 int FUNC_4 (struct snd_kcontrol*,int ,int) ;
 int FUNC_5 (struct snd_card*,struct snd_kcontrol*) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 struct snd_kcontrol* FUNC_6 (struct snd_card*,TYPE_3__*) ;
 struct snd_kcontrol* FUNC_7 (struct snd_kcontrol*,unsigned int) ;
 int FUNC_8 (struct snd_card*,struct snd_kcontrol*) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(struct snd_ctl_file *VAR_18,
       struct snd_ctl_elem_info *VAR_19, int VAR_20)
{
 struct snd_card *VAR_21 = VAR_18->card;
 struct snd_kcontrol VAR_22, *VAR_23;
 unsigned int VAR_24;
 long VAR_25;
 struct user_element *VAR_26;
 int VAR_27, VAR_28;

 if (!VAR_20 && VAR_21->user_ctl_count >= VAR_5)
  return -VAR_3;
 if (VAR_19->count < 1)
  return -VAR_1;
 VAR_24 = VAR_19->access == 0 ? VAR_8 :
  (VAR_19->access & (VAR_8|
     VAR_6|
     VAR_10));
 VAR_19->id.numid = 0;
 FUNC_4(&VAR_22, 0, sizeof(VAR_22));
 FUNC_0(&VAR_21->controls_rwsem);
 VAR_23 = FUNC_6(VAR_21, &VAR_19->id);
 VAR_28 = 0;
 if (VAR_23) {
  if (VAR_20)
   VAR_28 = FUNC_8(VAR_21, VAR_23);
  else
   VAR_28 = -VAR_0;
 } else {
  if (VAR_20)
   VAR_28 = -VAR_2;
 }
 FUNC_9(&VAR_21->controls_rwsem);
 if (VAR_28 < 0)
  return VAR_28;
 FUNC_3(&VAR_22.id, &VAR_19->id, sizeof(VAR_19->id));
 VAR_22.count = VAR_19->owner ? VAR_19->owner : 1;
 VAR_24 |= VAR_11;
 VAR_22.info = VAR_15;
 if (VAR_24 & VAR_7)
  VAR_22.get = VAR_14;
 if (VAR_24 & VAR_12)
  VAR_22.put = VAR_16;
 if (VAR_24 & VAR_10) {
  VAR_22.tlv.c = VAR_17;
  VAR_24 |= VAR_9;
 }
 switch (VAR_19->type) {
 case 132:
 case 129:
  VAR_25 = sizeof(long);
  if (VAR_19->count > 128)
   return -VAR_1;
  break;
 case 128:
  VAR_25 = sizeof(long long);
  if (VAR_19->count > 64)
   return -VAR_1;
  break;
 case 131:
  VAR_25 = sizeof(unsigned char);
  if (VAR_19->count > 512)
   return -VAR_1;
  break;
 case 130:
  VAR_25 = sizeof(struct snd_aes_iec958);
  if (VAR_19->count != 1)
   return -VAR_1;
  break;
 default:
  return -VAR_1;
 }
 VAR_25 *= VAR_19->count;
 VAR_26 = FUNC_2(sizeof(struct user_element) + VAR_25, VAR_4);
 if (VAR_26 == ((void*)0))
  return -VAR_3;
 VAR_26->info = *VAR_19;
 VAR_26->info.access = 0;
 VAR_26->elem_data = (char *)VAR_26 + sizeof(*VAR_26);
 VAR_26->elem_data_size = VAR_25;
 VAR_22.private_free = VAR_13;
 VAR_23 = FUNC_7(&VAR_22, VAR_24);
 if (VAR_23 == ((void*)0)) {
  FUNC_1(VAR_26);
  return -VAR_3;
 }
 VAR_23->private_data = VAR_26;
 for (VAR_27 = 0; VAR_27 < VAR_23->count; VAR_27++)
  VAR_23->vd[VAR_27].owner = VAR_18;
 VAR_28 = FUNC_5(VAR_21, VAR_23);
 if (VAR_28 < 0)
  return VAR_28;

 FUNC_0(&VAR_21->controls_rwsem);
 VAR_21->user_ctl_count++;
 FUNC_9(&VAR_21->controls_rwsem);

 return 0;
}
