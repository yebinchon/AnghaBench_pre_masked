
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_card {char* shortname; } ;
struct hdsp {TYPE_1__* midi; } ;
struct TYPE_5__ {int info_flags; TYPE_1__* private_data; int name; } ;
struct TYPE_4__ {int id; TYPE_2__* rmidi; int lock; scalar_t__ pending; scalar_t__ istimer; struct hdsp* hdsp; int * output; int * input; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (struct snd_card*,char*,int,int,int,TYPE_2__**) ;
 int FUNC_1 (TYPE_2__*,int ,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,char*,...) ;

__attribute__((used)) static int FUNC_4 (struct snd_card *VAR_7, struct hdsp *VAR_8, int VAR_9)
{
 char VAR_10[32];

 VAR_8->midi[VAR_9].id = VAR_9;
 VAR_8->midi[VAR_9].rmidi = ((void*)0);
 VAR_8->midi[VAR_9].input = ((void*)0);
 VAR_8->midi[VAR_9].output = ((void*)0);
 VAR_8->midi[VAR_9].hdsp = VAR_8;
 VAR_8->midi[VAR_9].istimer = 0;
 VAR_8->midi[VAR_9].pending = 0;
 FUNC_2 (&VAR_8->midi[VAR_9].lock);

 FUNC_3 (VAR_10, "%s MIDI %d", VAR_7->shortname, VAR_9+1);
 if (FUNC_0 (VAR_7, VAR_10, VAR_9, 1, 1, &VAR_8->midi[VAR_9].rmidi) < 0)
  return -1;

 FUNC_3(VAR_8->midi[VAR_9].rmidi->name, "HDSP MIDI %d", VAR_9+1);
 VAR_8->midi[VAR_9].rmidi->private_data = &VAR_8->midi[VAR_9];

 FUNC_1 (VAR_8->midi[VAR_9].rmidi, VAR_4, &VAR_6);
 FUNC_1 (VAR_8->midi[VAR_9].rmidi, VAR_3, &VAR_5);

 VAR_8->midi[VAR_9].rmidi->info_flags |= VAR_2 |
  VAR_1 |
  VAR_0;

 return 0;
}
