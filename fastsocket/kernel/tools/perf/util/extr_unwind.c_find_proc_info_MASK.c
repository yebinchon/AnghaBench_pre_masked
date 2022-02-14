
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int unw_word_t ;
typedef int unw_proc_info_t ;
struct TYPE_7__ {int segbase; int table_data; int table_len; } ;
struct TYPE_8__ {TYPE_1__ rti; } ;
struct TYPE_9__ {int start_ip; TYPE_2__ u; int end_ip; int format; } ;
typedef TYPE_3__ unw_dyn_info_t ;
typedef int unw_addr_space_t ;
typedef int u64 ;
struct unwind_info {int machine; } ;
struct table_entry {int dummy; } ;
struct map {int start; int end; TYPE_4__* dso; } ;
typedef int di ;
struct TYPE_10__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,TYPE_3__*,int *,int,void*) ;
 struct map* FUNC_1 (int ,struct unwind_info*) ;
 int FUNC_2 (TYPE_3__*,int ,int) ;
 int FUNC_3 (char*,int ) ;
 scalar_t__ FUNC_4 (TYPE_4__*,int ,int*,int*,int*) ;

__attribute__((used)) static int
FUNC_5(unw_addr_space_t VAR_2, unw_word_t VAR_3, unw_proc_info_t *VAR_4,
        int VAR_5, void *VAR_6)
{
 struct unwind_info *VAR_7 = VAR_6;
 struct map *VAR_8;
 unw_dyn_info_t VAR_9;
 u64 VAR_10, VAR_11, VAR_12;

 VAR_8 = FUNC_1(VAR_3, VAR_7);
 if (!VAR_8 || !VAR_8->dso)
  return -VAR_0;

 FUNC_3("unwind: find_proc_info dso %s\n", VAR_8->dso->name);

 if (FUNC_4(VAR_8->dso, VAR_7->machine,
        &VAR_10, &VAR_11, &VAR_12))
  return -VAR_0;

 FUNC_2(&VAR_9, 0, sizeof(VAR_9));
 VAR_9.format = VAR_1;
 VAR_9.start_ip = VAR_8->start;
 VAR_9.end_ip = VAR_8->end;
 VAR_9.u.rti.segbase = VAR_8->start + VAR_11;
 VAR_9.u.rti.table_data = VAR_8->start + VAR_10;
 VAR_9.u.rti.table_len = VAR_12 * sizeof(struct table_entry)
         / sizeof(unw_word_t);
 return FUNC_0(VAR_2, VAR_3, &VAR_9, VAR_4,
      VAR_5, VAR_6);
}
