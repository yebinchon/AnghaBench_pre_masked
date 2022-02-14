
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdmi_spec_per_pin {int dummy; } ;
struct hdmi_spec_per_cvt {int dummy; } ;
struct hdmi_spec {int pcm_rec; int cvts; int pins; } ;
struct hda_pcm {int dummy; } ;


 int FUNC_0 (int *,int,int) ;

__attribute__((used)) static void FUNC_1(struct hdmi_spec *VAR_0, int VAR_1)
{
 FUNC_0(&VAR_0->pins, sizeof(struct hdmi_spec_per_pin), VAR_1);
 FUNC_0(&VAR_0->cvts, sizeof(struct hdmi_spec_per_cvt), VAR_1);
 FUNC_0(&VAR_0->pcm_rec, sizeof(struct hda_pcm), VAR_1);
}
