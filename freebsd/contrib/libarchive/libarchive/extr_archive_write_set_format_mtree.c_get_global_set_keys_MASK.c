
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int keys; scalar_t__ gid; scalar_t__ uid; scalar_t__ fflags_set; scalar_t__ fflags_clear; scalar_t__ mode; int const type; } ;
struct mtree_writer {int keys; TYPE_1__ set; } ;
struct mtree_entry {scalar_t__ gid; scalar_t__ uid; scalar_t__ fflags_set; scalar_t__ fflags_clear; scalar_t__ mode; int filetype; } ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int
FUNC_0(struct mtree_writer *VAR_7, struct mtree_entry *VAR_8)
{
 int VAR_9;

 VAR_9 = VAR_7->keys;





 if (VAR_7->set.keys == 0)
  return (VAR_9);

 if ((VAR_7->set.keys & (VAR_2 | VAR_1)) != 0 &&
      VAR_7->set.gid == VAR_8->gid)
  VAR_9 &= ~(VAR_2 | VAR_1);
 if ((VAR_7->set.keys & (VAR_6 | VAR_5)) != 0 &&
      VAR_7->set.uid == VAR_8->uid)
  VAR_9 &= ~(VAR_6 | VAR_5);
 if (VAR_7->set.keys & VAR_0) {
  if (VAR_7->set.fflags_set == VAR_8->fflags_set &&
      VAR_7->set.fflags_clear == VAR_8->fflags_clear)
   VAR_9 &= ~VAR_0;
 }
 if ((VAR_7->set.keys & VAR_3) != 0 && VAR_7->set.mode == VAR_8->mode)
  VAR_9 &= ~VAR_3;

 switch (VAR_8->filetype) {
 case 130: case 128: case 133:
 case 134: case 131:
  break;
 case 132:
  if ((VAR_7->set.keys & VAR_4) != 0 &&
      VAR_7->set.type == 132)
   VAR_9 &= ~VAR_4;
  break;
 case 129:
 default:
  if ((VAR_7->set.keys & VAR_4) != 0 &&
      VAR_7->set.type == 129)
   VAR_9 &= ~VAR_4;
  break;
 }

 return (VAR_9);
}
