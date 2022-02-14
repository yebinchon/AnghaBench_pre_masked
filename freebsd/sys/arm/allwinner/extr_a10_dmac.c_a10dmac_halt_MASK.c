
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct a10dmac_channel {scalar_t__ ch_type; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct a10dmac_channel*) ;
 int FUNC_1 (struct a10dmac_channel*,int ) ;

__attribute__((used)) static void
FUNC_2(device_t VAR_3, void *VAR_4)
{
 struct a10dmac_channel *VAR_5 = VAR_4;
 uint32_t VAR_6;

 VAR_6 = FUNC_0(VAR_5);
 if (VAR_5->ch_type == VAR_2) {
  VAR_6 &= ~VAR_1;
 } else {
  VAR_6 &= ~VAR_0;
 }
 FUNC_1(VAR_5, VAR_6);
}
