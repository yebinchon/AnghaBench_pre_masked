
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ctl_softc {int othersc_pool; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct ctl_softc* VAR_5 ;
 int FUNC_0 (struct ctl_softc*) ;
 scalar_t__ FUNC_1 (struct ctl_softc*) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int VAR_6 ;
 scalar_t__ FUNC_3 (struct ctl_softc*,char*,int ,int *) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(void)
{
 struct ctl_softc *VAR_7 = VAR_5;

 if (FUNC_3(VAR_7, "othersc", VAR_2,
                     &VAR_7->othersc_pool) != 0)
  return (VAR_4);
 if (FUNC_1(VAR_7) != VAR_1) {
  FUNC_4(VAR_7->othersc_pool);
  return (VAR_3);
 }
 if (FUNC_2(VAR_0, VAR_6)
     != VAR_1) {
  FUNC_0(VAR_7);
  FUNC_4(VAR_7->othersc_pool);
  return (VAR_3);
 }
 return (0);
}
