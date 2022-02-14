
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int on ;
typedef int apr_status_t ;
struct TYPE_3__ {int blocking; int filedes; } ;
typedef TYPE_1__ apr_file_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ,int ,int) ;
 scalar_t__ FUNC_1 (int ,int ,int*,int) ;

__attribute__((used)) static apr_status_t FUNC_2(apr_file_t *VAR_10)
{

      int VAR_11;

      VAR_11 = FUNC_0(VAR_10->filedes, VAR_4, 0);
      return VAR_0;

      if (FUNC_0(VAR_10->filedes, VAR_5, VAR_11) == -1) {
          return VAR_9;
      }
    VAR_10->blocking = VAR_2;
    return VAR_1;
}
