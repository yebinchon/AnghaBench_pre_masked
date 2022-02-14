
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int device_t ;
struct TYPE_5__ {unsigned long driver_pages; unsigned long hard_limit; scalar_t__ balloon_high; scalar_t__ balloon_low; int current_pages; int target_pages; } ;
struct TYPE_4__ {int callback; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_3__ VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int *,int *,int ,int ,char*) ;
 int FUNC_2 (int *,char*,int *,int ) ;
 int VAR_4 ;
 TYPE_1__ VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_7)
{
 int VAR_8;

 FUNC_2(&VAR_1, "balloon_mutex", ((void*)0), VAR_0);

 VAR_3.current_pages = VAR_4;
 VAR_3.target_pages = VAR_3.current_pages;
 VAR_3.balloon_low = 0;
 VAR_3.balloon_high = 0;
 VAR_3.driver_pages = 0UL;
 VAR_3.hard_limit = ~0UL;

 FUNC_1(VAR_2, ((void*)0), ((void*)0), 0, 0, "balloon");

 VAR_5.callback = VAR_6;

 VAR_8 = FUNC_3(&VAR_5);
 if (VAR_8)
  FUNC_0(VAR_7,
      "xenballon: failed to set balloon watcher\n");

 return (VAR_8);
}
