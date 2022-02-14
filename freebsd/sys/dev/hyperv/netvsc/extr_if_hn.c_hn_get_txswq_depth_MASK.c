
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hn_tx_ring {scalar_t__ hn_txdesc_cnt; } ;


 int FUNC_0 (int,char*) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static int
FUNC_1(const struct hn_tx_ring *VAR_1)
{

 FUNC_0(VAR_1->hn_txdesc_cnt > 0, ("tx ring is not setup yet"));
 if (VAR_0 < VAR_1->hn_txdesc_cnt)
  return VAR_1->hn_txdesc_cnt;
 return VAR_0;
}
