
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int (* close ) (int) ;} ;
struct TYPE_3__ {int (* bender ) (int,int,int) ;int (* controller ) (int,int,int,int ) ;int (* reset ) (int) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_2__** VAR_8 ;
 scalar_t__* VAR_9 ;
 int FUNC_0 (int,int) ;
 scalar_t__* VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_1 () ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,int,int,int ) ;
 int FUNC_6 (int,int,int,int ) ;
 int FUNC_7 (int,int,int) ;
 int FUNC_8 (int) ;
 TYPE_1__** VAR_20 ;
 int VAR_21 ;
 scalar_t__ FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static void FUNC_11(void)
{




 int VAR_22;
 int VAR_23;
 unsigned long VAR_24;

 FUNC_1();

 VAR_19 = VAR_4;
 VAR_12 = 0;
 VAR_11 = 0;

 VAR_14 = VAR_13 = VAR_15 = 0;
 VAR_2 = VAR_1 = VAR_3 = 0;

 for (VAR_22 = 0; VAR_22 < VAR_7; VAR_22++)
  if (VAR_21 & (1 << VAR_22))
   if (VAR_20[VAR_22])
    VAR_20[VAR_22]->reset(VAR_22);

 if (VAR_16 == VAR_0)
 {
  for (VAR_23 = 0; VAR_23 < 16; VAR_23++)
   for (VAR_22 = 0; VAR_22 < VAR_7; VAR_22++)
    if (VAR_21 & (1 << VAR_22))
     if (VAR_20[VAR_22])
     {
      VAR_20[VAR_22]->controller(VAR_22, VAR_23, 123, 0);
      VAR_20[VAR_22]->controller(VAR_22, VAR_23, 121, 0);
      VAR_20[VAR_22]->bender(VAR_22, VAR_23, 1 << 13);
     }
 }
 else
 {
  for (VAR_22 = 0; VAR_22 < VAR_6; VAR_22++)
   if (VAR_10[VAR_22])


   {





    FUNC_0(VAR_22, 0xfe);

    for (VAR_23 = 0; VAR_23 < 16; VAR_23++)
    {
     FUNC_0(VAR_22, (unsigned char) (0xb0 + (VAR_23 & 0x0f)));
     FUNC_0(VAR_22, 0x7b);
     FUNC_0(VAR_22, 0);
    }

    VAR_8[VAR_22]->close(VAR_22);

    VAR_10[VAR_22] = 0;
    VAR_9[VAR_22] = 0;
   }
 }

 VAR_17 = 0;

 FUNC_2(&VAR_5,VAR_24);

 if (FUNC_9(&VAR_18)) {

  FUNC_10(&VAR_18);
 }
 FUNC_3(&VAR_5,VAR_24);
}
