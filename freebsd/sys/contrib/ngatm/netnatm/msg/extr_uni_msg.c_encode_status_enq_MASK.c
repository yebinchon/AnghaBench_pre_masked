
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef union uni_ieall {int dummy; } uni_ieall ;
typedef int u_int ;
struct unicx {int dummy; } ;
struct TYPE_7__ {int present; } ;
struct TYPE_8__ {TYPE_3__ h; } ;
struct TYPE_5__ {int present; } ;
struct TYPE_6__ {TYPE_1__ h; } ;
struct uni_status_enq {TYPE_4__ unrec; TYPE_2__ epref; int hdr; } ;
struct uni_msg {int* b_buf; int b_wptr; int b_rptr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int,struct uni_msg*,union uni_ieall*,struct unicx*) ;
 scalar_t__ FUNC_1 (struct uni_msg*,int *,int ,struct unicx*,int*) ;

__attribute__((used)) static int
FUNC_2(struct uni_msg *VAR_4, struct uni_status_enq *VAR_5, struct unicx *VAR_6)
{
 u_int VAR_7;

 if(FUNC_1(VAR_4, &VAR_5->hdr, VAR_3, VAR_6, &VAR_7))
  return (-2);

 if((VAR_5->epref.h.present & VAR_1) &&
    FUNC_0(VAR_0, VAR_4, (union uni_ieall *)&VAR_5->epref, VAR_6))
  return (VAR_0);
 if((VAR_5->unrec.h.present & VAR_1) &&
    FUNC_0(VAR_2, VAR_4, (union uni_ieall *)&VAR_5->unrec, VAR_6))
  return (VAR_2);

 VAR_4->b_buf[VAR_7+0] = ((VAR_4->b_wptr-VAR_4->b_rptr)-VAR_7-2) >> 8;
 VAR_4->b_buf[VAR_7+1] = ((VAR_4->b_wptr-VAR_4->b_rptr)-VAR_7-2) >> 0;

 return (0);
}
