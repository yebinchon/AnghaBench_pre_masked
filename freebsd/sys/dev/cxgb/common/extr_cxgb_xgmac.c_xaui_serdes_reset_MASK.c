
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct cmac {scalar_t__ offset; TYPE_3__* adapter; } ;
struct TYPE_7__ {unsigned int const* xauicfg; } ;
struct TYPE_8__ {TYPE_1__ vpd; } ;
struct TYPE_9__ {TYPE_2__ params; } ;
typedef TYPE_3__ adapter_t ;


 int FUNC_0 (unsigned int const*) ;
 scalar_t__ VAR_0 ;
 size_t FUNC_1 (struct cmac*) ;
 int FUNC_2 (TYPE_3__*,scalar_t__) ;
 int FUNC_3 (TYPE_3__*,scalar_t__,unsigned int const,int ) ;
 int FUNC_4 (TYPE_3__*,scalar_t__,unsigned int const) ;
 int FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(struct cmac *VAR_1)
{
 static const unsigned int VAR_2[] = {
  137 | 136, 129, 133 | 132,
       135 | 134, 128, 131 | 130
 };

 int VAR_3;
 adapter_t *VAR_4 = VAR_1->adapter;
 u32 VAR_5 = VAR_0 + VAR_1->offset;

 FUNC_4(VAR_4, VAR_5, VAR_4->params.vpd.xauicfg[FUNC_1(VAR_1)] |
       130 | 131 | 132 | 133 |
       134 | 135 | 136 | 137 |
       128 | 129);
 (void)FUNC_2(VAR_4, VAR_5);
 FUNC_5(15);

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_2); VAR_3++) {
  FUNC_3(VAR_4, VAR_5, VAR_2[VAR_3], 0);
  FUNC_5(15);
 }
}
