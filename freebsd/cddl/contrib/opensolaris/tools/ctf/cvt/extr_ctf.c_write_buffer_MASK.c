
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ctf_header_t ;
struct TYPE_5__ {int str_size; } ;
struct TYPE_4__ {TYPE_3__ ctb_strtab; int * ctb_base; int * ctb_ptr; } ;
typedef TYPE_1__ ctf_buf_t ;
typedef size_t caddr_t ;


 int FUNC_0 (int *,int,size_t*) ;
 int FUNC_1 (TYPE_3__*,int (*) (int *,int,size_t*),size_t*) ;
 size_t FUNC_2 (int) ;

__attribute__((used)) static caddr_t
FUNC_3(ctf_header_t *VAR_0, ctf_buf_t *VAR_1, size_t *VAR_2)
{
 caddr_t VAR_3;
 caddr_t VAR_4;

 VAR_3 = FUNC_2(sizeof (ctf_header_t) + (VAR_1->ctb_ptr - VAR_1->ctb_base)
     + VAR_1->ctb_strtab.str_size);

 VAR_4 = VAR_3;
 (void) FUNC_0(VAR_0, sizeof (ctf_header_t), &VAR_4);
 (void) FUNC_0(VAR_1->ctb_base, VAR_1->ctb_ptr - VAR_1->ctb_base,
     &VAR_4);
 (void) FUNC_1(&VAR_1->ctb_strtab, FUNC_0, &VAR_4);
 *VAR_2 = VAR_4 - VAR_3;
 return (VAR_3);
}
