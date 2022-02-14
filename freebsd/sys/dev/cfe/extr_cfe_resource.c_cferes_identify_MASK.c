
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;
typedef scalar_t__ uint64_t ;
struct resource {int dummy; } ;
struct cferes_softc {int rnum; int* rid; struct resource** res; } ;
typedef int driver_t ;
typedef int device_t ;


 int FUNC_0 (int ,int,char*,int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 struct resource* FUNC_1 (int ,int ,int*,int ) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ,int,scalar_t__,scalar_t__) ;
 int FUNC_4 (int,int ,scalar_t__*,scalar_t__*,scalar_t__*) ;
 int FUNC_5 (int ,int ) ;
 struct cferes_softc* FUNC_6 (int ) ;
 char* FUNC_7 (int ) ;
 int FUNC_8 (int ,char*) ;
 int FUNC_9 (int ,int *) ;
 int FUNC_10 (char*,char*,int ,int ) ;

__attribute__((used)) static void
FUNC_11(driver_t* VAR_5, device_t VAR_6)
{
 device_t VAR_7;
 int VAR_8;
 struct resource *VAR_9;
 int VAR_10;
 int VAR_11;
 struct cferes_softc *VAR_12;
 uint64_t VAR_13, VAR_14, VAR_15;

 VAR_7 = FUNC_0(VAR_6, 100, "cferes", -1);
 FUNC_9(VAR_7, VAR_5);
 VAR_12 = FUNC_6(VAR_7);

 VAR_12->rnum = 0;
 for (VAR_8 = 0; VAR_8 < ~0U; VAR_8++) {
  VAR_10 = FUNC_4(VAR_8, VAR_0, &VAR_13, &VAR_14, &VAR_15);
  if (VAR_10 < 0)
   break;
  if (VAR_15 != VAR_1) {
   if (VAR_4)
   FUNC_10("%s: skipping non reserved range 0x%0jx(%jd)\n",
       FUNC_7(VAR_7),
       (uintmax_t)VAR_13, (uintmax_t)VAR_14);
   continue;
  }

  FUNC_3(VAR_7, VAR_3, VAR_12->rnum, VAR_13, VAR_14);
  VAR_11 = VAR_12->rnum;
  VAR_9 = FUNC_1(VAR_7, VAR_3, &VAR_11, 0);
  if (VAR_9 == ((void*)0)) {
   FUNC_2(VAR_7, VAR_3, VAR_12->rnum);
   continue;
  }
  VAR_12->rid[VAR_12->rnum] = VAR_11;
  VAR_12->res[VAR_12->rnum] = VAR_9;

  VAR_12->rnum++;
  if (VAR_12->rnum == VAR_2)
   break;
 }

 if (VAR_12->rnum == 0) {
  FUNC_5(VAR_6, VAR_7);
  return;
 }

 FUNC_8(VAR_7, "CFE reserved memory");
}
