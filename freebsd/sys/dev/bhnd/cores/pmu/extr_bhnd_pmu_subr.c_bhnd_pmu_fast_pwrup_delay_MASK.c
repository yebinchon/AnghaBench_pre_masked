
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u_int ;
struct TYPE_2__ {int chip_id; } ;
struct bhnd_pmu_softc {int query; TYPE_1__ cid; } ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct bhnd_pmu_softc*,int ,int*) ;

int
FUNC_2(struct bhnd_pmu_softc *VAR_6, u_int *VAR_7)
{
 uint32_t VAR_8;
 uint32_t VAR_9;
 u_int VAR_10;
 int VAR_11;

 switch (VAR_6->cid.chip_id) {
 case 139:
 case 138:
 case 129:
 case 137:
 case 136:
 case 135:
 case 131:
 case 128:
 case 141:
  VAR_10 = 3700;
  break;

 case 134:
  VAR_11 = FUNC_1(VAR_6, VAR_1,
      &VAR_9);
  if (VAR_11)
   return (VAR_11);

  VAR_8 = FUNC_0(&VAR_6->query);
  VAR_10 = (VAR_9 + VAR_5) *
      ((1000000 + VAR_8 - 1) / VAR_8);
  VAR_10 = (11 * VAR_10) / 10;
  break;

 case 133:
  VAR_11 = FUNC_1(VAR_6, VAR_2,
      &VAR_9);
  if (VAR_11)
   return (VAR_11);

  VAR_8 = FUNC_0(&VAR_6->query);
  VAR_10 = (VAR_9 + VAR_5) *
      ((1000000 + VAR_8 - 1) / VAR_8);
  VAR_10 = (11 * VAR_10) / 10;
  break;

 case 140:
  VAR_10 = 3700;
  break;

 case 130:
  VAR_11 = FUNC_1(VAR_6, VAR_4,
      &VAR_9);
  if (VAR_11)
   return (VAR_11);

  VAR_8 = FUNC_0(&VAR_6->query);
  VAR_10 = (VAR_9 + VAR_5) *
      ((1000000 + VAR_8 - 1) / VAR_8);
  VAR_10 = (11 * VAR_10) / 10;
  break;

 case 132:
  VAR_11 = FUNC_1(VAR_6, VAR_3,
      &VAR_9);
  if (VAR_11)
   return (VAR_11);

  VAR_8 = FUNC_0(&VAR_6->query);
  VAR_10 = (VAR_9 + VAR_5) *
      ((1000000 + VAR_8 - 1) / VAR_8);
  VAR_10 = (11 * VAR_10) / 10;
  break;

 default:
  VAR_10 = VAR_0;
  break;
 }

 *VAR_7 = VAR_10;
 return (0);
}
