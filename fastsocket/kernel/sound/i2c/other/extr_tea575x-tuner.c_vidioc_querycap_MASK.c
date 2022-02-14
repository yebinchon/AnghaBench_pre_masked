
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_capability {int capabilities; int version; int bus_info; int card; int driver; } ;
struct snd_tea575x {scalar_t__ tea5759; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*,int) ;
 struct snd_tea575x* FUNC_3 (struct file*) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_2, void *VAR_3,
     struct v4l2_capability *VAR_4)
{
 struct snd_tea575x *VAR_5 = FUNC_3(VAR_2);

 FUNC_1(VAR_4->card, VAR_5->tea5759 ? "TEA5759" : "TEA5757");
 FUNC_2(VAR_4->driver, "tea575x-tuner", sizeof(VAR_4->driver));
 FUNC_2(VAR_4->card, "Maestro Radio", sizeof(VAR_4->card));
 FUNC_0(VAR_4->bus_info, "PCI");
 VAR_4->version = VAR_0;
 VAR_4->capabilities = VAR_1;
 return 0;
}
