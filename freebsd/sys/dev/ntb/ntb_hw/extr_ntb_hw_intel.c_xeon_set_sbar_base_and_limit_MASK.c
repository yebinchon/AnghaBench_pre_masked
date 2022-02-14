
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
struct ntb_softc {scalar_t__ b2b_off; } ;
typedef enum ntb_bar { ____Placeholder_ntb_bar } ntb_bar ;


 int FUNC_0 (struct ntb_softc*,int,int *,int *,int *) ;
 int FUNC_1 (struct ntb_softc*,int) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int,int ,int ) ;

__attribute__((used)) static void
FUNC_4(struct ntb_softc *VAR_0, uint64_t VAR_1,
    enum ntb_bar VAR_2, enum ntb_bar VAR_3)
{
 uint64_t VAR_4;
 uint32_t VAR_5, VAR_6;

 FUNC_0(VAR_0, VAR_2, &VAR_5, ((void*)0), &VAR_6);
 if (VAR_2 == VAR_3) {
  if (VAR_0->b2b_off)
   VAR_1 += VAR_0->b2b_off;
  else
   VAR_1 = 0;
 }

 if (!FUNC_1(VAR_0, VAR_2)) {
  FUNC_3(4, VAR_5, VAR_1);
  VAR_4 = FUNC_2(4, VAR_5);
  (void)VAR_4;

  FUNC_3(4, VAR_6, VAR_1);
  VAR_4 = FUNC_2(4, VAR_6);
  (void)VAR_4;
 } else {
  FUNC_3(8, VAR_5, VAR_1);
  VAR_4 = FUNC_2(8, VAR_5);
  (void)VAR_4;

  FUNC_3(8, VAR_6, VAR_1);
  VAR_4 = FUNC_2(8, VAR_6);
  (void)VAR_4;
 }
}
