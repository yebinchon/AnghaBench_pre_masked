
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ads111x_softc {int cfgword; TYPE_1__* chipinfo; struct ads111x_channel* channels; } ;
struct ads111x_channel {int gainidx; int rateidx; } ;
typedef int int64_t ;
struct TYPE_2__ {int* ratetab; int* rangetab; int rangediv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int VAR_7 ;
 int FUNC_1 (struct ads111x_softc*,int ,int*) ;
 int FUNC_2 (struct ads111x_softc*,int ,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_5(struct ads111x_softc *VAR_8, int VAR_9, int *VAR_10)
{
 struct ads111x_channel *VAR_11;
 int VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17;
 int64_t VAR_18;

 VAR_11 = &VAR_8->channels[VAR_9];


 VAR_13 = VAR_8->cfgword |
     (1 << VAR_4) |
     (VAR_9 << VAR_3) |
     (VAR_11->gainidx << VAR_1) |
     (VAR_11->rateidx << VAR_5);
 if ((VAR_12 = FUNC_2(VAR_8, VAR_0, VAR_13)) != 0)
  return (VAR_12);






 VAR_15 = VAR_8->chipinfo->ratetab[VAR_11->rateidx];
 VAR_17 = (1000000000 + VAR_15 - 1) / VAR_15;
 VAR_12 = FUNC_4("ads111x", FUNC_3(VAR_17), 0, FUNC_0(2));
 if (VAR_12 != 0 && VAR_12 != VAR_7)
  return (VAR_12);
 for (VAR_16 = 5; ; --VAR_16) {
  if (VAR_16 == 0)
   return (VAR_7);
  if ((VAR_12 = FUNC_1(VAR_8, VAR_0, &VAR_13)) != 0)
   return (VAR_12);
  if (VAR_13 & VAR_2)
   break;
  FUNC_4("ads111x", FUNC_3(VAR_17 / 20), 0, FUNC_0(2));
 }


 if ((VAR_12 = FUNC_1(VAR_8, VAR_6, &VAR_14)) != 0)
  return (VAR_12);
 VAR_18 = VAR_8->chipinfo->rangetab[VAR_11->gainidx];
 *VAR_10 = (int)((VAR_14 * VAR_18 ) / VAR_8->chipinfo->rangediv);

 return (VAR_12);
}
