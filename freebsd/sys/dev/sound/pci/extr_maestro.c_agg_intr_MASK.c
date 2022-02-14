
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int8_t ;
typedef int u_int ;
struct TYPE_3__ {int channel; } ;
struct agg_info {scalar_t__ curpwr; int playchns; int active; int dev; TYPE_1__ rch; TYPE_2__* pch; } ;
struct TYPE_4__ {int channel; } ;


 int FUNC_0 (struct agg_info*,int ,int) ;
 int FUNC_1 (struct agg_info*,int ,int,int) ;
 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;


 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct agg_info*) ;
 int FUNC_3 (struct agg_info*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,char*,int ,int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int,int) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_11(void *VAR_7)
{
 struct agg_info* VAR_8 = VAR_7;
 register u_int8_t VAR_9;
 int VAR_10;
 u_int VAR_11;

 VAR_9 = FUNC_0(VAR_8, VAR_4, 1);
 if (!VAR_9)
  return;


 FUNC_1(VAR_8, VAR_4, VAR_9, 1);

 if (VAR_9 & VAR_0) {



  if (VAR_8->curpwr <= VAR_3) {
   FUNC_1(VAR_8, VAR_6, 1, 2);
   for (VAR_10 = 0, VAR_11 = 1; VAR_10 < VAR_8->playchns; VAR_10++, VAR_11 <<= 1) {
    if (VAR_8->active & VAR_11) {
     if (VAR_8->curpwr <= VAR_3)
      FUNC_4(VAR_8->pch[VAR_10].channel);
     else {
      VAR_11 = 0;
      break;
     }
    }
   }
   if ((VAR_8->active & VAR_11)
       && VAR_8->curpwr <= VAR_3)
    FUNC_4(VAR_8->rch.channel);
  }




 }

 if (VAR_9 & VAR_1) {
  register u_int8_t VAR_12;

  FUNC_2(VAR_8);
  VAR_12 = FUNC_0(VAR_8, VAR_5, 1);
  FUNC_1(VAR_8, VAR_5, 129, 1);
  FUNC_3(VAR_8);

  switch (VAR_12) {
  case 128:
   FUNC_8(VAR_8->dev, 1, 1);
   break;
  case 130:
   FUNC_8(VAR_8->dev, -1, -1);
   break;
  case 129:
   break;
  default:
   if (VAR_12 & VAR_2) {
    FUNC_7(VAR_8->dev);
    break;
   }
   FUNC_6(VAR_8->dev,
          "%s: unknown HWVOL event 0x%x\n",
          FUNC_5(VAR_8->dev), VAR_12);
  }
 }
}
