
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int u_int32_t ;
typedef scalar_t__ svn_boolean_t ;
struct TYPE_7__ {int (* open ) (int ,char*,int ,int ,int const,int) ;int (* close ) (TYPE_1__*,int ) ;int (* put ) (TYPE_1__*,int ,int ,int ,int ) ;} ;
typedef int DB_ENV ;
typedef int DBT ;
typedef TYPE_1__ DB ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* VAR_4 ;
 int FUNC_1 (TYPE_1__*,int *) ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (TYPE_1__**,int *,int ) ;
 int FUNC_3 (int ,char*,int ,int ,int const,int) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (TYPE_1__*,int ,int ,int ,int ) ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 () ;

int FUNC_8(DB **VAR_6,
                                         DB_ENV *VAR_7,
                                         svn_boolean_t VAR_8)
{
  const u_int32_t VAR_9 = (VAR_8 ? (VAR_1 | VAR_2) : 0);
  DB *VAR_10;
  int VAR_11;

  FUNC_0(FUNC_7());
  FUNC_0(FUNC_2(&VAR_10, VAR_7, 0));
  VAR_11 = (VAR_10->open)(FUNC_1(VAR_10, ((void*)0)),
                                "checksum-reps", 0, VAR_0,
                                VAR_9, 0666);


  if (VAR_11 == VAR_3 && (! VAR_8))
    {
      FUNC_0(VAR_10->close(VAR_10, 0));
      return FUNC_8(VAR_6, VAR_7, VAR_5);
    }


  if (VAR_8)
    {
      DBT VAR_12, VAR_13;
      FUNC_0(VAR_10->put(VAR_10, 0,
                                 FUNC_6(&VAR_12, VAR_4),
                                 FUNC_6(&VAR_13, "0"), 0));
    }

  FUNC_0(VAR_11);

  *VAR_6 = VAR_10;
  return 0;
}
