
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_int32_t ;
typedef scalar_t__ svn_boolean_t ;
struct TYPE_5__ {int (* open ) (int ,char*,int ,int ,int const,int) ;} ;
typedef int DB_ENV ;
typedef TYPE_1__ DB ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*,int *) ;
 int FUNC_2 (TYPE_1__**,int *,int ) ;
 int FUNC_3 (int ,char*,int ,int ,int const,int) ;
 int FUNC_4 () ;

int FUNC_5(DB **VAR_3,
                                     DB_ENV *VAR_4,
                                     svn_boolean_t VAR_5)
{
  const u_int32_t VAR_6 = (VAR_5 ? (VAR_0 | VAR_1) : 0);
  DB *VAR_7;

  FUNC_0(FUNC_4());
  FUNC_0(FUNC_2(&VAR_7, VAR_4, 0));
  FUNC_0((VAR_7->open)(FUNC_1(VAR_7, ((void*)0)),
                            "revisions", 0, VAR_2,
                            VAR_6, 0666));

  *VAR_3 = VAR_7;
  return 0;
}
