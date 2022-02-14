
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct pst_softc {TYPE_2__* iop; struct i2o_bsa_device* info; TYPE_3__* disk; int queue; TYPE_1__* lct; } ;
struct i2o_get_param_reply {scalar_t__ result; } ;
struct i2o_device_identity {char* vendor; char* product; char* description; char* revision; } ;
struct i2o_bsa_device {int capacity; int block_size; } ;
typedef int int8_t ;
typedef int device_t ;
struct TYPE_7__ {char* d_name; int d_maxsize; int d_unit; int d_mediasize; int d_fwsectors; int d_fwheads; int d_sectorsize; struct pst_softc* d_drv1; int d_strategy; } ;
struct TYPE_6__ {int dev; } ;
struct TYPE_5__ {int local_tid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (scalar_t__,struct i2o_bsa_device*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,char*,int) ;
 int FUNC_4 (struct i2o_get_param_reply*,int ,int ) ;
 int FUNC_5 (int ) ;
 struct pst_softc* FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 TYPE_3__* FUNC_8 () ;
 int FUNC_9 (TYPE_3__*,int ) ;
 struct i2o_get_param_reply* FUNC_10 (TYPE_2__*,int ,int ,int ) ;
 scalar_t__ FUNC_11 (int,int ,int ) ;
 int FUNC_12 (char*,...) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_13 (int *,char*,char*,char*) ;

__attribute__((used)) static int
FUNC_14(device_t VAR_14)
{
    struct pst_softc *VAR_15 = FUNC_6(VAR_14);
    struct i2o_get_param_reply *VAR_16;
    struct i2o_device_identity *VAR_17;
    int VAR_18 = FUNC_7(VAR_14);
    int8_t VAR_19 [32];

    if (!(VAR_16 = FUNC_10(VAR_15->iop, VAR_15->lct->local_tid,
          VAR_4,
          VAR_3)))
 return VAR_1;

    if (!(VAR_15->info = (struct i2o_bsa_device *)
     FUNC_11(sizeof(struct i2o_bsa_device), VAR_8, VAR_6))) {
 FUNC_4(VAR_16, VAR_9, VAR_7);
 return VAR_2;
    }
    FUNC_1(VAR_16->result, VAR_15->info, sizeof(struct i2o_bsa_device));
    FUNC_4(VAR_16, VAR_9, VAR_7);

    if (!(VAR_16 = FUNC_10(VAR_15->iop, VAR_15->lct->local_tid,
          VAR_4,
          VAR_5)))
 return VAR_1;
    VAR_17 = (struct i2o_device_identity *)VAR_16->result;
    FUNC_3(VAR_17->vendor, VAR_17->vendor, 16);
    FUNC_3(VAR_17->product, VAR_17->product, 16);
    FUNC_13(VAR_19, "%s %s", VAR_17->vendor, VAR_17->product);
    FUNC_4(VAR_16, VAR_9, VAR_7);

    FUNC_2(&VAR_15->queue);

    VAR_15->disk = FUNC_8();
    VAR_15->disk->d_name = "pst";
    VAR_15->disk->d_strategy = VAR_12;
    VAR_15->disk->d_maxsize = 64 * 1024;
    VAR_15->disk->d_drv1 = VAR_15;
    VAR_15->disk->d_unit = VAR_18;

    VAR_15->disk->d_sectorsize = VAR_15->info->block_size;
    VAR_15->disk->d_mediasize = VAR_15->info->capacity;
    VAR_15->disk->d_fwsectors = 63;
    VAR_15->disk->d_fwheads = 255;

    FUNC_9(VAR_15->disk, VAR_0);

    FUNC_12("pst%d: %lluMB <%.40s> [%lld/%d/%d] on %.16s\n", VAR_18,
    (unsigned long long)VAR_15->info->capacity / (1024 * 1024),
    VAR_19, VAR_15->info->capacity/(512*255*63), 255, 63,
    FUNC_5(VAR_15->iop->dev));

    FUNC_0(VAR_13, VAR_11,
     VAR_14, VAR_10);
    return 0;
}
