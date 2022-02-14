
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int lock; } ;
typedef TYPE_1__ lithium_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,TYPE_1__*,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 () ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (TYPE_1__*,int ,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(lithium_t *VAR_3, int VAR_4)
{
 int VAR_5;

 FUNC_0(!FUNC_2());
 FUNC_6(&VAR_3->lock);
 {
  VAR_5 = FUNC_3(VAR_3);
  if (VAR_5 == 0) {
   FUNC_5(VAR_3, VAR_1, VAR_0 | VAR_4);
   VAR_5 = FUNC_3(VAR_3);
  }
  if (VAR_5 == 0)
   VAR_5 = FUNC_4(VAR_3, VAR_2);
 }
 FUNC_7(&VAR_3->lock);

 FUNC_1("li_read_ad1843_reg(lith=0x%p, reg=%d) returns 0x%04x\n",
       VAR_3, VAR_4, VAR_5);

 return VAR_5;
}
