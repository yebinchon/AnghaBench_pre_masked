
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef union uni_msgall {int dummy; } uni_msgall ;
typedef int u_int ;
typedef int u_char ;
struct TYPE_4__ {scalar_t__ present; } ;
struct TYPE_5__ {TYPE_1__ h; } ;
struct unicx {int ielast; TYPE_2__ repeat; } ;
struct uni_msg {int * b_rptr; int * b_wptr; } ;
struct uni_iehdr {int act; int present; int coding; } ;
struct iedecl {int maxlen; int flags; } ;
typedef enum uni_msgtype { ____Placeholder_uni_msgtype } uni_msgtype ;
typedef enum uni_ietype { ____Placeholder_uni_ietype } uni_ietype ;
struct TYPE_6__ {int (* decode ) (union uni_msgall*,struct uni_msg*,int,struct uni_iehdr*,int,struct unicx*) ;} ;





 struct iedecl* FUNC_0 (int,int ) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct unicx*,int,int ,int ) ;
 int FUNC_3 (char*,int,...) ;
 int FUNC_4 (union uni_msgall*,struct uni_msg*,int,struct uni_iehdr*,int,struct unicx*) ;
 scalar_t__ FUNC_5 (int*,struct uni_iehdr*,struct uni_msg*,struct unicx*,int*) ;
 int FUNC_6 (struct uni_msg*) ;
 TYPE_3__** VAR_7 ;

__attribute__((used)) static int
FUNC_7(enum uni_msgtype VAR_8, struct uni_msg *VAR_9,
    union uni_msgall *VAR_10, struct unicx *VAR_11)
{
 enum uni_ietype VAR_12;
 struct uni_iehdr VAR_13;
 u_int VAR_14;
 const struct iedecl *VAR_15;
 int VAR_16 = 0, VAR_17;
 u_char *VAR_18;

 VAR_11->ielast = (enum uni_ietype)0;
 VAR_11->repeat.h.present = 0;

 while (FUNC_6(VAR_9) != 0) {
  if (FUNC_5(&VAR_12, &VAR_13, VAR_9, VAR_11, &VAR_14)) {





   VAR_14 = 0xffffffff;
  }




  if ((VAR_15 = FUNC_0(VAR_12, VAR_13.coding)) == ((void*)0) ||
      VAR_12 == VAR_6) {




   if (VAR_14 > FUNC_6(VAR_9))
    VAR_9->b_rptr = VAR_9->b_wptr;
   else
    VAR_9->b_rptr += VAR_14;
   (void)FUNC_2(VAR_11, VAR_12, VAR_13.act, VAR_3);
   VAR_16 = -1;
   continue;
  }



  if (VAR_14 > VAR_15->maxlen - 4 || VAR_14 > FUNC_6(VAR_9)) {
   if (VAR_14 > FUNC_6(VAR_9))
    VAR_14 = FUNC_6(VAR_9);

   VAR_13.present |= VAR_4;




  }





  VAR_18 = VAR_9->b_rptr + VAR_14;
  VAR_17 = VAR_7[VAR_8]->decode(VAR_10, VAR_9, VAR_12,
      &VAR_13, VAR_14, VAR_11);
  VAR_9->b_rptr = VAR_18;





  switch (VAR_17) {

    case 128:
   break;

    case 129:




   (void)FUNC_2(VAR_11, VAR_12, VAR_13.act, VAR_3);
   VAR_16 = -1;
   break;

    case 130:
   if (VAR_15->flags & VAR_0)

    (void)FUNC_2(VAR_11, VAR_12, VAR_13.act, VAR_1);
   else
    (void)FUNC_2(VAR_11, VAR_12, VAR_13.act, VAR_2);
   VAR_16 = -1;
   break;

    default:
   FUNC_1(("bad decode return"));
  }
      VAR_11->ielast = VAR_12;
      if (VAR_12 != VAR_5)
   VAR_11->repeat.h.present = 0;
 }
 return VAR_16;
}
