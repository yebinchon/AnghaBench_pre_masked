
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int swp_entry_t ;
struct swap_info_struct {unsigned char* swap_map; unsigned long lowest_bit; unsigned long highest_bit; scalar_t__ prio; size_t type; int flags; TYPE_4__* bdev; int inuse_pages; } ;
struct gendisk {TYPE_1__* fops; } ;
struct TYPE_8__ {struct gendisk* bd_disk; } ;
struct TYPE_7__ {scalar_t__ prio; } ;
struct TYPE_6__ {size_t next; } ;
struct TYPE_5__ {int (* swap_slot_free_notify ) (TYPE_4__*,unsigned long) ;} ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int VAR_5 ;
 int FUNC_2 (TYPE_4__*,unsigned long) ;
 scalar_t__ FUNC_3 (struct swap_info_struct*,unsigned long,unsigned char) ;
 TYPE_3__** VAR_6 ;
 TYPE_2__ VAR_7 ;
 unsigned long FUNC_4 (int ) ;

__attribute__((used)) static unsigned char FUNC_5(struct swap_info_struct *VAR_8,
         swp_entry_t VAR_9, unsigned char VAR_10)
{
 unsigned long VAR_11 = FUNC_4(VAR_9);
 unsigned char VAR_12;
 unsigned char VAR_13;

 VAR_12 = VAR_8->swap_map[VAR_11];
 VAR_13 = VAR_12 & VAR_1;
 VAR_12 &= ~VAR_1;

 if (VAR_10 == VAR_1) {
  FUNC_0(!VAR_13);
  VAR_13 = 0;
 } else if (VAR_12 == VAR_3) {




  VAR_12 = 0;
 } else if ((VAR_12 & ~VAR_0) <= VAR_2) {
  if (VAR_12 == VAR_0) {
   if (FUNC_3(VAR_8, VAR_11, VAR_12))
    VAR_12 = VAR_2 | VAR_0;
   else
    VAR_12 = VAR_2;
  } else
   VAR_12--;
 }

 if (!VAR_12)
  FUNC_1(VAR_9);

 VAR_10 = VAR_12 | VAR_13;
 VAR_8->swap_map[VAR_11] = VAR_10;


 if (!VAR_10) {
  struct gendisk *VAR_14 = VAR_8->bdev->bd_disk;
  if (VAR_11 < VAR_8->lowest_bit)
   VAR_8->lowest_bit = VAR_11;
  if (VAR_11 > VAR_8->highest_bit)
   VAR_8->highest_bit = VAR_11;
  if (VAR_7.next >= 0 &&
      VAR_8->prio > VAR_6[VAR_7.next]->prio)
   VAR_7.next = VAR_8->type;
  VAR_5++;
  VAR_8->inuse_pages--;
  if ((VAR_8->flags & VAR_4) &&
    VAR_14->fops->swap_slot_free_notify)
   VAR_14->fops->swap_slot_free_notify(VAR_8->bdev, VAR_11);
 }

 return VAR_10;
}
