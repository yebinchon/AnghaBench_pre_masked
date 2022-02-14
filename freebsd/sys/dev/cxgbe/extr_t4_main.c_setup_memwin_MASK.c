
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct memwin_init {int base; int aperture; } ;
struct memwin {int mw_base; int mw_lock; int mw_aperture; scalar_t__ mw_curpos; } ;
struct adapter {struct memwin* memwin; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (struct adapter*) ;
 int FUNC_6 (struct adapter*,int,int ) ;
 int FUNC_7 (int *,char*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct adapter*,int ) ;
 struct memwin_init* VAR_3 ;
 int FUNC_11 (struct adapter*,int ) ;
 int FUNC_12 (struct adapter*,int ,int) ;
 struct memwin_init* VAR_4 ;

__attribute__((used)) static void
FUNC_13(struct adapter *VAR_5)
{
 const struct memwin_init *VAR_6;
 struct memwin *VAR_7;
 int VAR_8;
 uint32_t VAR_9;

 if (FUNC_5(VAR_5)) {







  VAR_9 = FUNC_10(VAR_5, FUNC_1(0));
  VAR_9 &= (uint32_t) VAR_2;

  VAR_6 = &VAR_3[0];
 } else {

  VAR_9 = 0;

  VAR_6 = &VAR_4[0];
 }

 for (VAR_8 = 0, VAR_7 = &VAR_5->memwin[0]; VAR_8 < VAR_1; VAR_8++, VAR_6++, VAR_7++) {
  FUNC_7(&VAR_7->mw_lock, "memory window access");
  VAR_7->mw_base = VAR_6->base;
  VAR_7->mw_aperture = VAR_6->aperture;
  VAR_7->mw_curpos = 0;
  FUNC_12(VAR_5,
      FUNC_0(VAR_0, VAR_8),
      (VAR_7->mw_base + VAR_9) | FUNC_2(0) |
      FUNC_3(FUNC_4(VAR_7->mw_aperture) - 10));
  FUNC_8(&VAR_7->mw_lock);
  FUNC_6(VAR_5, VAR_8, 0);
  FUNC_9(&VAR_7->mw_lock);
 }


 FUNC_11(VAR_5, FUNC_0(VAR_0, 2));
}
