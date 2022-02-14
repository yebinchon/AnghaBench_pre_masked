
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int u_char ;
typedef TYPE_4__* tcb_p ;
typedef TYPE_5__* hcb_p ;
typedef TYPE_6__* ccb_p ;
struct TYPE_15__ {size_t target; int nego_status; } ;
struct TYPE_14__ {int features; TYPE_4__* target; } ;
struct TYPE_11__ {int options; scalar_t__ width; scalar_t__ period; scalar_t__ offset; } ;
struct TYPE_10__ {scalar_t__ width; scalar_t__ period; scalar_t__ offset; } ;
struct TYPE_12__ {TYPE_2__ goal; TYPE_1__ current; } ;
struct TYPE_13__ {TYPE_6__* nego_cp; TYPE_3__ tinfo; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;



 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (TYPE_6__*,char*,int*) ;

__attribute__((used)) static int FUNC_1(hcb_p VAR_9, ccb_p VAR_10, int VAR_11, u_char *VAR_12)
{
 tcb_p VAR_13 = &VAR_9->target[VAR_10->target];
 int VAR_14 = 0;





 if (!(VAR_9->features & VAR_2))
  VAR_13->tinfo.goal.options = 0;



 if (VAR_13->tinfo.goal.options & VAR_8)
  VAR_11 = 130;



 else if (VAR_13->tinfo.current.width != VAR_13->tinfo.goal.width)
  VAR_11 = 128;



 else if (VAR_13->tinfo.current.period != VAR_13->tinfo.goal.period ||
   VAR_13->tinfo.current.offset != VAR_13->tinfo.goal.offset)
  VAR_11 = 129;

 switch (VAR_11) {
 case 129:
  VAR_12[VAR_14++] = VAR_3;
  VAR_12[VAR_14++] = 3;
  VAR_12[VAR_14++] = VAR_5;
  VAR_12[VAR_14++] = VAR_13->tinfo.goal.period;
  VAR_12[VAR_14++] = VAR_13->tinfo.goal.offset;
  break;
 case 128:
  VAR_12[VAR_14++] = VAR_3;
  VAR_12[VAR_14++] = 2;
  VAR_12[VAR_14++] = VAR_6;
  VAR_12[VAR_14++] = VAR_13->tinfo.goal.width;
  break;
 case 130:
  VAR_12[VAR_14++] = VAR_3;
  VAR_12[VAR_14++] = 6;
  VAR_12[VAR_14++] = VAR_4;
  VAR_12[VAR_14++] = VAR_13->tinfo.goal.period;
  VAR_12[VAR_14++] = 0;
  VAR_12[VAR_14++] = VAR_13->tinfo.goal.offset;
  VAR_12[VAR_14++] = VAR_13->tinfo.goal.width;
  VAR_12[VAR_14++] = VAR_13->tinfo.goal.options & VAR_7;
  break;
 }

 VAR_10->nego_status = VAR_11;

 if (VAR_11) {
  VAR_13->nego_cp = VAR_10;
  if (VAR_0 & VAR_1) {
   FUNC_0(VAR_10, VAR_11 == 129 ? "sync msgout" :
       VAR_11 == 128 ? "wide msgout" :
       "ppr msgout", VAR_12);
  }
 }

 return VAR_14;
}
