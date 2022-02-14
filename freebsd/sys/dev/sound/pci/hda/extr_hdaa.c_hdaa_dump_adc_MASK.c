
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hdaa_widget {scalar_t__ enable; scalar_t__ type; size_t bindas; } ;
struct hdaa_pcm_devinfo {size_t recas; int dev; struct hdaa_devinfo* devinfo; } ;
struct hdaa_devinfo {int startnode; int endnode; TYPE_2__* chans; TYPE_1__* as; } ;
typedef int nid_t ;
struct TYPE_4__ {int* io; int supp_pcm_size_rate; int supp_stream_formats; } ;
struct TYPE_3__ {int* chans; int num_chans; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct hdaa_pcm_devinfo*,int,int ) ;
 struct hdaa_widget* FUNC_3 (struct hdaa_devinfo*,int) ;
 int FUNC_4 (char*,...) ;

__attribute__((used)) static void
FUNC_5(struct hdaa_pcm_devinfo *VAR_1)
{
 struct hdaa_devinfo *VAR_2 = VAR_1->devinfo;
 struct hdaa_widget *VAR_3;
 nid_t *VAR_4;
 int VAR_5, VAR_6;

 if (VAR_1->recas < 0)
  return;

 FUNC_0(VAR_1->dev, "Record:\n");

 VAR_5 = VAR_2->as[VAR_1->recas].chans[0];
 FUNC_1(VAR_1->dev,
     VAR_2->chans[VAR_5].supp_stream_formats,
     VAR_2->chans[VAR_5].supp_pcm_size_rate);
 for (VAR_6 = 0; VAR_6 < VAR_2->as[VAR_1->recas].num_chans; VAR_6++) {
  VAR_5 = VAR_2->as[VAR_1->recas].chans[VAR_6];
  FUNC_0(VAR_1->dev, "            ADC:");
  for (VAR_4 = VAR_2->chans[VAR_5].io; *VAR_4 != -1; VAR_4++)
   FUNC_4(" %d", *VAR_4);
  FUNC_4("\n");
 }

 for (VAR_6 = VAR_2->startnode; VAR_6 < VAR_2->endnode; VAR_6++) {
  VAR_3 = FUNC_3(VAR_2, VAR_6);
  if (VAR_3 == ((void*)0) || VAR_3->enable == 0)
   continue;
  if (VAR_3->type != VAR_0)
   continue;
  if (VAR_3->bindas != VAR_1->recas)
   continue;
  FUNC_0(VAR_1->dev, "\n");
  FUNC_2(VAR_1, VAR_6, 0);
 }
 FUNC_0(VAR_1->dev, "\n");
}
