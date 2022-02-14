
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
struct uni_msg {size_t* b_buf; size_t b_wptr; size_t b_rptr; } ;
struct TYPE_15__ {int present; } ;
struct TYPE_16__ {TYPE_7__ h; } ;
struct TYPE_11__ {int present; } ;
struct TYPE_12__ {TYPE_3__ h; } ;
struct TYPE_9__ {int present; } ;
struct TYPE_10__ {TYPE_1__ h; } ;
struct uni_modify_rej {TYPE_8__ unrec; TYPE_6__* git; TYPE_4__ notify; TYPE_2__ cause; int hdr; } ;
struct TYPE_13__ {int present; } ;
struct TYPE_14__ {TYPE_5__ h; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 scalar_t__ FUNC_0 (int,struct uni_msg*,union uni_ieall*,struct unicx*) ;
 scalar_t__ FUNC_1 (struct uni_msg*,int *,int ,struct unicx*,size_t*) ;

__attribute__((used)) static int
FUNC_2(struct uni_msg *VAR_7, struct uni_modify_rej *VAR_8, struct unicx *VAR_9)
{
 u_int VAR_10;
 u_int VAR_11;

 if(FUNC_1(VAR_7, &VAR_8->hdr, VAR_5, VAR_9, &VAR_10))
  return (-2);

 if((VAR_8->cause.h.present & VAR_3) &&
    FUNC_0(VAR_0, VAR_7, (union uni_ieall *)&VAR_8->cause, VAR_9))
  return (VAR_0);
 if((VAR_8->notify.h.present & VAR_3) &&
    FUNC_0(VAR_2, VAR_7, (union uni_ieall *)&VAR_8->notify, VAR_9))
  return (VAR_2);
 for(VAR_11 = 0; VAR_11 < VAR_6; VAR_11++)
  if((VAR_8->git[VAR_11].h.present & VAR_3) &&
     FUNC_0(VAR_1, VAR_7, (union uni_ieall *)&VAR_8->git[VAR_11], VAR_9))
  return ((VAR_11 << 16) + VAR_1);
 if((VAR_8->unrec.h.present & VAR_3) &&
    FUNC_0(VAR_4, VAR_7, (union uni_ieall *)&VAR_8->unrec, VAR_9))
  return (VAR_4);

 VAR_7->b_buf[VAR_10+0] = ((VAR_7->b_wptr-VAR_7->b_rptr)-VAR_10-2) >> 8;
 VAR_7->b_buf[VAR_10+1] = ((VAR_7->b_wptr-VAR_7->b_rptr)-VAR_10-2) >> 0;

 return (0);
}
