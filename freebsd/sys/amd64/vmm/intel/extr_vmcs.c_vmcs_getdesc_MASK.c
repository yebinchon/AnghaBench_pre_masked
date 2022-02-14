
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* uint64_t ;
typedef scalar_t__ uint32_t ;
struct vmcs {int dummy; } ;
struct seg_desc {void* access; void* limit; void* base; } ;


 int FUNC_0 (struct vmcs*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct vmcs*) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (int,scalar_t__*,scalar_t__*,scalar_t__*) ;
 int FUNC_4 (scalar_t__,void**) ;

int
FUNC_5(struct vmcs *VAR_1, int VAR_2, int VAR_3, struct seg_desc *VAR_4)
{
 int VAR_5;
 uint32_t VAR_6, VAR_7, VAR_8;
 uint64_t VAR_9;

 VAR_5 = FUNC_3(VAR_3, &VAR_6, &VAR_7, &VAR_8);
 if (VAR_5 != 0)
  FUNC_2("vmcs_getdesc: invalid segment register %d", VAR_3);

 if (!VAR_2)
  FUNC_1(VAR_1);
 if ((VAR_5 = FUNC_4(VAR_6, &VAR_9)) != 0)
  goto done;
 VAR_4->base = VAR_9;

 if ((VAR_5 = FUNC_4(VAR_7, &VAR_9)) != 0)
  goto done;
 VAR_4->limit = VAR_9;

 if (VAR_8 != VAR_0) {
  if ((VAR_5 = FUNC_4(VAR_8, &VAR_9)) != 0)
   goto done;
  VAR_4->access = VAR_9;
 }
done:
 if (!VAR_2)
  FUNC_0(VAR_1);
 return (VAR_5);
}
