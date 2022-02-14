
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct swsusp_info {scalar_t__ pages; } ;
struct swap_map_handle {int dummy; } ;
struct snapshot_handle {int dummy; } ;
struct TYPE_2__ {unsigned int flags; int image; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct snapshot_handle) ;
 int FUNC_3 (struct swap_map_handle*,int ) ;
 int FUNC_4 (struct swap_map_handle*,struct snapshot_handle*,scalar_t__) ;
 int FUNC_5 (struct snapshot_handle*,int ,int) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (struct swap_map_handle*) ;
 int VAR_2 ;
 int FUNC_8 (struct snapshot_handle*,int) ;
 int FUNC_9 (struct swap_map_handle*,struct swsusp_info*,int *) ;
 TYPE_1__* VAR_3 ;

int FUNC_10(unsigned int *VAR_4)
{
 int VAR_5;
 struct swap_map_handle VAR_6;
 struct snapshot_handle VAR_7;
 struct swsusp_info *VAR_8;

 *VAR_4 = VAR_3->flags;
 if (FUNC_0(VAR_2)) {
  FUNC_6("PM: Image device not initialised\n");
  return FUNC_1(VAR_2);
 }

 FUNC_5(&VAR_7, 0, sizeof(struct snapshot_handle));
 VAR_5 = FUNC_8(&VAR_7, VAR_1);
 if (VAR_5 < VAR_1)
  return VAR_5 < 0 ? VAR_5 : -VAR_0;
 VAR_8 = (struct swsusp_info *)FUNC_2(VAR_7);
 VAR_5 = FUNC_3(&VAR_6, VAR_3->image);
 if (!VAR_5)
  VAR_5 = FUNC_9(&VAR_6, VAR_8, ((void*)0));
 if (!VAR_5)
  VAR_5 = FUNC_4(&VAR_6, &VAR_7, VAR_8->pages - 1);
 FUNC_7(&VAR_6);

 if (!VAR_5)
  FUNC_6("PM: Image successfully loaded\n");
 else
  FUNC_6("PM: Error %d resuming\n", VAR_5);
 return VAR_5;
}
