
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef union uni_ieall {int dummy; } uni_ieall ;
typedef size_t u_int ;
struct unicx {int dummy; } ;
struct TYPE_15__ {int present; } ;
struct TYPE_16__ {TYPE_7__ h; } ;
struct TYPE_13__ {int present; } ;
struct TYPE_14__ {TYPE_5__ h; } ;
struct TYPE_9__ {int present; } ;
struct TYPE_10__ {TYPE_1__ h; } ;
struct uni_conn_avail {TYPE_8__ unrec; TYPE_6__ report; TYPE_4__* git; TYPE_2__ notify; } ;
struct TYPE_11__ {int present; } ;
struct TYPE_12__ {TYPE_3__ h; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int FUNC_0 (int ,union uni_ieall*,struct unicx*) ;

__attribute__((used)) static void
FUNC_1(struct uni_conn_avail *VAR_6, struct unicx *VAR_7)
{
 u_int VAR_8;

 if(VAR_6->notify.h.present & VAR_2)
  FUNC_0(VAR_1, (union uni_ieall *)&VAR_6->notify, VAR_7);
 for(VAR_8 = 0; VAR_8 < VAR_5; VAR_8++)
  if(VAR_6->git[VAR_8].h.present & VAR_2)
   FUNC_0(VAR_0, (union uni_ieall *)&VAR_6->git[VAR_8], VAR_7);
 if(VAR_6->report.h.present & VAR_2)
  FUNC_0(VAR_3, (union uni_ieall *)&VAR_6->report, VAR_7);
 if(VAR_6->unrec.h.present & VAR_2)
  FUNC_0(VAR_4, (union uni_ieall *)&VAR_6->unrec, VAR_7);
}
