
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bwn_txgain_entry {int dummy; } ;
struct bwn_mac {int dummy; } ;


 int FUNC_0 (struct bwn_mac*,int,struct bwn_txgain_entry) ;

__attribute__((used)) static void
FUNC_1(struct bwn_mac *VAR_0, int VAR_1, int VAR_2,
    struct bwn_txgain_entry *VAR_3)
{
 int VAR_4;

 for (VAR_4 = VAR_1; VAR_4 < VAR_2; VAR_4++)
  FUNC_0(VAR_0, VAR_4, VAR_3[VAR_4]);
}
