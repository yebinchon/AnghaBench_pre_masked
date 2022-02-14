
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {unsigned char* st; } ;
typedef TYPE_1__ br_eax_state ;
struct TYPE_7__ {TYPE_3__** bctx; } ;
typedef TYPE_2__ br_eax_context ;
struct TYPE_8__ {int (* mac ) (TYPE_3__**,unsigned char,unsigned char*,int) ;} ;


 int FUNC_0 (unsigned char*,int ,int) ;
 int FUNC_1 (TYPE_3__**,unsigned char,unsigned char*,int) ;

void
FUNC_2(const br_eax_context *VAR_0, br_eax_state *VAR_1)
{





 int VAR_2;

 FUNC_0(VAR_1->st, 0, sizeof VAR_1->st);
 for (VAR_2 = 0; VAR_2 < 3; VAR_2 ++) {
  unsigned char VAR_3[16];

  FUNC_0(VAR_3, 0, sizeof VAR_3);
  VAR_3[15] = (unsigned char)VAR_2;
  (*VAR_0->bctx)->mac(VAR_0->bctx, VAR_1->st[VAR_2], VAR_3, sizeof VAR_3);
 }
}
