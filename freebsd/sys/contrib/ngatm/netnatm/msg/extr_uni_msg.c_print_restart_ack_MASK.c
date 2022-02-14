
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef union uni_ieall {int dummy; } uni_ieall ;
struct unicx {int dummy; } ;
struct TYPE_7__ {int present; } ;
struct TYPE_8__ {TYPE_1__ h; } ;
struct TYPE_11__ {int present; } ;
struct TYPE_12__ {TYPE_5__ h; } ;
struct TYPE_9__ {int present; } ;
struct TYPE_10__ {TYPE_3__ h; } ;
struct uni_restart_ack {TYPE_2__ unrec; TYPE_6__ restart; TYPE_4__ connid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,union uni_ieall*,struct unicx*) ;

__attribute__((used)) static void
FUNC_1(struct uni_restart_ack *VAR_4, struct unicx *VAR_5)
{
 if(VAR_4->connid.h.present & VAR_1)
  FUNC_0(VAR_0, (union uni_ieall *)&VAR_4->connid, VAR_5);
 if(VAR_4->restart.h.present & VAR_1)
  FUNC_0(VAR_2, (union uni_ieall *)&VAR_4->restart, VAR_5);
 if(VAR_4->unrec.h.present & VAR_1)
  FUNC_0(VAR_3, (union uni_ieall *)&VAR_4->unrec, VAR_5);
}
