
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ unw_word_t ;
typedef int u8 ;
struct unwind_info {int machine; int thread; } ;
struct addr_location {TYPE_1__* map; } ;
typedef int ssize_t ;
struct TYPE_2__ {int dso; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,TYPE_1__*,int ,scalar_t__,int *,int) ;
 int FUNC_1 (char*,unsigned long) ;
 int FUNC_2 (int ,int ,int ,int ,scalar_t__,struct addr_location*) ;

__attribute__((used)) static int FUNC_3(struct unwind_info *VAR_2, unw_word_t VAR_3,
     unw_word_t *VAR_4)
{
 struct addr_location VAR_5;
 ssize_t VAR_6;

 FUNC_2(VAR_2->thread, VAR_2->machine, VAR_1,
         VAR_0, VAR_3, &VAR_5);
 if (!VAR_5.map) {
  FUNC_1("unwind: no map for %lx\n", (unsigned long)VAR_3);
  return -1;
 }

 if (!VAR_5.map->dso)
  return -1;

 VAR_6 = FUNC_0(VAR_5.map->dso, VAR_5.map, VAR_2->machine,
       VAR_3, (u8 *) VAR_4, sizeof(*VAR_4));

 return !(VAR_6 == sizeof(*VAR_4));
}
