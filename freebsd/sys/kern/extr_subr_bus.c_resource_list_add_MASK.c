
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource_list_entry {int type; int rid; void* count; void* end; void* start; int * res; scalar_t__ flags; } ;
struct resource_list {int dummy; } ;
typedef void* rman_res_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct resource_list*,struct resource_list_entry*,int ) ;
 int VAR_2 ;
 struct resource_list_entry* FUNC_1 (int,int ,int ) ;
 int FUNC_2 (char*) ;
 struct resource_list_entry* FUNC_3 (struct resource_list*,int,int) ;

struct resource_list_entry *
FUNC_4(struct resource_list *VAR_3, int VAR_4, int VAR_5,
    rman_res_t VAR_6, rman_res_t VAR_7, rman_res_t VAR_8)
{
 struct resource_list_entry *VAR_9;

 VAR_9 = FUNC_3(VAR_3, VAR_4, VAR_5);
 if (!VAR_9) {
  VAR_9 = FUNC_1(sizeof(struct resource_list_entry), VAR_0,
      VAR_1);
  if (!VAR_9)
   FUNC_2("resource_list_add: can't record entry");
  FUNC_0(VAR_3, VAR_9, VAR_2);
  VAR_9->type = VAR_4;
  VAR_9->rid = VAR_5;
  VAR_9->res = ((void*)0);
  VAR_9->flags = 0;
 }

 if (VAR_9->res)
  FUNC_2("resource_list_add: resource entry is busy");

 VAR_9->start = VAR_6;
 VAR_9->end = VAR_7;
 VAR_9->count = VAR_8;
 return (VAR_9);
}
