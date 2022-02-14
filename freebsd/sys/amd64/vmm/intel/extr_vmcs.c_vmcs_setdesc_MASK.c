
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct vmcs {int dummy; } ;
struct seg_desc {int access; int limit; int base; } ;


 int FUNC_0 (struct vmcs*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct vmcs*) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (int,scalar_t__*,scalar_t__*,scalar_t__*) ;
 int FUNC_4 (scalar_t__,int ) ;

int
FUNC_5(struct vmcs *VAR_1, int VAR_2, int VAR_3, struct seg_desc *VAR_4)
{
 int VAR_5;
 uint32_t VAR_6, VAR_7, VAR_8;

 VAR_5 = FUNC_3(VAR_3, &VAR_6, &VAR_7, &VAR_8);
 if (VAR_5 != 0)
  FUNC_2("vmcs_setdesc: invalid segment register %d", VAR_3);

 if (!VAR_2)
  FUNC_1(VAR_1);
 if ((VAR_5 = FUNC_4(VAR_6, VAR_4->base)) != 0)
  goto done;

 if ((VAR_5 = FUNC_4(VAR_7, VAR_4->limit)) != 0)
  goto done;

 if (VAR_8 != VAR_0) {
  if ((VAR_5 = FUNC_4(VAR_8, VAR_4->access)) != 0)
   goto done;
 }
done:
 if (!VAR_2)
  FUNC_0(VAR_1);
 return (VAR_5);
}
