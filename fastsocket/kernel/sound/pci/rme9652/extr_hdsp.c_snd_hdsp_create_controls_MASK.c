
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct snd_card {int dummy; } ;
struct hdsp {scalar_t__ io_type; struct snd_kcontrol* spdif_ctl; } ;
struct TYPE_7__ {char* name; int index; } ;


 unsigned int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct snd_card*,struct snd_kcontrol*) ;
 struct snd_kcontrol* FUNC_2 (TYPE_1__*,struct hdsp*) ;
 TYPE_1__* VAR_3 ;
 TYPE_1__ VAR_4 ;
 TYPE_1__ VAR_5 ;
 TYPE_1__* VAR_6 ;

__attribute__((used)) static int FUNC_3(struct snd_card *VAR_7, struct hdsp *VAR_8)
{
 unsigned int VAR_9;
 int VAR_10;
 struct snd_kcontrol *VAR_11;

 for (VAR_9 = 0; VAR_9 < FUNC_0(VAR_6); VAR_9++) {
  if ((VAR_10 = FUNC_1(VAR_7, VAR_11 = FUNC_2(&VAR_6[VAR_9], VAR_8))) < 0)
   return VAR_10;
  if (VAR_9 == 1)
   VAR_8->spdif_ctl = VAR_11;
 }


 VAR_5.name = "ADAT Lock Status";
 VAR_5.index = 1;
 if ((VAR_10 = FUNC_1 (VAR_7, VAR_11 = FUNC_2(&VAR_5, VAR_8))))
  return VAR_10;
 if (VAR_8->io_type == VAR_0 || VAR_8->io_type == VAR_2) {
  for (VAR_9 = 1; VAR_9 < 3; ++VAR_9) {
   VAR_5.index = VAR_9+1;
   if ((VAR_10 = FUNC_1 (VAR_7, VAR_11 = FUNC_2(&VAR_5, VAR_8))))
    return VAR_10;
  }
 }


 if (VAR_8->io_type == VAR_1) {
  for (VAR_9 = 0; VAR_9 < FUNC_0(VAR_3); VAR_9++) {
   if ((VAR_10 = FUNC_1(VAR_7, VAR_11 = FUNC_2(&VAR_3[VAR_9], VAR_8))) < 0)
    return VAR_10;
  }
 }


 if (VAR_8->io_type == VAR_1 || VAR_8->io_type == VAR_2) {
  if ((VAR_10 = FUNC_1(VAR_7, VAR_11 = FUNC_2(&VAR_4, VAR_8))) < 0)
    return VAR_10;
 }

 return 0;
}
