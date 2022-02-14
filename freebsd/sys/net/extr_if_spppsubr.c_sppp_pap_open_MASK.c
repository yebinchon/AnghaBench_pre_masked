
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int opts; int timeout; int max_configure; } ;
struct TYPE_6__ {scalar_t__ proto; } ;
struct TYPE_7__ {scalar_t__ proto; } ;
struct sppp {TYPE_3__ lcp; int pap_my_to_ch; TYPE_1__ myauth; int * rst_counter; TYPE_2__ hisauth; } ;
struct TYPE_9__ {int (* scr ) (struct sppp*) ;} ;


 size_t VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ,int ,void*) ;
 TYPE_4__ VAR_4 ;
 int FUNC_1 (TYPE_4__*,struct sppp*,int ) ;
 int VAR_5 ;
 int FUNC_2 (struct sppp*) ;

__attribute__((used)) static void
FUNC_3(struct sppp *VAR_6)
{
 if (VAR_6->hisauth.proto == VAR_2 &&
     (VAR_6->lcp.opts & (1 << VAR_1)) != 0) {

  VAR_6->rst_counter[VAR_0] = VAR_6->lcp.max_configure;
  FUNC_1(&VAR_4, VAR_6, VAR_3);
 }
 if (VAR_6->myauth.proto == VAR_2) {

  VAR_4.scr(VAR_6);
  FUNC_0(&VAR_6->pap_my_to_ch, VAR_6->lcp.timeout,
         VAR_5, (void *)VAR_6);
 }
}
