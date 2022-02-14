
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int ctb_strtab; } ;
typedef TYPE_1__ ctf_buf_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 TYPE_1__* FUNC_2 (int) ;

__attribute__((used)) static ctf_buf_t *
FUNC_3(void)
{
 ctf_buf_t *VAR_0 = FUNC_2(sizeof (ctf_buf_t));

 FUNC_1(&VAR_0->ctb_strtab);
 FUNC_0(VAR_0);

 return (VAR_0);
}
