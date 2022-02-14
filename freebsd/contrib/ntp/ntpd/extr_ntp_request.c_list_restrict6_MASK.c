
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct info_restrict {int v6_flag; void* mflags; void* rflags; int count; int mask6; int addr6; } ;
struct TYPE_7__ {int mask; int addr; } ;
struct TYPE_8__ {TYPE_1__ v6; } ;
struct TYPE_9__ {int mflags; int rflags; int count; TYPE_2__ u; struct TYPE_9__* link; } ;
typedef TYPE_3__ restrict_u ;
typedef int RestrictStackT ;


 int FUNC_0 (int **) ;
 int FUNC_1 (int ) ;
 void* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 () ;
 scalar_t__ FUNC_4 (int **,TYPE_3__ const**) ;
 int FUNC_5 (int **,TYPE_3__ const*) ;

__attribute__((used)) static void
FUNC_6(
 const restrict_u * VAR_0,
 struct info_restrict ** VAR_1
 )
{
 RestrictStackT * VAR_2;
 struct info_restrict * VAR_3;

 VAR_3 = *VAR_1;
 for (VAR_2 = ((void*)0); VAR_0; VAR_0 = VAR_0->link)
  if (!FUNC_5(&VAR_2, VAR_0))
   break;

 while (VAR_3 && FUNC_4(&VAR_2, &VAR_0)) {
  VAR_3->addr6 = VAR_0->u.v6.addr;
  VAR_3->mask6 = VAR_0->u.v6.mask;
  VAR_3->v6_flag = 1;
  VAR_3->count = FUNC_1(VAR_0->count);
  VAR_3->rflags = FUNC_2(VAR_0->rflags);
  VAR_3->mflags = FUNC_2(VAR_0->mflags);
  VAR_3 = (struct info_restrict *)FUNC_3();
 }
 FUNC_0(&VAR_2);
 *VAR_1 = VAR_3;
}
