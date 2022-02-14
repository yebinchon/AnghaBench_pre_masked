
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hd_struct {int partno; int holder_dir; int rcu_head; int policy; void* nr_sects; int discard_alignment; int alignment_offset; void* start_sect; } ;
struct gendisk {TYPE_1__* queue; struct disk_part_tbl* part_tbl; } ;
struct disk_part_tbl {scalar_t__* part; } ;
struct device {int kobj; int devt; struct device* parent; int * type; int * class; } ;
typedef void* sector_t ;
typedef int dev_t ;
struct TYPE_2__ {int limits; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct hd_struct* FUNC_0 (int) ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int VAR_4 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct hd_struct*,int *) ;
 int FUNC_4 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (struct device*) ;
 char* FUNC_6 (struct device*) ;
 int FUNC_7 (struct device*,char*,char const*,int) ;
 int FUNC_8 (struct device*,int) ;
 int FUNC_9 (struct device*) ;
 int FUNC_10 (struct device*,int *) ;
 int FUNC_11 (struct device*) ;
 int FUNC_12 (struct device*) ;
 int FUNC_13 (struct gendisk*,int) ;
 struct device* FUNC_14 (struct gendisk*) ;
 int FUNC_15 (struct hd_struct*) ;
 int FUNC_16 (struct gendisk*) ;
 int FUNC_17 (struct hd_struct*) ;
 scalar_t__ FUNC_18 (char const) ;
 int FUNC_19 (struct hd_struct*) ;
 int FUNC_20 (char*,int *) ;
 int FUNC_21 (int ) ;
 int FUNC_22 (int *,int ) ;
 struct hd_struct* FUNC_23 (int,int ) ;
 struct device* FUNC_24 (struct hd_struct*) ;
 int VAR_7 ;
 int FUNC_25 (struct device*) ;
 int FUNC_26 (int *,void*) ;
 int FUNC_27 (int *,void*) ;
 int FUNC_28 (scalar_t__,struct hd_struct*) ;
 int FUNC_29 (char const*) ;

struct hd_struct *FUNC_30(struct gendisk *VAR_8, int VAR_9,
    sector_t VAR_10, sector_t VAR_11, int VAR_12)
{
 struct hd_struct *VAR_13;
 dev_t VAR_14 = FUNC_2(0, 0);
 struct device *VAR_15 = FUNC_14(VAR_8);
 struct device *VAR_16;
 struct disk_part_tbl *VAR_17;
 const char *VAR_18;
 int VAR_19;

 VAR_19 = FUNC_13(VAR_8, VAR_9);
 if (VAR_19)
  return FUNC_0(VAR_19);
 VAR_17 = VAR_8->part_tbl;

 if (VAR_17->part[VAR_9])
  return FUNC_0(-VAR_1);

 VAR_13 = FUNC_23(sizeof(*VAR_13), VAR_3);
 if (!VAR_13)
  return FUNC_0(-VAR_1);

 if (!FUNC_17(VAR_13)) {
  VAR_19 = -VAR_2;
  goto out_free;
 }
 VAR_16 = FUNC_24(VAR_13);

 VAR_13->start_sect = VAR_10;
 VAR_13->alignment_offset =
  FUNC_26(&VAR_8->queue->limits, VAR_10);
 VAR_13->discard_alignment =
  FUNC_27(&VAR_8->queue->limits, VAR_10);
 VAR_13->nr_sects = VAR_11;
 VAR_13->partno = VAR_9;
 VAR_13->policy = FUNC_16(VAR_8);

 VAR_18 = FUNC_6(VAR_15);
 if (FUNC_18(VAR_18[FUNC_29(VAR_18) - 1]))
  FUNC_7(VAR_16, "%sp%d", VAR_18, VAR_9);
 else
  FUNC_7(VAR_16, "%s%d", VAR_18, VAR_9);

 FUNC_12(VAR_16);
 VAR_16->class = &VAR_5;
 VAR_16->type = &VAR_7;
 VAR_16->parent = VAR_15;

 VAR_19 = FUNC_3(VAR_13, &VAR_14);
 if (VAR_19)
  goto out_free_stats;
 VAR_16->devt = VAR_14;


 FUNC_8(VAR_16, 1);
 VAR_19 = FUNC_9(VAR_16);
 if (VAR_19)
  goto out_put;

 VAR_19 = -VAR_2;
 VAR_13->holder_dir = FUNC_20("holders", &VAR_16->kobj);
 if (!VAR_13->holder_dir)
  goto out_del;

 FUNC_8(VAR_16, 0);
 if (VAR_12 & VAR_0) {
  VAR_19 = FUNC_10(VAR_16, &VAR_6);
  if (VAR_19)
   goto out_del;
 }


 FUNC_1(&VAR_13->rcu_head);
 FUNC_28(VAR_17->part[VAR_9], VAR_13);


 if (!FUNC_5(VAR_15))
  FUNC_22(&VAR_16->kobj, VAR_4);

 return VAR_13;

out_free_stats:
 FUNC_15(VAR_13);
out_free:
 FUNC_19(VAR_13);
 return FUNC_0(VAR_19);
out_del:
 FUNC_21(VAR_13->holder_dir);
 FUNC_11(VAR_16);
out_put:
 FUNC_25(VAR_16);
 FUNC_4(VAR_14);
 return FUNC_0(VAR_19);
}
