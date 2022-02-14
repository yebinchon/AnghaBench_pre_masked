
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef union descriptor {int dummy; } descriptor ;
struct proc_ldt {int ldt_len; int ldt_refcnt; scalar_t__ ldt_base; int ldt_sd; scalar_t__ ldt_active; } ;
struct mdproc {struct proc_ldt* md_ldt; } ;
struct TYPE_3__ {unsigned int ssd_base; int ssd_limit; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int VAR_5 ;
 int FUNC_1 (scalar_t__,scalar_t__,int) ;
 int VAR_6 ;
 TYPE_1__* VAR_7 ;
 scalar_t__ VAR_8 ;
 struct proc_ldt* FUNC_2 (int,int ,int) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int,int) ;
 int FUNC_7 (TYPE_1__*,int *) ;

struct proc_ldt *
FUNC_8(struct mdproc *VAR_9, int VAR_10)
{
 struct proc_ldt *VAR_11, *VAR_12;

 FUNC_3(&VAR_6, VAR_1);
 FUNC_5(&VAR_6);
 VAR_12 = FUNC_2(sizeof(struct proc_ldt), VAR_2, VAR_3);

 VAR_12->ldt_len = VAR_10 = FUNC_0(VAR_10);
 VAR_12->ldt_base = FUNC_6(VAR_10 * sizeof(union descriptor),
     VAR_3 | VAR_4);
 VAR_12->ldt_refcnt = 1;
 VAR_12->ldt_active = 0;

 FUNC_4(&VAR_6);
 VAR_7[VAR_0].ssd_base = (unsigned)VAR_12->ldt_base;
 VAR_7[VAR_0].ssd_limit = VAR_10 * sizeof(union descriptor) - 1;
 FUNC_7(&VAR_7[VAR_0], &VAR_12->ldt_sd);

 if ((VAR_11 = VAR_9->md_ldt) != ((void*)0)) {
  if (VAR_10 > VAR_11->ldt_len)
   VAR_10 = VAR_11->ldt_len;
  FUNC_1(VAR_11->ldt_base, VAR_12->ldt_base,
      VAR_10 * sizeof(union descriptor));
 } else
  FUNC_1(VAR_8, VAR_12->ldt_base, sizeof(union descriptor) * VAR_5);

 return (VAR_12);
}
