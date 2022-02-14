
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct audio_operations {TYPE_1__* dmap_out; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 struct audio_operations** VAR_1 ;
 int * VAR_2 ;

__attribute__((used)) static int FUNC_0(int VAR_3, int VAR_4, int VAR_5)
{
 struct audio_operations *VAR_6 = VAR_1[VAR_3];

 VAR_2 = ((void*)0);
 VAR_6->dmap_out->flags |= VAR_0;

 return 0;
}
