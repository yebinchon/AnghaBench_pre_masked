
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
typedef size_t u_int ;
struct a31dmac_softc {int nchans; TYPE_1__* chans; } ;
struct TYPE_2__ {int callbackarg; int (* callback ) (int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct a31dmac_softc*,int ) ;
 int FUNC_1 (struct a31dmac_softc*,int ,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(void *VAR_3)
{
 struct a31dmac_softc *VAR_4;
 uint32_t VAR_5, VAR_6, VAR_7;
 uint64_t VAR_8, VAR_9;
 u_int VAR_10;

 VAR_4 = VAR_3;
 VAR_5 = FUNC_0(VAR_4, VAR_0);
 VAR_6 = VAR_4->nchans > 8 ? FUNC_0(VAR_4, VAR_1) : 0;
 if (VAR_5 == 0 && VAR_6 == 0)
  return;

 if (VAR_5 != 0)
  FUNC_1(VAR_4, VAR_0, VAR_5);
 if (VAR_6 != 0)
  FUNC_1(VAR_4, VAR_1, VAR_6);

 VAR_8 = VAR_5 | ((uint64_t)VAR_6 << 32);

 while ((VAR_7 = FUNC_2(VAR_8 & VAR_2)) != 0) {
  VAR_9 = (1U << (VAR_7 - 1));
  VAR_8 &= ~VAR_9;
  VAR_10 = (VAR_7 - 1) / 4;

  if (VAR_10 >= VAR_4->nchans)
   continue;
  if (VAR_4->chans[VAR_10].callback == ((void*)0))
   continue;
  VAR_4->chans[VAR_10].callback(VAR_4->chans[VAR_10].callbackarg);
 }
}
