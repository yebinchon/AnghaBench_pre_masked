
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fw_device {int dummy; } ;
struct firewire_softc {struct firewire_comm* fc; } ;
struct firewire_comm {int wait_lock; int tlabel_lock; struct fw_device* crom_src_buf; struct fw_device* speed_map; struct fw_device* topology_map; int devices; int busprobe_callout; int bmr_callout; int timeout_callout; TYPE_1__* arq; int probe_thread; int status; } ;
typedef int device_t ;
struct TYPE_2__ {scalar_t__ maxq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct fw_device* FUNC_0 (int *) ;
 struct fw_device* FUNC_1 (struct fw_device*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 struct firewire_softc* FUNC_4 (int ) ;
 int FUNC_5 (struct fw_device*,int ) ;
 int FUNC_6 (struct firewire_comm*) ;
 int FUNC_7 (struct firewire_softc*) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_8 (int ,int *,int ,char*,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (struct firewire_comm*) ;

__attribute__((used)) static int
FUNC_14(device_t VAR_5)
{
 struct firewire_softc *VAR_6;
 struct firewire_comm *VAR_7;
 struct fw_device *VAR_8, *VAR_9;
 int VAR_10;

 VAR_6 = FUNC_4(VAR_5);
 VAR_7 = VAR_6->fc;
 FUNC_10(&VAR_7->wait_lock);
 VAR_7->status = VAR_0;
 FUNC_13(VAR_7);
 if (FUNC_8(VAR_7->probe_thread, &VAR_7->wait_lock, VAR_2, "fwthr", VAR_3 * 60))
  FUNC_12("firewire probe thread didn't die\n");
 FUNC_11(&VAR_7->wait_lock);

 if (VAR_7->arq != 0 && VAR_7->arq->maxq > 0)
  FUNC_6(VAR_7);

 if ((VAR_10 = FUNC_7(VAR_6)) != 0)
  return VAR_10;

 if ((VAR_10 = FUNC_2(VAR_5)) != 0)
  return VAR_10;

 FUNC_3(&VAR_7->timeout_callout);
 FUNC_3(&VAR_7->bmr_callout);
 FUNC_3(&VAR_7->busprobe_callout);


 for (VAR_8 = FUNC_0(&VAR_7->devices); VAR_8 != ((void*)0);
      VAR_8 = VAR_9) {
  VAR_9 = FUNC_1(VAR_8, VAR_4);
  FUNC_5(VAR_8, VAR_1);
 }
 FUNC_5(VAR_7->topology_map, VAR_1);
 FUNC_5(VAR_7->speed_map, VAR_1);
 FUNC_5(VAR_7->crom_src_buf, VAR_1);

 FUNC_9(&VAR_7->tlabel_lock);
 FUNC_9(&VAR_7->wait_lock);
 return (0);
}
