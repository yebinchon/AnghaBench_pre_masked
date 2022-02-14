
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdaa_widget {scalar_t__ enable; int nid; char* name; scalar_t__ ossmask; scalar_t__ ossdev; int nconns; scalar_t__* connsenable; int bindas; int * conns; } ;
struct hdaa_pcm_devinfo {int dev; struct hdaa_devinfo* devinfo; } ;
struct hdaa_devinfo {int dummy; } ;
typedef int nid_t ;
typedef int buf ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int,char*) ;
 char* FUNC_1 (scalar_t__,char*,int) ;
 struct hdaa_widget* FUNC_2 (struct hdaa_devinfo*,int ) ;
 int FUNC_3 (char*,...) ;

__attribute__((used)) static void
FUNC_4(struct hdaa_pcm_devinfo *VAR_1, nid_t VAR_2, int VAR_3)
{
 struct hdaa_devinfo *VAR_4 = VAR_1->devinfo;
 struct hdaa_widget *VAR_5, *VAR_6;
 char VAR_7[64];
 int VAR_8;

 if (VAR_3 > VAR_0)
  return;

 VAR_5 = FUNC_2(VAR_4, VAR_2);
 if (VAR_5 == ((void*)0) || VAR_5->enable == 0)
  return;

 if (VAR_3 == 0)
  FUNC_0(VAR_1->dev, "%*s", 4, "");
 else
  FUNC_0(VAR_1->dev, "%*s  + <- ", 4 + (VAR_3 - 1) * 7, "");
 FUNC_3("nid=%d [%s]", VAR_5->nid, VAR_5->name);

 if (VAR_3 > 0) {
  if (VAR_5->ossmask == 0) {
   FUNC_3("\n");
   return;
  }
  FUNC_3(" [src: %s]",
      FUNC_1(
   VAR_5->ossmask, VAR_7, sizeof(VAR_7)));
  if (VAR_5->ossdev >= 0) {
   FUNC_3("\n");
   return;
  }
 }
 FUNC_3("\n");

 for (VAR_8 = 0; VAR_8 < VAR_5->nconns; VAR_8++) {
  if (VAR_5->connsenable[VAR_8] == 0)
   continue;
  VAR_6 = FUNC_2(VAR_4, VAR_5->conns[VAR_8]);
  if (VAR_6 == ((void*)0) || VAR_6->enable == 0 || VAR_6->bindas == -1)
   continue;
  FUNC_4(VAR_1, VAR_5->conns[VAR_8], VAR_3 + 1);
 }

}
