
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int svn_string_t ;
struct TYPE_6__ {TYPE_4__* next; int len; int data; TYPE_1__* children; } ;
typedef TYPE_2__ svn_skel_t ;
typedef int svn_error_t ;
typedef int svn_cancel_func_t ;
typedef int apr_pool_t ;
struct TYPE_7__ {struct TYPE_7__* next; } ;
struct TYPE_5__ {TYPE_2__* next; } ;


 char* FUNC_0 (int *,int ,int ) ;
 int * FUNC_1 (TYPE_4__*,int *) ;
 int FUNC_2 (int const**,char const*,int const*,int const*,int const*,int const*,int ,void*,int *,int *) ;
 int * FUNC_3 (int ) ;

__attribute__((used)) static svn_error_t *
FUNC_4(const svn_string_t **VAR_0,
                        const svn_skel_t *VAR_1,
                        svn_cancel_func_t VAR_2,
                        void *VAR_3,
                        apr_pool_t *VAR_4,
                        apr_pool_t *VAR_5)
{
  const svn_string_t *VAR_6;
  const svn_string_t *VAR_7;
  const svn_string_t *VAR_8;
  const svn_string_t *VAR_9;
  const char *VAR_10;


  VAR_1 = VAR_1->children->next;



  VAR_10 = FUNC_0(VAR_5, VAR_1->data, VAR_1->len);
  VAR_6 = FUNC_1(VAR_1->next, VAR_5);
  VAR_7 = FUNC_1(VAR_1->next->next, VAR_5);
  VAR_8 = FUNC_1(VAR_1->next->next->next, VAR_5);
  VAR_9 = FUNC_1(VAR_1->next->next->next->next, VAR_5);

  return FUNC_3(FUNC_2(VAR_0,
                                           VAR_10,
                                           VAR_6, VAR_7,
                                           VAR_8, VAR_9,
                                           VAR_2, VAR_3,
                                           VAR_4, VAR_5));
}
