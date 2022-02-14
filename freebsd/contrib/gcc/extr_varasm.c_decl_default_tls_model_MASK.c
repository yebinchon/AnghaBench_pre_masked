
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int tree ;
typedef enum tls_model { ____Placeholder_tls_model } tls_model ;
struct TYPE_2__ {int (* binds_local_p ) (int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int ) ;
 TYPE_1__ VAR_7 ;

enum tls_model
FUNC_1 (tree VAR_8)
{
  enum tls_model VAR_9;
  bool VAR_10;

  VAR_10 = VAR_7.binds_local_p (VAR_8);
  if (!VAR_4)
    {
      if (VAR_10)
 VAR_9 = VAR_3;
      else
 VAR_9 = VAR_1;
    }



  else if (VAR_6 && VAR_10)
    VAR_9 = VAR_2;
  else
    VAR_9 = VAR_0;
  if (VAR_9 < VAR_5)
    VAR_9 = VAR_5;

  return VAR_9;
}
