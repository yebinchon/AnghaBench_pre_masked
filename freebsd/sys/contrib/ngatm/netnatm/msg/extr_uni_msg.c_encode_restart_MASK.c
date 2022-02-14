
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
typedef int u_int ;
struct unicx {int dummy; } ;
struct TYPE_11__ {int present; } ;
struct TYPE_12__ {TYPE_5__ h; } ;
struct TYPE_9__ {int present; } ;
struct TYPE_10__ {TYPE_3__ h; } ;
struct TYPE_7__ {int present; } ;
struct TYPE_8__ {TYPE_1__ h; } ;
struct uni_restart {TYPE_6__ unrec; TYPE_4__ restart; TYPE_2__ connid; int hdr; } ;
struct uni_msg {int* b_buf; int b_wptr; int b_rptr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int,struct uni_msg*,union uni_ieall*,struct unicx*) ;
 scalar_t__ FUNC_1 (struct uni_msg*,int *,int ,struct unicx*,int*) ;

__attribute__((used)) static int
FUNC_2(struct uni_msg *VAR_5, struct uni_restart *VAR_6, struct unicx *VAR_7)
{
 u_int VAR_8;

 if(FUNC_1(VAR_5, &VAR_6->hdr, VAR_4, VAR_7, &VAR_8))
  return (-2);

 if((VAR_6->connid.h.present & VAR_1) &&
    FUNC_0(VAR_0, VAR_5, (union uni_ieall *)&VAR_6->connid, VAR_7))
  return (VAR_0);
 if((VAR_6->restart.h.present & VAR_1) &&
    FUNC_0(VAR_2, VAR_5, (union uni_ieall *)&VAR_6->restart, VAR_7))
  return (VAR_2);
 if((VAR_6->unrec.h.present & VAR_1) &&
    FUNC_0(VAR_3, VAR_5, (union uni_ieall *)&VAR_6->unrec, VAR_7))
  return (VAR_3);

 VAR_5->b_buf[VAR_8+0] = ((VAR_5->b_wptr-VAR_5->b_rptr)-VAR_8-2) >> 8;
 VAR_5->b_buf[VAR_8+1] = ((VAR_5->b_wptr-VAR_5->b_rptr)-VAR_8-2) >> 0;

 return (0);
}
