
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip {int dummy; } ;
struct cas_rx_comp {void* crc_word4; void* crc_word3; scalar_t__ crc_word2; scalar_t__ crc_word1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,int ) ;
 scalar_t__ VAR_2 ;
 void* FUNC_1 (int ) ;

__attribute__((used)) static inline void
FUNC_2(struct cas_rx_comp *VAR_3)
{

 VAR_3->crc_word1 = 0;
 VAR_3->crc_word2 = 0;
 VAR_3->crc_word3 =
     FUNC_1(FUNC_0(VAR_2 + sizeof(struct ip), VAR_0));
 VAR_3->crc_word4 = FUNC_1(VAR_1);
}
