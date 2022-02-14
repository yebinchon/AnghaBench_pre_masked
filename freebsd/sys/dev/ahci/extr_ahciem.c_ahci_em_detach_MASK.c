
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ahci_enclosure {int channels; int mtx; scalar_t__ r_memr; scalar_t__ r_memt; scalar_t__ r_memc; int sim; int path; TYPE_1__* leds; } ;
typedef int device_t ;
struct TYPE_2__ {scalar_t__ led; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int,scalar_t__) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 struct ahci_enclosure* FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,int ,int *) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static int
FUNC_11(device_t VAR_4)
{
 struct ahci_enclosure *VAR_5 = FUNC_3(VAR_4);
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_5->channels * VAR_1; VAR_6++) {
  if (VAR_5->leds[VAR_6].led)
   FUNC_4(VAR_5->leds[VAR_6].led);
 }
 FUNC_6(&VAR_5->mtx);
 FUNC_8(VAR_0, VAR_5->path, ((void*)0));
 FUNC_10(VAR_5->path);
 FUNC_9(FUNC_2(VAR_5->sim));
 FUNC_1(VAR_5->sim, VAR_3);
 FUNC_7(&VAR_5->mtx);

 FUNC_0(VAR_4, VAR_2, 0, VAR_5->r_memc);
 FUNC_0(VAR_4, VAR_2, 1, VAR_5->r_memt);
 if (VAR_5->r_memr)
  FUNC_0(VAR_4, VAR_2, 2, VAR_5->r_memr);
 FUNC_5(&VAR_5->mtx);
 return (0);
}
