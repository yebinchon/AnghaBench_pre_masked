
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u64 ;
struct map_groups {int dummy; } ;
struct thread {struct map_groups mg; } ;
struct machine {struct map_groups kmaps; } ;
struct addr_location {int filtered; char level; scalar_t__ addr; TYPE_1__* map; scalar_t__ cpumode; struct thread* thread; } ;
typedef enum map_type { ____Placeholder_map_type } map_type ;
struct TYPE_3__ {scalar_t__ (* map_ip ) (TYPE_1__*,scalar_t__) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_1__* FUNC_0 (struct map_groups*,int,scalar_t__) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_1 (TYPE_1__*,scalar_t__) ;

void FUNC_2(struct thread *VAR_6,
      struct machine *VAR_7, u8 VAR_8,
      enum map_type VAR_9, u64 VAR_10,
      struct addr_location *VAR_11)
{
 struct map_groups *VAR_12 = &VAR_6->mg;

 VAR_11->thread = VAR_6;
 VAR_11->addr = VAR_10;
 VAR_11->cpumode = VAR_8;
 VAR_11->filtered = 0;

 if (VAR_7 == ((void*)0)) {
  VAR_11->map = ((void*)0);
  return;
 }

 if (VAR_8 == VAR_2 && VAR_5) {
  VAR_11->level = 'k';
  VAR_12 = &VAR_7->kmaps;
 } else if (VAR_8 == VAR_3 && VAR_5) {
  VAR_11->level = '.';
 } else if (VAR_8 == VAR_0 && VAR_4) {
  VAR_11->level = 'g';
  VAR_12 = &VAR_7->kmaps;
 } else {




  if (VAR_8 == VAR_1 && VAR_4)
   VAR_11->level = 'u';
  else
   VAR_11->level = 'H';
  VAR_11->map = ((void*)0);

  if ((VAR_8 == VAR_1 ||
   VAR_8 == VAR_0) &&
   !VAR_4)
   VAR_11->filtered = 1;
  if ((VAR_8 == VAR_3 ||
   VAR_8 == VAR_2) &&
   !VAR_5)
   VAR_11->filtered = 1;

  return;
 }
try_again:
 VAR_11->map = FUNC_0(VAR_12, VAR_9, VAR_11->addr);
 if (VAR_11->map == ((void*)0)) {
  if ((long long)VAR_11->addr < 0 &&
      VAR_8 == VAR_3 &&
      VAR_7 && VAR_12 != &VAR_7->kmaps) {
   VAR_12 = &VAR_7->kmaps;
   goto try_again;
  }
 } else
  VAR_11->addr = VAR_11->map->map_ip(VAR_11->map, VAR_11->addr);
}
