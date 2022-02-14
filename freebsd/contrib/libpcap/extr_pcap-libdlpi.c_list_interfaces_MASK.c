
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* lw_list; int lw_err; } ;
typedef TYPE_1__ linkwalk_t ;
struct TYPE_5__ {struct TYPE_5__* lnl_next; int linkname; } ;
typedef TYPE_2__ linknamelist_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__* FUNC_0 (int,int) ;
 int FUNC_1 (int ,char const*,int ) ;

__attribute__((used)) static boolean_t
FUNC_2(const char *VAR_4, void *VAR_5)
{
 linkwalk_t *VAR_6 = VAR_5;
 linknamelist_t *VAR_7;

 if ((VAR_7 = FUNC_0(1, sizeof(linknamelist_t))) == ((void*)0)) {
  VAR_6->lw_err = VAR_3;
  return (VAR_1);
 }
 (void) FUNC_1(VAR_7->linkname, VAR_4, VAR_2);

 if (VAR_6->lw_list == ((void*)0)) {
  VAR_6->lw_list = VAR_7;
 } else {
  VAR_7->lnl_next = VAR_6->lw_list;
  VAR_6->lw_list = VAR_7;
 }

 return (VAR_0);
}
