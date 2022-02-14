
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef union ccb {int dummy; } ccb ;
typedef size_t uint32_t ;
struct TYPE_6__ {size_t tag; int status; int dvp; } ;
typedef TYPE_1__ rcb_t ;
struct TYPE_7__ {int taglist; TYPE_1__* rcb; } ;
typedef TYPE_2__ pqisrc_softstate_t ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_1 (int *) ;
 int FUNC_2 (int *,size_t) ;
 int FUNC_3 (TYPE_2__*,int ,TYPE_1__*,int ,int ) ;

__attribute__((used)) static int
FUNC_4(pqisrc_softstate_t *VAR_2, union ccb *VAR_3)
{
 rcb_t *VAR_4 = ((void*)0);
 uint32_t VAR_5 = 0;
 int VAR_6 = VAR_0;

 FUNC_0("IN\n");

 VAR_5 = FUNC_1(&VAR_2->taglist);
 VAR_4 = &VAR_2->rcb[VAR_5];
 VAR_4->tag = VAR_5;

 VAR_6 = FUNC_3(VAR_2, VAR_4->dvp, VAR_4, 0,
   VAR_1);

 if (VAR_6 == VAR_0) {
  VAR_6 = VAR_4->status;
 }

 FUNC_2(&VAR_2->taglist,VAR_4->tag);

 FUNC_0("OUT rval = %d\n", VAR_6);

 return VAR_6;
}
