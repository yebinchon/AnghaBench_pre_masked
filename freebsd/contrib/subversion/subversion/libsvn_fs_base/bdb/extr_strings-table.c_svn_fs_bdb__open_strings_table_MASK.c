
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int u_int32_t ;
typedef scalar_t__ svn_boolean_t ;
struct TYPE_7__ {int (* put ) (TYPE_1__*,int ,int ,int ,int ) ;int (* open ) (int ,char*,int ,int ,int const,int) ;int (* set_flags ) (TYPE_1__*,int ) ;} ;
typedef int DB_ENV ;
typedef int DBT ;
typedef TYPE_1__ DB ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* VAR_4 ;
 int FUNC_1 (TYPE_1__*,int *) ;
 int FUNC_2 (TYPE_1__**,int *,int ) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (int ,char*,int ,int ,int const,int) ;
 int FUNC_5 (TYPE_1__*,int ,int ,int ,int ) ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 () ;

int
FUNC_8(DB **VAR_5,
                               DB_ENV *VAR_6,
                               svn_boolean_t VAR_7)
{
  const u_int32_t VAR_8 = (VAR_7 ? (VAR_1 | VAR_3) : 0);
  DB *VAR_9;

  FUNC_0(FUNC_7());
  FUNC_0(FUNC_2(&VAR_9, VAR_6, 0));



  FUNC_0(VAR_9->set_flags(VAR_9, VAR_2));

  FUNC_0((VAR_9->open)(FUNC_1(VAR_9, ((void*)0)),
                          "strings", 0, VAR_0,
                          VAR_8, 0666));

  if (VAR_7)
    {
      DBT VAR_10, VAR_11;


      FUNC_0(VAR_9->put
              (VAR_9, 0,
               FUNC_6(&VAR_10, VAR_4),
               FUNC_6(&VAR_11, "0"), 0));
    }

  *VAR_5 = VAR_9;
  return 0;
}
