
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int le_idx; int le_name; } ;
typedef TYPE_1__ labelent_t ;
typedef int ctl ;
struct TYPE_7__ {int ctl_typeidx; int ctl_label; } ;
typedef TYPE_2__ ctf_lblent_t ;
struct TYPE_8__ {int ctb_strtab; } ;
typedef TYPE_3__ ctf_buf_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_3__*,TYPE_2__*,int) ;
 int FUNC_2 (int *,int ) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static int
FUNC_3(void *VAR_1, void *VAR_2)
{
 labelent_t *VAR_3 = VAR_1;
 ctf_buf_t *VAR_4 = VAR_2;
 ctf_lblent_t VAR_5;

 VAR_5.ctl_label = FUNC_2(&VAR_4->ctb_strtab, VAR_3->le_name);
 VAR_5.ctl_typeidx = VAR_3->le_idx;

 if (VAR_0) {
  FUNC_0(VAR_5.ctl_label);
  FUNC_0(VAR_5.ctl_typeidx);
 }

 FUNC_1(VAR_4, &VAR_5, sizeof (VAR_5));

 return (1);
}
