
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct idle_chk_data {int buf_size_set; int buf_size; } ;
struct ecore_ptt {int dummy; } ;
struct dbg_tools_data {struct idle_chk_data idle_chk; } ;
struct ecore_hwfn {struct dbg_tools_data dbg_info; } ;
typedef enum dbg_status { ____Placeholder_dbg_status } dbg_status ;
struct TYPE_2__ {int ptr; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct ecore_hwfn*,struct ecore_ptt*) ;
 int FUNC_1 (struct ecore_hwfn*,struct ecore_ptt*,int ,int) ;
 TYPE_1__* VAR_7 ;

enum dbg_status FUNC_2(struct ecore_hwfn *VAR_8,
              struct ecore_ptt *VAR_9,
              u32 *VAR_10)
{
 struct dbg_tools_data *VAR_11 = &VAR_8->dbg_info;
 struct idle_chk_data *VAR_12 = &VAR_11->idle_chk;
 enum dbg_status VAR_13;

 *VAR_10 = 0;

 VAR_13 = FUNC_0(VAR_8, VAR_9);
 if (VAR_13 != VAR_5)
  return VAR_13;

 if (!VAR_7[VAR_3].ptr || !VAR_7[VAR_1].ptr ||
  !VAR_7[VAR_0].ptr || !VAR_7[VAR_2].ptr)
  return VAR_4;

 if (!VAR_12->buf_size_set) {
  VAR_12->buf_size = FUNC_1(VAR_8, VAR_9, VAR_6, 0);
  VAR_12->buf_size_set = 1;
 }

 *VAR_10 = VAR_12->buf_size;

 return VAR_5;
}
