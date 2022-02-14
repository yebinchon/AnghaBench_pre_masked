
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long current_pages; unsigned long balloon_low; unsigned long balloon_high; int hard_limit; int target_pages; } ;


 TYPE_1__ VAR_0 ;
 unsigned long FUNC_0 (int ,int ) ;

__attribute__((used)) static unsigned long
FUNC_1(void)
{
 unsigned long VAR_1 = FUNC_0(VAR_0.target_pages, VAR_0.hard_limit);
 if (VAR_1 > (VAR_0.current_pages + VAR_0.balloon_low + VAR_0.balloon_high))
  VAR_1 = VAR_0.current_pages + VAR_0.balloon_low + VAR_0.balloon_high;
 return (VAR_1);
}
