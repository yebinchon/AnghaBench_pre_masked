
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct fdc_data {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct fdc_data*,scalar_t__,int) ;

__attribute__((used)) static void
FUNC_1(struct fdc_data *VAR_1, int VAR_2, uint16_t VAR_3)
{
 FUNC_0(VAR_1, VAR_0, (VAR_3 - 1) & 0xff);
 FUNC_0(VAR_1, VAR_0 + 1,
     (VAR_2 ? 0x80 : 0) | (((VAR_3 - 1) >> 8) & 0x7f));
}
