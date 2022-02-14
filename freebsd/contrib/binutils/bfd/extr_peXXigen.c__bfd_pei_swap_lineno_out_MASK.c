
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int l_symndx; } ;
struct internal_lineno {int l_lnno; TYPE_1__ l_addr; } ;
struct TYPE_4__ {int l_symndx; } ;
struct external_lineno {TYPE_2__ l_addr; } ;
typedef int bfd ;


 int FUNC_0 (int *,int ,int ) ;
 unsigned int VAR_0 ;
 int FUNC_1 (int *,int ,struct external_lineno*) ;

unsigned int
FUNC_2 (bfd * VAR_1, void * VAR_2, void * VAR_3)
{
  struct internal_lineno *VAR_4 = (struct internal_lineno *) VAR_2;
  struct external_lineno *VAR_5 = (struct external_lineno *) VAR_3;
  FUNC_0 (VAR_1, VAR_4->l_addr.l_symndx, VAR_5->l_addr.l_symndx);

  FUNC_1 (VAR_1, VAR_4->l_lnno, VAR_5);
  return VAR_0;
}
