
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int u_int32_t ;
typedef scalar_t__ svn_boolean_t ;
struct TYPE_6__ {int (* put ) (TYPE_1__*,int ,int ,int ,int ) ;int (* open ) (int ,char*,int ,int ,int const,int) ;} ;
typedef int DB_ENV ;
typedef int DBT ;
typedef TYPE_1__ DB ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* VAR_3 ;
 int FUNC_1 (TYPE_1__*,int *) ;
 int FUNC_2 (TYPE_1__**,int *,int ) ;
 int FUNC_3 (int ,char*,int ,int ,int const,int) ;
 int FUNC_4 (TYPE_1__*,int ,int ,int ,int ) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 () ;

int
FUNC_7(DB **VAR_4,
                              DB_ENV *VAR_5,
                              svn_boolean_t VAR_6)
{
  const u_int32_t VAR_7 = (VAR_6 ? (VAR_1 | VAR_2) : 0);
  DB *VAR_8;

  FUNC_0(FUNC_6());
  FUNC_0(FUNC_2(&VAR_8, VAR_5, 0));
  FUNC_0((VAR_8->open)(FUNC_1(VAR_8, ((void*)0)),
                         "copies", 0, VAR_0,
                         VAR_7, 0666));


  if (VAR_6)
  {
    DBT VAR_9, VAR_10;
    FUNC_0(VAR_8->put(VAR_8, 0,
                        FUNC_5(&VAR_9, VAR_3),
                        FUNC_5(&VAR_10, "0"), 0));
  }

  *VAR_4 = VAR_8;
  return 0;
}
