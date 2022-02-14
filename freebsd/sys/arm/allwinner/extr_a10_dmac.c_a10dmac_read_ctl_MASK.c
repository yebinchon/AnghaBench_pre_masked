
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct a10dmac_channel {scalar_t__ ch_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct a10dmac_channel*,int ) ;

__attribute__((used)) static uint32_t
FUNC_1(struct a10dmac_channel *VAR_3)
{
 if (VAR_3->ch_type == VAR_2) {
  return (FUNC_0(VAR_3, VAR_1));
 } else {
  return (FUNC_0(VAR_3, VAR_0));
 }
}
