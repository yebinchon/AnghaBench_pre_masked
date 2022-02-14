
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct z_info {struct z_info* z_delay; struct z_info* z_pcoeff; int channels; int quality; void* rdst; void* rsrc; } ;
struct pcm_feeder {struct z_info* data; TYPE_1__* desc; } ;
struct TYPE_2__ {scalar_t__ in; scalar_t__ out; } ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct z_info*,int ) ;
 struct z_info* FUNC_2 (int,int ,int) ;
 int FUNC_3 (struct pcm_feeder*) ;

__attribute__((used)) static int
FUNC_4(struct pcm_feeder *VAR_7)
{
 struct z_info *VAR_8;
 int VAR_9;

 if (VAR_7->desc->in != VAR_7->desc->out)
  return (VAR_0);

 VAR_8 = FUNC_2(sizeof(*VAR_8), VAR_2, VAR_3 | VAR_4);
 if (VAR_8 == ((void*)0))
  return (VAR_1);

 VAR_8->rsrc = VAR_5;
 VAR_8->rdst = VAR_5;
 VAR_8->quality = VAR_6;
 VAR_8->channels = FUNC_0(VAR_7->desc->in);

 VAR_7->data = VAR_8;

 VAR_9 = FUNC_3(VAR_7);
 if (VAR_9 != 0) {
  if (VAR_8->z_pcoeff != ((void*)0))
   FUNC_1(VAR_8->z_pcoeff, VAR_2);
  if (VAR_8->z_delay != ((void*)0))
   FUNC_1(VAR_8->z_delay, VAR_2);
  FUNC_1(VAR_8, VAR_2);
  VAR_7->data = ((void*)0);
 }

 return (VAR_9);
}
