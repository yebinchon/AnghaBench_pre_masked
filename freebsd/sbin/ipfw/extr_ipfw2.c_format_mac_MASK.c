
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct buf_pr {int dummy; } ;


 int FUNC_0 (struct buf_pr*,char*,...) ;
 int FUNC_1 (int *,int) ;

__attribute__((used)) static void
FUNC_2(struct buf_pr *VAR_0, uint8_t *VAR_1, uint8_t *VAR_2)
{
 int VAR_3 = FUNC_1(VAR_2, 48);

 if (VAR_3 == 0)
  FUNC_0(VAR_0, " any");
 else {
  FUNC_0(VAR_0, " %02x:%02x:%02x:%02x:%02x:%02x",
      VAR_1[0], VAR_1[1], VAR_1[2], VAR_1[3], VAR_1[4], VAR_1[5]);
  if (VAR_3 == -1)
   FUNC_0(VAR_0, "&%02x:%02x:%02x:%02x:%02x:%02x",
       VAR_2[0], VAR_2[1], VAR_2[2],
       VAR_2[3], VAR_2[4], VAR_2[5]);
  else if (VAR_3 < 48)
   FUNC_0(VAR_0, "/%d", VAR_3);
 }
}
