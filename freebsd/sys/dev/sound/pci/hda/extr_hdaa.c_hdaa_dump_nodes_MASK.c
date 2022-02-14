
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int widget_cap; scalar_t__ outamp_cap; scalar_t__ inamp_cap; int eapdbtl; int supp_pcm_size_rate; int supp_stream_formats; } ;
struct TYPE_4__ {int stripecap; } ;
struct TYPE_5__ {TYPE_1__ conv; } ;
struct hdaa_widget {scalar_t__ enable; char* name; int bindas; scalar_t__ ossmask; size_t ossdev; scalar_t__ type; int nconns; int* conns; scalar_t__* connsenable; int selconn; TYPE_3__ param; scalar_t__ waspin; int bindseqmask; TYPE_2__ wclass; int nid; } ;
struct hdaa_devinfo {scalar_t__ inamp_cap; scalar_t__ outamp_cap; int startnode; int endnode; int dev; int supp_pcm_size_rate; int supp_stream_formats; } ;
typedef int buf ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int) ;
 scalar_t__ FUNC_7 (int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 (int ,char*,...) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (scalar_t__,char*,int) ;
 int FUNC_12 (int ,scalar_t__,char*) ;
 int FUNC_13 (int ,int ,int ) ;
 int FUNC_14 (struct hdaa_widget*) ;
 struct hdaa_widget* FUNC_15 (struct hdaa_devinfo*,int) ;
 char** VAR_5 ;
 int FUNC_16 (char*,...) ;

__attribute__((used)) static void
FUNC_17(struct hdaa_devinfo *VAR_6)
{
 struct hdaa_widget *VAR_7, *VAR_8;
 char VAR_9[64];
 int VAR_10, VAR_11;

 FUNC_9(VAR_6->dev, "\n");
 FUNC_9(VAR_6->dev, "Default parameters:\n");
 FUNC_13(VAR_6->dev,
     VAR_6->supp_stream_formats,
     VAR_6->supp_pcm_size_rate);
 FUNC_12(VAR_6->dev, VAR_6->inamp_cap, " Input");
 FUNC_12(VAR_6->dev, VAR_6->outamp_cap, "Output");
 for (VAR_10 = VAR_6->startnode; VAR_10 < VAR_6->endnode; VAR_10++) {
  VAR_7 = FUNC_15(VAR_6, VAR_10);
  if (VAR_7 == ((void*)0)) {
   FUNC_9(VAR_6->dev, "Ghost widget nid=%d\n", VAR_10);
   continue;
  }
  FUNC_9(VAR_6->dev, "\n");
  FUNC_9(VAR_6->dev, "            nid: %d%s\n", VAR_7->nid,
      (VAR_7->enable == 0) ? " [DISABLED]" : "");
  FUNC_9(VAR_6->dev, "           Name: %s\n", VAR_7->name);
  FUNC_9(VAR_6->dev, "     Widget cap: 0x%08x",
      VAR_7->param.widget_cap);
  if (VAR_7->param.widget_cap & 0x0ee1) {
   if (FUNC_3(VAR_7->param.widget_cap))
       FUNC_16(" LRSWAP");
   if (FUNC_5(VAR_7->param.widget_cap))
       FUNC_16(" PWR");
   if (FUNC_1(VAR_7->param.widget_cap))
       FUNC_16(" DIGITAL");
   if (FUNC_8(VAR_7->param.widget_cap))
       FUNC_16(" UNSOL");
   if (FUNC_6(VAR_7->param.widget_cap))
       FUNC_16(" PROC");
   if (FUNC_7(VAR_7->param.widget_cap))
       FUNC_16(" STRIPE(x%d)",
    1 << (FUNC_10(VAR_7->wclass.conv.stripecap) - 1));
   VAR_11 = FUNC_0(VAR_7->param.widget_cap);
   if (VAR_11 == 1)
       FUNC_16(" STEREO");
   else if (VAR_11 > 1)
       FUNC_16(" %dCH", VAR_11 + 1);
  }
  FUNC_16("\n");
  if (VAR_7->bindas != -1) {
   FUNC_9(VAR_6->dev, "    Association: %d (0x%04x)\n",
       VAR_7->bindas, VAR_7->bindseqmask);
  }
  if (VAR_7->ossmask != 0 || VAR_7->ossdev >= 0) {
   FUNC_9(VAR_6->dev, "            OSS: %s",
       FUNC_11(VAR_7->ossmask, VAR_9, sizeof(VAR_9)));
   if (VAR_7->ossdev >= 0)
       FUNC_16(" (%s)", VAR_5[VAR_7->ossdev]);
   FUNC_16("\n");
  }
  if (VAR_7->type == VAR_3 ||
      VAR_7->type == VAR_1) {
   FUNC_13(VAR_6->dev,
       VAR_7->param.supp_stream_formats,
       VAR_7->param.supp_pcm_size_rate);
  } else if (VAR_7->type ==
      VAR_4 || VAR_7->waspin)
   FUNC_14(VAR_7);
  if (VAR_7->param.eapdbtl != VAR_0)
   FUNC_9(VAR_6->dev, "           EAPD: 0x%08x\n",
       VAR_7->param.eapdbtl);
  if (FUNC_4(VAR_7->param.widget_cap) &&
      VAR_7->param.outamp_cap != 0)
   FUNC_12(VAR_6->dev, VAR_7->param.outamp_cap, "Output");
  if (FUNC_2(VAR_7->param.widget_cap) &&
      VAR_7->param.inamp_cap != 0)
   FUNC_12(VAR_6->dev, VAR_7->param.inamp_cap, " Input");
  if (VAR_7->nconns > 0)
   FUNC_9(VAR_6->dev, "    Connections: %d\n", VAR_7->nconns);
  for (VAR_11 = 0; VAR_11 < VAR_7->nconns; VAR_11++) {
   VAR_8 = FUNC_15(VAR_6, VAR_7->conns[VAR_11]);
   FUNC_9(VAR_6->dev, "          + %s<- nid=%d [%s]",
       (VAR_7->connsenable[VAR_11] == 0)?"[DISABLED] ":"",
       VAR_7->conns[VAR_11], (VAR_8 == ((void*)0)) ? "GHOST!" : VAR_8->name);
   if (VAR_8 == ((void*)0))
    FUNC_16(" [UNKNOWN]");
   else if (VAR_8->enable == 0)
    FUNC_16(" [DISABLED]");
   if (VAR_7->nconns > 1 && VAR_7->selconn == VAR_11 && VAR_7->type !=
       VAR_2)
    FUNC_16(" (selected)");
   FUNC_16("\n");
  }
 }

}
