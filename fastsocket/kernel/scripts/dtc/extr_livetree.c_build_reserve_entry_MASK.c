
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* uint64_t ;
struct TYPE_2__ {void* size; void* address; } ;
struct reserve_info {char* label; int * next; TYPE_1__ re; } ;


 struct reserve_info* FUNC_0 (int) ;

struct reserve_info *FUNC_1(uint64_t VAR_0, uint64_t VAR_1,
      char *VAR_2)
{
 struct reserve_info *VAR_3 = FUNC_0(sizeof(*VAR_3));

 VAR_3->re.address = VAR_0;
 VAR_3->re.size = VAR_1;

 VAR_3->next = ((void*)0);

 VAR_3->label = VAR_2;

 return VAR_3;
}
