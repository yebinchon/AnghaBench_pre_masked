
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ssh {int dummy; } ;
struct TYPE_3__ {void* ypixel; void* xpixel; void* col; void* row; int ptyfd; } ;
typedef TYPE_1__ Session ;


 int FUNC_0 () ;
 void* FUNC_1 () ;
 int FUNC_2 (int ,void*,void*,void*,void*) ;

__attribute__((used)) static int
FUNC_3(struct ssh *VAR_0, Session *VAR_1)
{
 VAR_1->col = FUNC_1();
 VAR_1->row = FUNC_1();
 VAR_1->xpixel = FUNC_1();
 VAR_1->ypixel = FUNC_1();
 FUNC_0();
 FUNC_2(VAR_1->ptyfd, VAR_1->row, VAR_1->col, VAR_1->xpixel, VAR_1->ypixel);
 return 1;
}
