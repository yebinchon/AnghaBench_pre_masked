
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct iwn_softc {int calib_cnt; int calib_to; } ;


 int FUNC_0 (struct iwn_softc*,int ,char*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct iwn_softc*) ;
 int FUNC_2 (int *,int ,void (*) (void*),struct iwn_softc*) ;
 int FUNC_3 (struct iwn_softc*,int ,int *,int,int) ;
 int FUNC_4 (int) ;

__attribute__((used)) static void
FUNC_5(void *VAR_2)
{
 struct iwn_softc *VAR_3 = VAR_2;

 FUNC_1(VAR_3);


 if (++VAR_3->calib_cnt >= 120) {
  uint32_t VAR_4 = 0;

  FUNC_0(VAR_3, VAR_1, "%s\n",
      "sending request for statistics");
  (void)FUNC_3(VAR_3, VAR_0, &VAR_4,
      sizeof VAR_4, 1);
  VAR_3->calib_cnt = 0;
 }
 FUNC_2(&VAR_3->calib_to, FUNC_4(500), FUNC_5,
     VAR_3);
}
