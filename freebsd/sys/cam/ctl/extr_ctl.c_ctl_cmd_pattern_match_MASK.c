
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union ctl_io {int dummy; } ctl_io ;
typedef int uint64_t ;
struct ctl_scsiio {int dummy; } ;
struct TYPE_2__ {int len; int lba; } ;
struct ctl_error_desc {int error_pattern; TYPE_1__ lba_range; } ;
struct ctl_cmd_entry {int pattern; } ;
typedef int ctl_lun_error_pattern ;
typedef scalar_t__ ctl_action ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int ,int ,int ,int ,int ) ;
 struct ctl_cmd_entry* FUNC_1 (struct ctl_scsiio*,int *) ;
 int FUNC_2 (union ctl_io*,int *,int *) ;

__attribute__((used)) static ctl_lun_error_pattern
FUNC_3(struct ctl_scsiio *VAR_7, struct ctl_error_desc *VAR_8)
{
 const struct ctl_cmd_entry *VAR_9;
 ctl_lun_error_pattern VAR_10, VAR_11;

 VAR_11 = VAR_8->error_pattern;






 if (VAR_11 & VAR_2)
  return (VAR_2);

 if ((VAR_11 & VAR_3) == VAR_1)
  return (VAR_1);

 VAR_9 = FUNC_1(VAR_7, ((void*)0));

 VAR_10 = VAR_9->pattern & VAR_11;
 if ((VAR_10 & ~VAR_3) !=
      (VAR_11 & ~VAR_3))
  return (VAR_4);





 if (VAR_10 & VAR_5) {
  uint64_t VAR_12;
  uint64_t VAR_13;
  ctl_action VAR_14;
  int VAR_15;

  VAR_15 = FUNC_2((union ctl_io *)VAR_7, &VAR_12, &VAR_13);
  if (VAR_15 != 0)
   return (VAR_4);

  VAR_14 = FUNC_0(VAR_12, VAR_13, VAR_8->lba_range.lba,
           VAR_8->lba_range.len, VAR_6);




  if (VAR_14 == VAR_0)
   return (VAR_4);
 }

 return (VAR_10);
}
