
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint32_t ;
typedef scalar_t__ u_int ;
struct TYPE_8__ {int io_lock; } ;
typedef TYPE_1__ ig4iic_softc_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (TYPE_1__*,int *,char*,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_1__*,int ) ;

__attribute__((used)) static int
FUNC_8(ig4iic_softc_t *VAR_8, uint32_t VAR_9)
{
 uint32_t VAR_10;
 int VAR_11;
 int VAR_12 = -1;
 u_int VAR_13 = 0;
 u_int VAR_14 = 25000;

 for (;;) {



  VAR_10 = FUNC_7(VAR_8, VAR_4);
  VAR_11 = FUNC_3(VAR_8, VAR_10 & VAR_1);
  if (VAR_11 || (VAR_10 & VAR_9))
   break;






  if (VAR_9 & (VAR_3 | VAR_2)) {
   VAR_10 = FUNC_7(VAR_8, VAR_5) & VAR_0;
   if (VAR_12 != VAR_10) {
    VAR_12 = VAR_10;
    VAR_13 = 0;
   }
  }




  if (VAR_13 >= VAR_14) {
   VAR_11 = VAR_6;
   break;
  }




  if (!FUNC_1(VAR_8)) {
   FUNC_5(&VAR_8->io_lock);
   FUNC_2(VAR_8, VAR_9 | VAR_1);
   FUNC_4(VAR_8, &VAR_8->io_lock, "i2cwait",
      (VAR_7 + 99) / 100);
   FUNC_2(VAR_8, 0);
   FUNC_6(&VAR_8->io_lock);
   VAR_13 += 10000;
  } else {
   FUNC_0(25);
   VAR_13 += 25;
  }
 }

 return (VAR_11);
}
