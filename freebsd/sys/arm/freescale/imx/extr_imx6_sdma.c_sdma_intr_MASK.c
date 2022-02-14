
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sdma_softc {struct sdma_channel* channel; } ;
struct sdma_conf {int num_bd; int ih_user; int (* ih ) (int ,int) ;} ;
struct sdma_channel {struct sdma_buffer_descriptor* bd; struct sdma_conf* conf; } ;
struct TYPE_2__ {int status; } ;
struct sdma_buffer_descriptor {TYPE_1__ mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sdma_softc*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct sdma_softc*,int ,int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static void
FUNC_4(void *VAR_5)
{
 struct sdma_buffer_descriptor *VAR_6;
 struct sdma_channel *VAR_7;
 struct sdma_conf *VAR_8;
 struct sdma_softc *VAR_9;
 int VAR_10;
 int VAR_11;
 int VAR_12;

 VAR_9 = VAR_5;

 VAR_10 = FUNC_0(VAR_9, VAR_3);


 FUNC_1(VAR_9, VAR_3, VAR_10);

 for (VAR_11 = 0; VAR_11 < VAR_4; VAR_11++) {
  if ((VAR_10 & (1 << VAR_11)) == 0)
   continue;
  VAR_7 = &VAR_9->channel[VAR_11];
  VAR_8 = VAR_7->conf;
  if (!VAR_8)
   continue;
  for (VAR_12 = 0; VAR_12 < VAR_8->num_bd; VAR_12++) {
   VAR_6 = &VAR_7->bd[VAR_12];
   VAR_6->mode.status |= VAR_0;
   if (VAR_6->mode.status & VAR_1)
    FUNC_2("sDMA error\n");
  }

  VAR_8->ih(VAR_8->ih_user, 1);

  FUNC_1(VAR_9, VAR_2, (1 << VAR_11));
 }
}
