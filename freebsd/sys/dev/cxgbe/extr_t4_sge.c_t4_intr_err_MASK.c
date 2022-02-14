
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct adapter {int debug_flags; int flags; int swintr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct adapter*,int ) ;
 int FUNC_2 (struct adapter*,int const) ;
 int FUNC_3 (struct adapter*,int ,int) ;

void
FUNC_4(void *VAR_4)
{
 struct adapter *VAR_5 = VAR_4;
 uint32_t VAR_6;
 const bool VAR_7 = (VAR_5->debug_flags & VAR_2) != 0;

 if (VAR_5->flags & VAR_0)
  return;

 VAR_6 = FUNC_1(VAR_5, FUNC_0(VAR_1));
 if (VAR_6 & VAR_3) {
  VAR_5->swintr++;
  FUNC_3(VAR_5, FUNC_0(VAR_1), VAR_6);
 }

 FUNC_2(VAR_5, VAR_7);
}
