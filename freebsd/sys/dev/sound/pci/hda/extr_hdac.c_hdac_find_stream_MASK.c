
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hdac_softc {int num_iss; int num_oss; int num_bss; TYPE_1__* streams; } ;
struct TYPE_2__ {int stream; } ;



__attribute__((used)) static int
FUNC_0(struct hdac_softc *VAR_0, int VAR_1, int VAR_2)
{
 int VAR_3, VAR_4;

 VAR_4 = -1;

 if (VAR_1 == 0) {
  for (VAR_3 = 0; VAR_3 < VAR_0->num_iss; VAR_3++) {
   if (VAR_0->streams[VAR_3].stream == VAR_2) {
    VAR_4 = VAR_3;
    break;
   }
  }
 } else {
  for (VAR_3 = 0; VAR_3 < VAR_0->num_oss; VAR_3++) {
   if (VAR_0->streams[VAR_3 + VAR_0->num_iss].stream == VAR_2) {
    VAR_4 = VAR_3 + VAR_0->num_iss;
    break;
   }
  }
 }

 if (VAR_4 == -1) {
  for (VAR_3 = 0; VAR_3 < VAR_0->num_bss; VAR_3++) {
   if (VAR_0->streams[VAR_3 + VAR_0->num_iss + VAR_0->num_oss].stream
       == VAR_2) {
    VAR_4 = VAR_3 + VAR_0->num_iss + VAR_0->num_oss;
    break;
   }
  }
 }
 return (VAR_4);
}
