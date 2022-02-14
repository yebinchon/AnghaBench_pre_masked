
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct termp {int fonti; } ;
struct tbl_dat {int string; TYPE_1__* layout; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct termp*,int) ;
 int FUNC_1 (struct termp*,int ) ;
 int FUNC_2 (struct termp*,int ) ;

__attribute__((used)) static void
FUNC_3(struct termp *VAR_4, const struct tbl_dat *VAR_5)
{
 int VAR_6;

 VAR_6 = VAR_4->fonti;
 if (VAR_5->layout->flags & VAR_0)
  FUNC_1(VAR_4, VAR_2);
 else if (VAR_5->layout->flags & VAR_1)
  FUNC_1(VAR_4, VAR_3);

 FUNC_2(VAR_4, VAR_5->string);

 FUNC_0(VAR_4, VAR_6);
}
