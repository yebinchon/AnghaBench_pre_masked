
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned long lastuse; scalar_t__ expires; int __refcnt; } ;
struct TYPE_4__ {TYPE_1__ dst; } ;
struct rtable {TYPE_2__ u; } ;


 scalar_t__ FUNC_0 (int *) ;
 unsigned long VAR_0 ;
 int FUNC_1 (struct rtable*) ;
 scalar_t__ FUNC_2 (struct rtable*) ;
 scalar_t__ FUNC_3 (unsigned long,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct rtable *VAR_1, unsigned long VAR_2, unsigned long VAR_3)
{
 unsigned long VAR_4;
 int VAR_5 = 0;

 if (FUNC_0(&VAR_1->u.dst.__refcnt))
  goto out;

 VAR_5 = 1;
 if (VAR_1->u.dst.expires &&
     FUNC_3(VAR_0, VAR_1->u.dst.expires))
  goto out;

 VAR_4 = VAR_0 - VAR_1->u.dst.lastuse;
 VAR_5 = 0;
 if ((VAR_4 <= VAR_2 && !FUNC_1(VAR_1)) ||
     (VAR_4 <= VAR_3 && FUNC_2(VAR_1)))
  goto out;
 VAR_5 = 1;
out: return VAR_5;
}
