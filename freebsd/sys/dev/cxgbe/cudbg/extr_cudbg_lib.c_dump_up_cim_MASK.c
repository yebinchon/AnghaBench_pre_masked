
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ireg_field {int ireg_offset_range; scalar_t__ ireg_local_offset; } ;
struct cudbg_init {int (* print ) (char*) ;scalar_t__ verbose; } ;
struct adapter {int dummy; } ;


 int FUNC_0 (struct adapter*,scalar_t__,int*) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int FUNC_2(struct adapter *VAR_0, struct cudbg_init *VAR_1,
         struct ireg_field *VAR_2, u32 *VAR_3)
{
 u32 VAR_4;
 int VAR_5 = 0;

 for (VAR_4 = 0; VAR_4 < VAR_2->ireg_offset_range; VAR_4++) {
  VAR_5 = FUNC_0(VAR_0,
     VAR_2->ireg_local_offset + (VAR_4 * 4),
    VAR_3);
  if (VAR_5) {
   if (VAR_1->verbose)
    VAR_1->print("BUSY timeout reading"
      "CIM_HOST_ACC_CTRL\n");
   goto err;
  }

  VAR_3++;
 }

err:
 return VAR_5;
}
