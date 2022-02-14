
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * cleanup; int * prepare; int * close; int * open; } ;
struct hda_pcm_stream {TYPE_1__ ops; scalar_t__ nid; int maxbps; int formats; int rates; } ;
struct hda_codec {int dummy; } ;


 int VAR_0 ;
 int * VAR_1 ;
 void* VAR_2 ;
 int * VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct hda_codec*,scalar_t__,int *,int *,int *) ;

__attribute__((used)) static int FUNC_2(struct hda_codec *VAR_4,
      struct hda_pcm_stream *VAR_5)
{
 int VAR_6;


 if (VAR_5->nid && (!VAR_5->rates || !VAR_5->formats)) {
  VAR_6 = FUNC_1(VAR_4, VAR_5->nid,
    VAR_5->rates ? ((void*)0) : &VAR_5->rates,
    VAR_5->formats ? ((void*)0) : &VAR_5->formats,
    VAR_5->maxbps ? ((void*)0) : &VAR_5->maxbps);
  if (VAR_6 < 0)
   return VAR_6;
 }
 if (VAR_5->ops.open == ((void*)0))
  VAR_5->ops.open = VAR_2;
 if (VAR_5->ops.close == ((void*)0))
  VAR_5->ops.close = VAR_2;
 if (VAR_5->ops.prepare == ((void*)0)) {
  if (FUNC_0(!VAR_5->nid))
   return -VAR_0;
  VAR_5->ops.prepare = VAR_3;
 }
 if (VAR_5->ops.cleanup == ((void*)0)) {
  if (FUNC_0(!VAR_5->nid))
   return -VAR_0;
  VAR_5->ops.cleanup = VAR_1;
 }
 return 0;
}
