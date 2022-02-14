
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ apr_size_t ;
struct TYPE_6__ {int flags; scalar_t__ size; scalar_t__ ulen; } ;
typedef TYPE_1__ DBT ;
typedef int DBC ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,TYPE_1__*,TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_3(apr_size_t *VAR_4, DBC *VAR_5, DBT *VAR_6)
{
  DBT VAR_7;
  int VAR_8;


  FUNC_2(&VAR_7);
  VAR_7.ulen = 0;
  VAR_7.flags |= VAR_1;



  VAR_8 = FUNC_1(VAR_5, VAR_6, &VAR_7, VAR_2);


  if (VAR_8)
    {
      DBT VAR_9;

      if (VAR_8 != VAR_3)
        {
          FUNC_0(VAR_5);
          return VAR_8;
        }




      FUNC_2(&VAR_9);
      VAR_9.flags |= VAR_1 | VAR_0;
      VAR_8 = FUNC_1(VAR_5, VAR_6, &VAR_9, VAR_2);
      if (VAR_8)
        FUNC_0(VAR_5);
    }


  *VAR_4 = (apr_size_t) VAR_7.size;
  return VAR_8;
}
