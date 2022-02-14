
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct udf_node {int hash_id; struct file_entry* fentry; struct udf_mnt* udfmp; } ;
struct udf_mnt {int bshift; int part_start; int s_table_entries; int p_sectors; TYPE_3__* s_table; } ;
struct short_ad {int pos; } ;
struct TYPE_4__ {int lb_num; } ;
struct long_ad {TYPE_1__ loc; } ;
struct icb_tag {int strat_type; int flags; } ;
struct file_entry {int l_ea; int l_ad; struct icb_tag icbtag; } ;
typedef int off_t ;
typedef int daddr_t ;
struct TYPE_6__ {TYPE_2__* entries; } ;
struct TYPE_5__ {int map; int org; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ,struct file_entry*,int) ;
 int FUNC_1 (int ,void*) ;
 int VAR_2 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int VAR_3 ;
 int FUNC_4 (char*,...) ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_5(struct udf_node *VAR_5, off_t VAR_6, daddr_t *VAR_7,
    uint32_t *VAR_8)
{
 struct udf_mnt *VAR_9;
 struct file_entry *VAR_10;
 void *VAR_11;
 struct icb_tag *VAR_12;
 uint32_t VAR_13 = 0;
 daddr_t VAR_14;
 int VAR_15, VAR_16 = 0;
 int VAR_17, VAR_18;

 VAR_9 = VAR_5->udfmp;
 VAR_10 = VAR_5->fentry;
 VAR_12 = &VAR_10->icbtag;

 switch (FUNC_2(VAR_12->strat_type)) {
 case 4:
  break;

 case 4096:
  FUNC_4("Cannot deal with strategy4096 yet!\n");
  return (VAR_1);

 default:
  FUNC_4("Unknown strategy type %d\n", VAR_12->strat_type);
  return (VAR_1);
 }

 switch (FUNC_2(VAR_12->flags) & 0x7) {
 case 0:





  do {
   VAR_6 -= VAR_13;
   VAR_15 = sizeof(struct short_ad) * VAR_16;
   if (VAR_15 > FUNC_3(VAR_10->l_ad)) {
    FUNC_4("File offset out of bounds\n");
    return (VAR_0);
   }
   VAR_11 = FUNC_0(VAR_4, VAR_10,
       FUNC_3(VAR_10->l_ea) + VAR_15);
   VAR_13 = FUNC_1(VAR_4, VAR_11);
   VAR_16++;
  } while(VAR_6 >= VAR_13);

  VAR_14 = (VAR_6 >> VAR_9->bshift) +
      FUNC_3(((struct short_ad *)(VAR_11))->pos);

  *VAR_8 = VAR_13 - VAR_6;

  break;
 case 1:





  do {
   VAR_6 -= VAR_13;
   VAR_15 = sizeof(struct long_ad) * VAR_16;
   if (VAR_15 > FUNC_3(VAR_10->l_ad)) {
    FUNC_4("File offset out of bounds\n");
    return (VAR_0);
   }
   VAR_11 = FUNC_0(VAR_3, VAR_10,
       FUNC_3(VAR_10->l_ea) + VAR_15);
   VAR_13 = FUNC_1(VAR_3, VAR_11);
   VAR_16++;
  } while(VAR_6 >= VAR_13);

  VAR_14 = (VAR_6 >> VAR_9->bshift) +
      FUNC_3(((struct long_ad *)(VAR_11))->loc.lb_num);

  *VAR_8 = VAR_13 - VAR_6;

  break;
 case 3:




  *VAR_8 = 0;
  *VAR_7 = VAR_5->hash_id + VAR_9->part_start;

  return (VAR_2);
 case 2:

 default:
  FUNC_4("Unsupported allocation descriptor %d\n",
         VAR_12->flags & 0x7);
  return (VAR_1);
 }

 *VAR_7 = VAR_14 + VAR_9->part_start;





 if (VAR_9->s_table != ((void*)0)) {
  for (VAR_17 = 0; VAR_17< VAR_9->s_table_entries; VAR_17++) {
   VAR_18 =
       VAR_14 - FUNC_3(VAR_9->s_table->entries[VAR_17].org);
   if ((VAR_18 < VAR_9->p_sectors) && (VAR_18 >= 0)) {
    *VAR_7 =
       FUNC_3(VAR_9->s_table->entries[VAR_17].map) +
        VAR_18;
    break;
   }
  }
 }

 return (0);
}
