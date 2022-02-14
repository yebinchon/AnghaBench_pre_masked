
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int opts; int max_configure; } ;
struct TYPE_5__ {scalar_t__ proto; } ;
struct sppp {TYPE_2__ lcp; int * rst_counter; TYPE_1__ myauth; } ;
struct TYPE_7__ {int (* scr ) (struct sppp*) ;} ;


 size_t VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 TYPE_3__ VAR_4 ;
 int FUNC_0 (TYPE_3__*,struct sppp*,int ) ;
 int FUNC_1 (struct sppp*) ;

__attribute__((used)) static void
FUNC_2(struct sppp *VAR_5)
{
 if (VAR_5->myauth.proto == VAR_2 &&
     (VAR_5->lcp.opts & (1 << VAR_1)) != 0) {

  VAR_4.scr(VAR_5);
  VAR_5->rst_counter[VAR_0] = VAR_5->lcp.max_configure;
  FUNC_0(&VAR_4, VAR_5, VAR_3);
 }

}
