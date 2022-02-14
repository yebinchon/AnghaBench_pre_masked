
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int list; int word; int number; int * string; } ;
struct TYPE_11__ {int kind; TYPE_3__ u; } ;
typedef TYPE_4__ svn_ra_svn_item_t ;
struct TYPE_8__ {int len; int data; } ;
struct TYPE_9__ {int list; TYPE_1__ word; int number; int string; } ;
struct TYPE_12__ {int kind; TYPE_2__ u; } ;
typedef TYPE_5__ svn_ra_svn__item_t ;
typedef int apr_pool_t ;






 int FUNC_0 (int ) ;
 int * FUNC_1 (int ,int *) ;

void
FUNC_2(svn_ra_svn__item_t *VAR_0,
                            const svn_ra_svn_item_t *VAR_1,
                            apr_pool_t *VAR_2)
{
  VAR_0->kind = VAR_1->kind;
  switch (VAR_1->kind)
    {
      case 129:
        VAR_0->u.string = *VAR_1->u.string;
        break;
      case 130:
        VAR_0->u.number = VAR_1->u.number;
        break;
      case 128:
        VAR_0->u.word.data = VAR_1->u.word;
        VAR_0->u.word.len = FUNC_0(VAR_1->u.word);
        break;
      case 131:
        VAR_0->u.list = *FUNC_1(VAR_1->u.list,
                                                       VAR_2);
        break;
    }
}
