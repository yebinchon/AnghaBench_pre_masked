
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_gen_spec {scalar_t__ aamix_mode; int have_aamix_ctl; } ;



__attribute__((used)) static bool FUNC_0(struct hda_gen_spec *VAR_0)
{
 return !VAR_0->have_aamix_ctl || VAR_0->aamix_mode;
}
