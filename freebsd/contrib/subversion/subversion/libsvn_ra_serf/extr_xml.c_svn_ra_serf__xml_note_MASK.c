
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int state; int state_pool; int * attrs; struct TYPE_4__* prev; } ;
typedef TYPE_1__ svn_ra_serf__xml_estate_t ;


 int FUNC_0 (int ) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int ,char const*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *,int ,int ) ;

void
FUNC_5(svn_ra_serf__xml_estate_t *VAR_0,
                      int VAR_1,
                      const char *VAR_2,
                      const char *VAR_3)
{
  svn_ra_serf__xml_estate_t *VAR_4;

  for (VAR_4 = VAR_0; VAR_4 != ((void*)0) && VAR_4->state != VAR_1; VAR_4 = VAR_4->prev)
               ;

  FUNC_0(VAR_4 != ((void*)0));


  FUNC_3(VAR_4);


  if (VAR_4->attrs == ((void*)0))
    VAR_4->attrs = FUNC_1(VAR_4->state_pool);




  FUNC_4(VAR_4->attrs,
                FUNC_2(VAR_4->state_pool, VAR_2),
                FUNC_2(VAR_4->state_pool, VAR_3));
}
