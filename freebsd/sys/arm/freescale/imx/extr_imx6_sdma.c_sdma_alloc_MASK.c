
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdma_softc {struct sdma_channel* channel; } ;
struct sdma_channel {int in_use; void* bd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,int ,int ,int ,int ,int ,int ) ;
 struct sdma_softc* VAR_4 ;

int
FUNC_1(void)
{
 struct sdma_channel *VAR_5;
 struct sdma_softc *VAR_6;
 int VAR_7;
 int VAR_8;
 int VAR_9;

 VAR_6 = VAR_4;
 VAR_7 = 0;


 for (VAR_9 = 1; VAR_9 < VAR_2; VAR_9++) {
  VAR_5 = &VAR_6->channel[VAR_9];
  if (VAR_5->in_use == 0) {
   VAR_5->in_use = 1;
   VAR_7 = 1;
   break;
  }
 }

 if (!VAR_7)
  return (-1);

 VAR_8 = VAR_9;


 VAR_5->bd = (void *)FUNC_0(VAR_1, VAR_0, 0, ~0,
     VAR_1, 0, VAR_3);

 return (VAR_8);
}
