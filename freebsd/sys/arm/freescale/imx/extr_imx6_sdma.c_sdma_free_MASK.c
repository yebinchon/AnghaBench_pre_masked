
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_offset_t ;
struct sdma_softc {struct sdma_channel* channel; } ;
struct sdma_channel {scalar_t__ bd; scalar_t__ in_use; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 struct sdma_softc* VAR_1 ;

int
FUNC_1(int VAR_2)
{
 struct sdma_channel *VAR_3;
 struct sdma_softc *VAR_4;

 VAR_4 = VAR_1;

 VAR_3 = &VAR_4->channel[VAR_2];
 VAR_3->in_use = 0;

 FUNC_0((vm_offset_t)VAR_3->bd, VAR_0);

 return (0);
}
