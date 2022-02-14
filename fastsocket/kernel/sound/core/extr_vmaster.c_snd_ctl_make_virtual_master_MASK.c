
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol_new {char* name; void* info; int iface; } ;
struct TYPE_4__ {int p; } ;
struct snd_kcontrol {TYPE_2__ tlv; TYPE_1__* vd; int private_free; int put; int get; void* info; } ;
struct link_master {int tlv; int slaves; } ;
typedef int knew ;
struct TYPE_3__ {int access; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int const VAR_3 ;
 unsigned int const VAR_4 ;
 unsigned int const VAR_5 ;
 int FUNC_1 (struct link_master*) ;
 struct link_master* FUNC_2 (int,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 void* VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (int ,unsigned int const*,int) ;
 int FUNC_4 (struct snd_kcontrol_new*,int ,int) ;
 struct snd_kcontrol* FUNC_5 (struct snd_kcontrol_new*,struct link_master*) ;

struct snd_kcontrol *FUNC_6(char *VAR_10,
       const unsigned int *VAR_11)
{
 struct link_master *VAR_12;
 struct snd_kcontrol *VAR_13;
 struct snd_kcontrol_new VAR_14;

 FUNC_4(&VAR_14, 0, sizeof(VAR_14));
 VAR_14.iface = VAR_2;
 VAR_14.name = VAR_10;
 VAR_14.info = VAR_8;

 VAR_12 = FUNC_2(sizeof(*VAR_12), VAR_0);
 if (!VAR_12)
  return ((void*)0);
 FUNC_0(&VAR_12->slaves);

 VAR_13 = FUNC_5(&VAR_14, VAR_12);
 if (!VAR_13) {
  FUNC_1(VAR_12);
  return ((void*)0);
 }

 VAR_13->info = VAR_8;
 VAR_13->get = VAR_7;
 VAR_13->put = VAR_9;
 VAR_13->private_free = VAR_6;


 if (VAR_11 &&
     (VAR_11[0] == VAR_5 ||
      VAR_11[0] == VAR_3 ||
      VAR_11[0] == VAR_4)) {
  VAR_13->vd[0].access |= VAR_1;
  FUNC_3(VAR_12->tlv, VAR_11, sizeof(VAR_12->tlv));
  VAR_13->tlv.p = VAR_12->tlv;
 }

 return VAR_13;
}
