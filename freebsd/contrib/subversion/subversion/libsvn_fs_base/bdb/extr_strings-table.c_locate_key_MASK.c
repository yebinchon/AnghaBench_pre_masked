
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_14__ {int db_txn; } ;
typedef TYPE_1__ trail_t ;
struct TYPE_15__ {TYPE_3__* fsap_data; } ;
typedef TYPE_2__ svn_fs_t ;
typedef int svn_error_t ;
struct TYPE_16__ {TYPE_9__* strings; } ;
typedef TYPE_3__ base_fs_data_t ;
typedef scalar_t__ apr_size_t ;
typedef int apr_pool_t ;
struct TYPE_18__ {int (* cursor ) (TYPE_9__*,int ,int **,int ) ;} ;
struct TYPE_17__ {int flags; scalar_t__ size; scalar_t__ data; scalar_t__ ulen; } ;
typedef TYPE_4__ DBT ;
typedef int DBC ;


 int * FUNC_0 (TYPE_2__*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*) ;
 int VAR_4 ;
 int FUNC_2 (int *) ;
 int VAR_5 ;
 int * VAR_6 ;
 int FUNC_3 (TYPE_9__*,int ,int **,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,TYPE_4__*,TYPE_4__*,int ) ;
 int * FUNC_6 (int ,int ,char*,char const*) ;
 int FUNC_7 (TYPE_4__*) ;
 int FUNC_8 (TYPE_1__*,char*,char*) ;

__attribute__((used)) static svn_error_t *
FUNC_9(apr_size_t *VAR_7,
           DBC **VAR_8,
           DBT *VAR_9,
           svn_fs_t *VAR_10,
           trail_t *VAR_11,
           apr_pool_t *VAR_12)
{
  base_fs_data_t *VAR_13 = VAR_10->fsap_data;
  int VAR_14;
  DBT VAR_15;

  FUNC_8(VAR_11, "strings", "cursor");
  FUNC_2(FUNC_0(VAR_10, FUNC_1("creating cursor for reading a string"),
                   VAR_13->strings->cursor(VAR_13->strings, VAR_11->db_txn,
                                        VAR_8, 0)));


  FUNC_7(&VAR_15);
  VAR_15.ulen = 0;
  VAR_15.flags |= VAR_1;


  VAR_14 = FUNC_5(*VAR_8, VAR_9, &VAR_15, VAR_3);





  if (VAR_14 == VAR_2)
    {
      FUNC_4(*VAR_8);
      return FUNC_6
        (VAR_5, 0,
         "No such string '%s'", (const char *)VAR_9->data);
    }
  if (VAR_14)
    {
      DBT VAR_16;

      if (VAR_14 != VAR_4)
        {
          FUNC_4(*VAR_8);
          return FUNC_0(VAR_10, FUNC_1("moving cursor"), VAR_14);
        }




      FUNC_7(&VAR_16);
      VAR_16.flags |= VAR_1 | VAR_0;
      VAR_14 = FUNC_5(*VAR_8, VAR_9, &VAR_16, VAR_3);
      if (VAR_14)
        {
          FUNC_4(*VAR_8);
          return FUNC_0(VAR_10, FUNC_1("rerunning cursor move"), VAR_14);
        }
    }


  *VAR_7 = (apr_size_t) VAR_15.size;

  return VAR_6;
}
