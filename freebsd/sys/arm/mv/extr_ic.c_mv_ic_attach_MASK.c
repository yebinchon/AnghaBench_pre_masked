
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct mv_ic_softc {int ic_high_regs; int ic_error_regs; int * ic_res; int ic_bsh; int ic_bst; } ;
typedef int device_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int ,int *) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;
 struct mv_ic_softc* VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (scalar_t__*,scalar_t__*) ;

__attribute__((used)) static int
FUNC_7(device_t VAR_7)
{
 struct mv_ic_softc *VAR_8;
 uint32_t VAR_9, VAR_10;
 int VAR_11;

 VAR_8 = (struct mv_ic_softc *)FUNC_2(VAR_7);

 if (VAR_5 != ((void*)0))
  return (VAR_0);
 VAR_5 = VAR_8;

 FUNC_6(&VAR_9, &VAR_10);

 VAR_8->ic_high_regs = 0;
 VAR_8->ic_error_regs = 0;

 if (VAR_9 == VAR_1 ||
     VAR_9 == VAR_2 ||
     VAR_9 == VAR_3 ||
     VAR_9 == VAR_4)
  VAR_8->ic_high_regs = 1;

 if (VAR_9 == VAR_3 || VAR_9 == VAR_4)
  VAR_8->ic_error_regs = 1;

 VAR_11 = FUNC_1(VAR_7, VAR_6, VAR_8->ic_res);
 if (VAR_11) {
  FUNC_3(VAR_7, "could not allocate resources\n");
  return (VAR_0);
 }

 VAR_8->ic_bst = FUNC_5(VAR_8->ic_res[0]);
 VAR_8->ic_bsh = FUNC_4(VAR_8->ic_res[0]);


 FUNC_0();

 return (0);
}
