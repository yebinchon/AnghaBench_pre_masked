
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct raparms {struct raparms* p_next; } ;
struct TYPE_4__ {int ra_size; } ;
struct TYPE_3__ {struct raparms* pb_head; int pb_lock; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,...) ;
 struct raparms* FUNC_2 (int,int ) ;
 int FUNC_3 () ;
 TYPE_2__ VAR_3 ;
 TYPE_1__* VAR_4 ;
 int FUNC_4 (int *) ;

int
FUNC_5(int VAR_5)
{
 int VAR_6;
 int VAR_7 = 0;
 int VAR_8;
 struct raparms **VAR_9 = ((void*)0);


 if (VAR_4[0].pb_head)
  return 0;
 VAR_8 = FUNC_0(VAR_5, VAR_2);
 if (VAR_8 < 2)
  VAR_8 = 2;
 VAR_5 = VAR_8 * VAR_2;

 FUNC_1("nfsd: allocating %d readahead buffers.\n", VAR_5);

 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
  FUNC_4(&VAR_4[VAR_6].pb_lock);

  VAR_9 = &VAR_4[VAR_6].pb_head;
  for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++) {
   *VAR_9 = FUNC_2(sizeof(struct raparms), VAR_1);
   if (!*VAR_9)
    goto out_nomem;
   VAR_9 = &(*VAR_9)->p_next;
  }
  *VAR_9 = ((void*)0);
 }

 VAR_3.ra_size = VAR_5;
 return 0;

out_nomem:
 FUNC_1("nfsd: kmalloc failed, freeing readahead buffers\n");
 FUNC_3();
 return -VAR_0;
}
