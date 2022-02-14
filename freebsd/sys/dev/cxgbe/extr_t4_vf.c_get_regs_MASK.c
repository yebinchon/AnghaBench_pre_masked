
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct t4_regdump {int version; int len; } ;
struct adapter {int dummy; } ;


 int FUNC_0 (struct adapter*) ;
 int FUNC_1 (struct adapter*,int *,int ) ;

__attribute__((used)) static void
FUNC_2(struct adapter *VAR_0, struct t4_regdump *VAR_1, uint8_t *VAR_2)
{


 VAR_1->version = FUNC_0(VAR_0) | (0x3f << 10);
 FUNC_1(VAR_0, VAR_2, VAR_1->len);
}
