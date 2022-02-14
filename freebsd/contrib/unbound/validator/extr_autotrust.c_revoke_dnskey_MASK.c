
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct autr_ta {int dname_len; int rr_len; int rr; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 scalar_t__ FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int *,int) ;

__attribute__((used)) static void
FUNC_5(struct autr_ta* VAR_2, int VAR_3)
{
 uint16_t VAR_4;
 uint8_t* VAR_5;
 if(FUNC_3(VAR_2->rr, VAR_2->rr_len, VAR_2->dname_len) !=
  VAR_1)
  return;
 if(FUNC_2(VAR_2->rr, VAR_2->rr_len, VAR_2->dname_len) < 2)
  return;
 VAR_5 = FUNC_1(VAR_2->rr, VAR_2->rr_len, VAR_2->dname_len);
 VAR_4 = FUNC_0(VAR_5);
 if (VAR_3 && (VAR_4&VAR_0))
  VAR_4 ^= VAR_0;
 else
  VAR_4 |= VAR_0;
 FUNC_4(VAR_5, VAR_4);
}
