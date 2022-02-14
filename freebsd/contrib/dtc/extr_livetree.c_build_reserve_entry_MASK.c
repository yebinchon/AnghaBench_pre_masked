
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* uint64_t ;
struct TYPE_2__ {void* size; void* address; } ;
struct reserve_info {TYPE_1__ re; } ;


 int FUNC_0 (struct reserve_info*,int ,int) ;
 struct reserve_info* FUNC_1 (int) ;

struct reserve_info *FUNC_2(uint64_t VAR_0, uint64_t VAR_1)
{
 struct reserve_info *VAR_2 = FUNC_1(sizeof(*VAR_2));

 FUNC_0(VAR_2, 0, sizeof(*VAR_2));

 VAR_2->re.address = VAR_0;
 VAR_2->re.size = VAR_1;

 return VAR_2;
}
