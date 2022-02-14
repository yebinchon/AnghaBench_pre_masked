
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct muge_softc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct muge_softc*,int ) ;
 int FUNC_1 (struct muge_softc*,int ,int*) ;
 int FUNC_2 (struct muge_softc*,int ,int ) ;
 int FUNC_3 (struct muge_softc*,int ,int) ;

__attribute__((used)) static int
FUNC_4(struct muge_softc *VAR_8, uint32_t VAR_9,
    uint32_t VAR_10, uint32_t VAR_11, uint32_t *VAR_12)
{
 uint32_t VAR_13;
 int VAR_14, VAR_15;

 FUNC_0(VAR_8, VAR_7);
 VAR_15 = FUNC_2(VAR_8, VAR_4, VAR_5);
 if (VAR_15 < 0)
  goto done;

 VAR_15 = FUNC_1(VAR_8, VAR_4, &VAR_13);

 VAR_13 &= ~VAR_6;
 VAR_13 |= VAR_9;

 VAR_15 = FUNC_3(VAR_8, VAR_4, VAR_13);

 for (VAR_14 = 0; VAR_14 < VAR_11; VAR_14++) {
  VAR_15 = FUNC_3(VAR_8, VAR_0, VAR_10 + VAR_14);
  VAR_15 = FUNC_3(VAR_8, VAR_3, VAR_12[VAR_14]);
  VAR_15 = FUNC_3(VAR_8, VAR_1, VAR_2);
  VAR_15 = FUNC_2(VAR_8, VAR_4, VAR_5);
  if (VAR_15 != 0)
   goto done;
 }

done:
 return (VAR_15);
}
