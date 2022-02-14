
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_pcm {char* name; int * stream; } ;
struct hda_codec {int num_pcms; struct ad198x_spec* spec; } ;
struct ad198x_spec {struct hda_pcm* pcm_rec; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hda_codec*) ;

__attribute__((used)) static int FUNC_1(struct hda_codec *VAR_2)
{
 struct ad198x_spec *VAR_3 = VAR_2->spec;
 struct hda_pcm *VAR_4;
 int VAR_5;

 VAR_5 = FUNC_0(VAR_2);
 if (VAR_5 < 0)
  return VAR_5;

 VAR_4 = VAR_3->pcm_rec + VAR_2->num_pcms;
 VAR_2->num_pcms++;
 VAR_4->name = "AD1984 Digital Mic";
 VAR_4->stream[VAR_0] = VAR_1;
 return 0;
}
