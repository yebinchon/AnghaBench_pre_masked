
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct aac_softc {int aac_container_lock; int aac_container_tqh; int aac_dev; } ;
struct aac_mntobj {int dummy; } ;
struct aac_mntinforesp {scalar_t__ Status; TYPE_1__* MntTable; } ;
struct aac_container {int co_found; int co_mntobj; int * co_disk; } ;
typedef int * device_t ;
struct TYPE_2__ {scalar_t__ VolType; int Capacity; int FileSystemName; int ObjectId; } ;


 scalar_t__ VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int *,struct aac_container*,int ) ;
 int VAR_6 ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (TYPE_1__*,int *,int) ;
 int VAR_7 ;
 int * FUNC_3 (int ,char*,int) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,struct aac_container*) ;
 int FUNC_7 (struct aac_softc*,char*,char*,int ,int ,int ,scalar_t__) ;
 scalar_t__ FUNC_8 (int,int ,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (char*) ;

__attribute__((used)) static void
FUNC_12(struct aac_softc *VAR_8, struct aac_mntinforesp *VAR_9, int VAR_10)
{
 struct aac_container *VAR_11;
 device_t VAR_12;





 if ((VAR_9->Status == VAR_5) && (VAR_9->MntTable[0].VolType != VAR_0)) {
  VAR_11 = (struct aac_container *)FUNC_8(sizeof *VAR_11, VAR_2,
         VAR_3 | VAR_4);
  if (VAR_11 == ((void*)0))
   FUNC_11("Out of memory?!");
  FUNC_7(VAR_8, VAR_1, "id %x  name '%.16s'  size %u  type %d",
        VAR_9->MntTable[0].ObjectId,
        VAR_9->MntTable[0].FileSystemName,
        VAR_9->MntTable[0].Capacity, VAR_9->MntTable[0].VolType);

  if ((VAR_12 = FUNC_3(VAR_8->aac_dev, "aacd", -1)) == ((void*)0))
   FUNC_4(VAR_8->aac_dev, "device_add_child failed\n");
  else
   FUNC_6(VAR_12, VAR_11);
  FUNC_5(VAR_12, FUNC_1(VAR_6,
    VAR_9->MntTable[0].VolType));
  VAR_11->co_disk = VAR_12;
  VAR_11->co_found = VAR_10;
  FUNC_2(&VAR_9->MntTable[0], &VAR_11->co_mntobj,
        sizeof(struct aac_mntobj));
  FUNC_9(&VAR_8->aac_container_lock);
  FUNC_0(&VAR_8->aac_container_tqh, VAR_11, VAR_7);
  FUNC_10(&VAR_8->aac_container_lock);
 }
}
