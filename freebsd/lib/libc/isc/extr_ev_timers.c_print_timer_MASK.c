
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int tv_nsec; scalar_t__ tv_sec; } ;
struct TYPE_4__ {int tv_nsec; scalar_t__ tv_sec; } ;
struct TYPE_6__ {TYPE_2__ inter; TYPE_1__ due; int uap; int func; } ;
typedef TYPE_3__ evTimer ;
typedef int evContext_p ;


 int FUNC_0 (int *,int,char*,int ,int ,long,int ,long,int ) ;

__attribute__((used)) static void
FUNC_1(void *VAR_0, void *VAR_1) {
 evTimer *VAR_2 = VAR_0;
 evContext_p *VAR_3 = VAR_1;

 VAR_2 = VAR_0;
 FUNC_0(VAR_3, 7,
     "  func %p, uap %p, due %ld.%09ld, inter %ld.%09ld\n",
   VAR_2->func, VAR_2->uap,
   (long)VAR_2->due.tv_sec, VAR_2->due.tv_nsec,
   (long)VAR_2->inter.tv_sec, VAR_2->inter.tv_nsec);
}
