
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef union uni_ieall {int dummy; } uni_ieall ;
struct unicx {int dummy; } ;
struct TYPE_7__ {int present; } ;
struct TYPE_8__ {TYPE_3__ h; } ;
struct TYPE_5__ {int present; } ;
struct TYPE_6__ {TYPE_1__ h; } ;
struct uni_unknown {TYPE_4__ unrec; TYPE_2__ epref; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,union uni_ieall*,struct unicx*) ;

__attribute__((used)) static void
FUNC_1(struct uni_unknown *VAR_3, struct unicx *VAR_4)
{
 if(VAR_3->epref.h.present & VAR_1)
  FUNC_0(VAR_0, (union uni_ieall *)&VAR_3->epref, VAR_4);
 if(VAR_3->unrec.h.present & VAR_1)
  FUNC_0(VAR_2, (union uni_ieall *)&VAR_3->unrec, VAR_4);
}
