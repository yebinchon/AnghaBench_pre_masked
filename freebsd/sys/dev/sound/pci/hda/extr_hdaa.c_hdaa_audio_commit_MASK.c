
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_6__ {scalar_t__ eapdbtl; } ;
struct TYPE_4__ {int ctrl; } ;
struct TYPE_5__ {TYPE_1__ pin; } ;
struct hdaa_widget {int selconn; scalar_t__ nconns; scalar_t__ type; int nid; TYPE_3__ param; TYPE_2__ wclass; scalar_t__ waspin; } ;
struct hdaa_devinfo {int nodecnt; int quirks; int dev; struct hdaa_widget* widget; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,scalar_t__) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ,int ,int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct hdaa_devinfo*) ;
 int FUNC_4 (struct hdaa_devinfo*) ;
 int FUNC_5 (struct hdaa_devinfo*) ;
 int FUNC_6 (struct hdaa_widget*,int) ;

__attribute__((used)) static void
FUNC_7(struct hdaa_devinfo *VAR_4)
{
 struct hdaa_widget *VAR_5;
 int VAR_6;


 FUNC_3(VAR_4);


 for (VAR_6 = 0; VAR_6 < VAR_4->nodecnt; VAR_6++) {
  VAR_5 = &VAR_4->widget[VAR_6];
  if (VAR_5 == ((void*)0))
   continue;
  if (VAR_5->selconn == -1)
   VAR_5->selconn = 0;
  if (VAR_5->nconns > 0)
   FUNC_6(VAR_5, VAR_5->selconn);
  if (VAR_5->type == VAR_3 ||
      VAR_5->waspin) {
   FUNC_2(VAR_4->dev,
       FUNC_1(0, VAR_5->nid,
       VAR_5->wclass.pin.ctrl));
  }
  if (VAR_5->param.eapdbtl != VAR_2) {
   uint32_t VAR_7;

   VAR_7 = VAR_5->param.eapdbtl;
   if (VAR_4->quirks &
       VAR_0)
    VAR_7 ^= VAR_1;
   FUNC_2(VAR_4->dev,
       FUNC_0(0, VAR_5->nid,
       VAR_7));
  }
 }

 FUNC_4(VAR_4);
 FUNC_5(VAR_4);
}
