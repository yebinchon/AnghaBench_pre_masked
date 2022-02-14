
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct lock_object {TYPE_1__* lo_witness; int lo_name; } ;
struct lock_instance {int li_flags; int li_line; int li_file; struct lock_object* li_lock; } ;
struct TYPE_4__ {int lc_name; } ;
struct TYPE_3__ {int w_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_0 (struct lock_object*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(struct lock_instance *VAR_2,
    int (*VAR_3)(const char *VAR_4, ...))
{
 struct lock_object *VAR_5;

 VAR_5 = VAR_2->li_lock;
 VAR_3("%s %s %s", (VAR_2->li_flags & VAR_0) != 0 ?
     "exclusive" : "shared", FUNC_0(VAR_5)->lc_name, VAR_5->lo_name);
 if (VAR_5->lo_witness->w_name != VAR_5->lo_name)
  VAR_3(" (%s)", VAR_5->lo_witness->w_name);
 VAR_3(" r = %d (%p) locked @ %s:%d\n",
     VAR_2->li_flags & VAR_1, VAR_5,
     FUNC_1(VAR_2->li_file), VAR_2->li_line);
}
