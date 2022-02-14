
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int u_int32_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int recno ;
typedef int buffer ;
typedef int apr_uuid_t ;
struct TYPE_13__ {int (* set_re_len ) (TYPE_2__*,int ) ;int (* open ) (int ,char*,int ,int ,int const,int) ;int (* close ) (TYPE_2__*,int ) ;int (* put ) (TYPE_2__*,int ,TYPE_1__*,TYPE_1__*,int ) ;} ;
struct TYPE_12__ {int* data; int size; int ulen; int flags; } ;
typedef int DB_ENV ;
typedef TYPE_1__ DBT ;
typedef TYPE_2__ DB ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (TYPE_2__*,int *) ;
 scalar_t__ VAR_7 ;
 int FUNC_2 (char*,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_2__**,int *,int ) ;
 int FUNC_5 (TYPE_2__*,int ) ;
 int FUNC_6 (int ,char*,int ,int ,int const,int) ;
 int FUNC_7 (TYPE_2__*,int ) ;
 int FUNC_8 (TYPE_2__*,int ,TYPE_1__*,TYPE_1__*,int ) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 () ;

int
FUNC_11(DB **VAR_8,
                             DB_ENV *VAR_9,
                             svn_boolean_t VAR_10)
{
  const u_int32_t VAR_11 = (VAR_10 ? (VAR_2 | VAR_4) : 0);
  DB *VAR_12;
  int VAR_13;

  FUNC_0(FUNC_10());
  FUNC_0(FUNC_4(&VAR_12, VAR_9, 0));
  FUNC_0(VAR_12->set_re_len(VAR_12, VAR_0));

  VAR_13 = (VAR_12->open)(FUNC_1(VAR_12, ((void*)0)),
                        "uuids", 0, VAR_5,
                        VAR_11, 0666);



  if (VAR_13 == VAR_6 && (! VAR_10))
    {
      FUNC_0(VAR_12->close(VAR_12, 0));
      return FUNC_11(VAR_8, VAR_9, VAR_7);
    }

  FUNC_0(VAR_13);

  if (VAR_10)
    {
      char VAR_14[VAR_0 + 1];
      DBT VAR_15, VAR_16;
      apr_uuid_t VAR_17;
      int VAR_18 = 0;

      FUNC_9(&VAR_15);
      VAR_15.data = &VAR_18;
      VAR_15.size = sizeof(VAR_18);
      VAR_15.ulen = VAR_15.size;
      VAR_15.flags |= VAR_3;

      FUNC_9(&VAR_16);
      VAR_16.data = VAR_14;
      VAR_16.size = sizeof(VAR_14) - 1;

      FUNC_3(&VAR_17);
      FUNC_2(VAR_14, &VAR_17);

      FUNC_0(VAR_12->put(VAR_12, 0, &VAR_15, &VAR_16, VAR_1));
    }

  *VAR_8 = VAR_12;
  return 0;
}
