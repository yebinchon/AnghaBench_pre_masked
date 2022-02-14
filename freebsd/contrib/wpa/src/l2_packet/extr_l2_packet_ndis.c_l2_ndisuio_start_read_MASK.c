
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int hEvent; } ;
struct l2_packet_data {TYPE_1__ rx_overlapped; int rx_written; int rx_buf; int rx_avail; } ;
typedef scalar_t__ DWORD ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 () ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int,int *,TYPE_1__*) ;
 int FUNC_2 () ;
 int FUNC_3 (struct l2_packet_data*) ;
 int FUNC_4 (TYPE_1__*,int ,int) ;
 int FUNC_5 (int ,char*,...) ;

__attribute__((used)) static int FUNC_6(struct l2_packet_data *VAR_2, int VAR_3)
{
 FUNC_4(&VAR_2->rx_overlapped, 0, sizeof(VAR_2->rx_overlapped));
 VAR_2->rx_overlapped.hEvent = VAR_2->rx_avail;
 if (!FUNC_1(FUNC_2(), VAR_2->rx_buf,
        sizeof(VAR_2->rx_buf), &VAR_2->rx_written, &VAR_2->rx_overlapped))
 {
  DWORD VAR_4 = FUNC_0();
  if (VAR_4 != VAR_0) {
   FUNC_5(VAR_1, "L2(NDISUIO): ReadFile failed: "
       "%d", (int) VAR_4);
   return -1;
  }




 } else {
  FUNC_5(VAR_1, "L2(NDISUIO): ReadFile returned data "
      "without wait for completion");
  if (!VAR_3)
   FUNC_3(VAR_2);
 }

 return 0;
}
