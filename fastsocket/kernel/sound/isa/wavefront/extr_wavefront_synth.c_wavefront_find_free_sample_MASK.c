
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* sample_status; } ;
typedef TYPE_1__ snd_wavefront_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;

__attribute__((used)) static int
FUNC_1 (snd_wavefront_t *VAR_2)

{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  if (!(VAR_2->sample_status[VAR_3] & VAR_1)) {
   return VAR_3;
  }
 }
 FUNC_0 ("no free sample slots!\n");
 return -1;
}
