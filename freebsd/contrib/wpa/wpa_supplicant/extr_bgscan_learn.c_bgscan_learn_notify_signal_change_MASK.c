
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct os_reltime {scalar_t__ sec; } ;
struct TYPE_2__ {scalar_t__ sec; } ;
struct bgscan_learn_data {scalar_t__ short_interval; scalar_t__ long_interval; scalar_t__ signal_threshold; scalar_t__ scan_interval; TYPE_1__ last_bgscan; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct bgscan_learn_data*,int *) ;
 int FUNC_1 (scalar_t__,int ,int ,struct bgscan_learn_data*,int *) ;
 int FUNC_2 (struct os_reltime*) ;
 int FUNC_3 (int ,char*,...) ;

__attribute__((used)) static void FUNC_4(void *VAR_2, int VAR_3,
           int VAR_4,
           int VAR_5,
           int VAR_6)
{
 struct bgscan_learn_data *VAR_7 = VAR_2;
 int VAR_8 = 0;
 struct os_reltime VAR_9;

 if (VAR_7->short_interval == VAR_7->long_interval ||
     VAR_7->signal_threshold == 0)
  return;

 FUNC_3(VAR_0, "bgscan learn: signal level changed "
     "(above=%d current_signal=%d current_noise=%d "
     "current_txrate=%d)", VAR_3, VAR_4,
     VAR_5, VAR_6);
 if (VAR_7->scan_interval == VAR_7->long_interval && !VAR_3) {
  FUNC_3(VAR_0, "bgscan learn: Start using short bgscan "
      "interval");
  VAR_7->scan_interval = VAR_7->short_interval;
  FUNC_2(&VAR_9);
  if (VAR_9.sec > VAR_7->last_bgscan.sec + 1)
   VAR_8 = 1;
 } else if (VAR_7->scan_interval == VAR_7->short_interval && VAR_3) {
  FUNC_3(VAR_0, "bgscan learn: Start using long bgscan "
      "interval");
  VAR_7->scan_interval = VAR_7->long_interval;
  FUNC_0(VAR_1, VAR_7, ((void*)0));
  FUNC_1(VAR_7->scan_interval, 0,
           VAR_1, VAR_7, ((void*)0));
 } else if (!VAR_3) {




  FUNC_2(&VAR_9);
  if (VAR_9.sec > VAR_7->last_bgscan.sec + 10)
   VAR_8 = 1;
 }

 if (VAR_8) {
  FUNC_3(VAR_0, "bgscan learn: Trigger immediate scan");
  FUNC_0(VAR_1, VAR_7, ((void*)0));
  FUNC_1(0, 0, VAR_1, VAR_7, ((void*)0));
 }
}
