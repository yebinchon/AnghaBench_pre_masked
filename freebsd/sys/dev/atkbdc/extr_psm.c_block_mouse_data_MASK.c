
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct psm_softc {int kbdc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct psm_softc*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,int) ;
 int FUNC_7 () ;
 int FUNC_8 (int) ;

__attribute__((used)) static int
FUNC_9(struct psm_softc *VAR_7, int *VAR_8)
{
 int VAR_9;

 if (!FUNC_4(VAR_7->kbdc, VAR_6))
  return (VAR_0);

 VAR_9 = FUNC_7();
 *VAR_8 = FUNC_2(VAR_7->kbdc);
 if ((*VAR_8 == -1) || !FUNC_6(VAR_7->kbdc,
     FUNC_3(VAR_7->kbdc),
     VAR_4 | VAR_3 |
     VAR_5 | VAR_2)) {

  FUNC_8(VAR_9);
  FUNC_4(VAR_7->kbdc, VAR_1);
  return (VAR_0);
 }
 FUNC_0(VAR_7->kbdc, 0);
 FUNC_5(VAR_7->kbdc);
 FUNC_1(VAR_7);
 FUNC_8(VAR_9);

 return (0);
}
