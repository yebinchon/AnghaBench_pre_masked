
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct memwin {int mw_curpos; int mw_lock; } ;
struct adapter {int pf; struct memwin* memwin; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int ,int) ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct adapter*) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (struct adapter*,int) ;
 int FUNC_6 (struct adapter*,int,int) ;

__attribute__((used)) static void
FUNC_7(struct adapter *VAR_3, int VAR_4, uint32_t VAR_5)
{
 struct memwin *VAR_6;
 uint32_t VAR_7;
 uint32_t VAR_8;

 FUNC_0(VAR_4 >= 0 && VAR_4 < VAR_1);
 VAR_6 = &VAR_3->memwin[VAR_4];
 FUNC_4(&VAR_6->mw_lock, VAR_2);

 if (FUNC_3(VAR_3)) {
  VAR_7 = 0;
  VAR_6->mw_curpos = VAR_5 & ~0xf;
 } else {
  VAR_7 = FUNC_2(VAR_3->pf);
  VAR_6->mw_curpos = VAR_5 & ~0x7f;
 }
 VAR_8 = FUNC_1(VAR_0, VAR_4);
 FUNC_6(VAR_3, VAR_8, VAR_6->mw_curpos | VAR_7);
 FUNC_5(VAR_3, VAR_8);
}
