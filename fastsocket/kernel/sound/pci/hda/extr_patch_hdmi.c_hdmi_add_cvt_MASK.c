
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdmi_spec_per_cvt {int channels_min; unsigned int channels_max; int maxbps; int formats; int rates; void* cvt_nid; } ;
struct hdmi_spec {size_t num_cvts; void** cvt_nids; int cvts; } ;
struct hda_codec {struct hdmi_spec* spec; } ;
typedef void* hda_nid_t ;


 size_t FUNC_0 (void**) ;
 int VAR_0 ;
 unsigned int FUNC_1 (struct hda_codec*,void*) ;
 unsigned int FUNC_2 (unsigned int) ;
 struct hdmi_spec_per_cvt* FUNC_3 (int *) ;
 int FUNC_4 (struct hda_codec*,void*,int *,int *,int *) ;

__attribute__((used)) static int FUNC_5(struct hda_codec *VAR_1, hda_nid_t VAR_2)
{
 struct hdmi_spec *VAR_3 = VAR_1->spec;
 struct hdmi_spec_per_cvt *VAR_4;
 unsigned int VAR_5;
 int VAR_6;

 VAR_5 = FUNC_1(VAR_1, VAR_2);
 VAR_5 = FUNC_2(VAR_5);

 VAR_4 = FUNC_3(&VAR_3->cvts);
 if (!VAR_4)
  return -VAR_0;

 VAR_4->cvt_nid = VAR_2;
 VAR_4->channels_min = 2;
 if (VAR_5 <= 16)
  VAR_4->channels_max = VAR_5;

 VAR_6 = FUNC_4(VAR_1, VAR_2,
       &VAR_4->rates,
       &VAR_4->formats,
       &VAR_4->maxbps);
 if (VAR_6 < 0)
  return VAR_6;

 if (VAR_3->num_cvts < FUNC_0(VAR_3->cvt_nids))
  VAR_3->cvt_nids[VAR_3->num_cvts] = VAR_2;
 VAR_3->num_cvts++;

 return 0;
}
