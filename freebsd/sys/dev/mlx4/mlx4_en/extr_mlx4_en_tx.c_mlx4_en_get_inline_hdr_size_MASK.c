
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct mlx4_en_tx_ring {int inline_thold; } ;
struct TYPE_2__ {int len; } ;
struct mbuf {TYPE_1__ m_pkthdr; int m_len; } ;


 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static u16
FUNC_2(struct mlx4_en_tx_ring *VAR_1, struct mbuf *VAR_2)
{
 u16 VAR_3;


 VAR_3 = FUNC_0(VAR_1->inline_thold, VAR_2->m_len);


 if (FUNC_1(VAR_3 < VAR_0))
  VAR_3 = FUNC_0(VAR_1->inline_thold, VAR_2->m_pkthdr.len);
 return (VAR_3);
}
