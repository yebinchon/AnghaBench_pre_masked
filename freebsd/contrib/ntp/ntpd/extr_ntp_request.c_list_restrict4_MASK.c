
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct info_restrict {void* mflags; void* rflags; void* count; void* mask; scalar_t__ v6_flag; void* addr; } ;
struct TYPE_7__ {int mask; int addr; } ;
struct TYPE_8__ {TYPE_1__ v4; } ;
struct TYPE_9__ {int mflags; int rflags; int count; TYPE_2__ u; struct TYPE_9__* link; } ;
typedef TYPE_3__ restrict_u ;
typedef int RestrictStackT ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int **) ;
 void* FUNC_1 (int ) ;
 void* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 () ;
 scalar_t__ FUNC_4 (int **,TYPE_3__ const**) ;
 int FUNC_5 (int **,TYPE_3__ const*) ;

__attribute__((used)) static void
FUNC_6(
 const restrict_u * VAR_1,
 struct info_restrict ** VAR_2
 )
{
 RestrictStackT * VAR_3;
 struct info_restrict * VAR_4;

 VAR_4 = *VAR_2;
 for (VAR_3 = ((void*)0); VAR_1; VAR_1 = VAR_1->link)
  if (!FUNC_5(&VAR_3, VAR_1))
   break;

 while (VAR_4 && FUNC_4(&VAR_3, &VAR_1)) {
  VAR_4->addr = FUNC_1(VAR_1->u.v4.addr);
  if (VAR_0)
   VAR_4->v6_flag = 0;
  VAR_4->mask = FUNC_1(VAR_1->u.v4.mask);
  VAR_4->count = FUNC_1(VAR_1->count);
  VAR_4->rflags = FUNC_2(VAR_1->rflags);
  VAR_4->mflags = FUNC_2(VAR_1->mflags);
  VAR_4 = (struct info_restrict *)FUNC_3();
 }
 FUNC_0(&VAR_3);
 *VAR_2 = VAR_4;
}
