
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ctl_scsiio {size_t* cdb; } ;
struct ctl_cmd_entry {int flags; scalar_t__ execute; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ctl_cmd_entry* VAR_2 ;

const struct ctl_cmd_entry *
FUNC_0(struct ctl_scsiio *VAR_3, int *VAR_4)
{
 const struct ctl_cmd_entry *VAR_5;
 int VAR_6;

 VAR_5 = &VAR_2[VAR_3->cdb[0]];
 if (VAR_4)
  *VAR_4 = ((VAR_5->flags & VAR_0) != 0);
 if (VAR_5->flags & VAR_0) {
  VAR_6 = VAR_3->cdb[1] & VAR_1;
  VAR_5 = &((const struct ctl_cmd_entry *)
      VAR_5->execute)[VAR_6];
 }
 return (VAR_5);
}
