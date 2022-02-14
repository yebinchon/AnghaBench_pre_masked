
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ubifs_jhead {int dummy; } ;
struct ubifs_info {int jhead_cnt; TYPE_2__* jheads; } ;
struct TYPE_3__ {int jhead; int no_timer; int dtype; int * sync_callback; } ;
struct TYPE_4__ {TYPE_1__ wbuf; int buds_list; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_2__* FUNC_1 (int,int ) ;
 int FUNC_2 (struct ubifs_info*,TYPE_1__*) ;

__attribute__((used)) static int FUNC_3(struct ubifs_info *VAR_7)
{
 int VAR_8, VAR_9;

 VAR_7->jheads = FUNC_1(VAR_7->jhead_cnt * sizeof(struct ubifs_jhead),
      VAR_3);
 if (!VAR_7->jheads)
  return -VAR_1;


 for (VAR_8 = 0; VAR_8 < VAR_7->jhead_cnt; VAR_8++) {
  FUNC_0(&VAR_7->jheads[VAR_8].buds_list);
  VAR_9 = FUNC_2(VAR_7, &VAR_7->jheads[VAR_8].wbuf);
  if (VAR_9)
   return VAR_9;

  VAR_7->jheads[VAR_8].wbuf.sync_callback = &VAR_6;
  VAR_7->jheads[VAR_8].wbuf.jhead = VAR_8;
 }

 VAR_7->jheads[VAR_0].wbuf.dtype = VAR_5;




 VAR_7->jheads[VAR_2].wbuf.dtype = VAR_4;
 VAR_7->jheads[VAR_2].wbuf.no_timer = 1;

 return 0;
}
