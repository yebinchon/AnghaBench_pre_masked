
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int l_symndx; } ;
struct internal_lineno {int l_lnno; TYPE_1__ l_addr; } ;
typedef int bfd ;
struct TYPE_6__ {int l_symndx; } ;
struct TYPE_7__ {TYPE_2__ l_addr; } ;
typedef TYPE_3__ LINENO ;


 int FUNC_0 (int *,TYPE_3__*) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static void
FUNC_2 (bfd * VAR_0, void * VAR_1, void * VAR_2)
{
  LINENO *VAR_3 = (LINENO *) VAR_1;
  struct internal_lineno *VAR_4 = (struct internal_lineno *) VAR_2;

  VAR_4->l_addr.l_symndx = FUNC_1 (VAR_0, VAR_3->l_addr.l_symndx);
  VAR_4->l_lnno = FUNC_0 (VAR_0, VAR_3);
}
