
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct softdma_softc {struct softdma_channel* channels; } ;
struct softdma_channel {int run; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct softdma_softc*,int ) ;
 int FUNC_1 (struct softdma_softc*,int ,int) ;
 int FUNC_2 (struct softdma_channel*) ;

__attribute__((used)) static void
FUNC_3(void *VAR_5)
{
 struct softdma_channel *VAR_6;
 struct softdma_softc *VAR_7;
 int VAR_8;
 int VAR_9;

 VAR_7 = VAR_5;

 VAR_6 = &VAR_7->channels[0];

 VAR_8 = FUNC_0(VAR_7, VAR_4);

 if (VAR_8 & (VAR_2 |
     VAR_3)) {

  VAR_9 = (((VAR_8 & VAR_0) >> VAR_1) & 0xff);

 }

 if (VAR_8 != 0) {
  FUNC_1(VAR_7,
      VAR_4, VAR_8);
  VAR_6->run = 1;
  FUNC_2(VAR_6);
 }
}
