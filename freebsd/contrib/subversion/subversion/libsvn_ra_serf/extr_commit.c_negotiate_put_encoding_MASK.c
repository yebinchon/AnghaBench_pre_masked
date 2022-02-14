
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ using_compression; scalar_t__ supports_svndiff2; scalar_t__ supports_svndiff1; } ;
typedef TYPE_1__ svn_ra_serf__session_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static void
FUNC_1(int *VAR_4,
                       int *VAR_5,
                       svn_ra_serf__session_t *VAR_6)
{
  int VAR_7;
  int VAR_8;

  if (VAR_6->using_compression == VAR_3)
    {
      if (VAR_6->supports_svndiff2 &&
          FUNC_0(VAR_6))
        VAR_7 = 2;
      else if (VAR_6->supports_svndiff1)
        VAR_7 = 1;
      else if (VAR_6->supports_svndiff2)
        VAR_7 = 2;
      else
        VAR_7 = 0;
    }
  else if (VAR_6->using_compression == VAR_2)
    {
      if (VAR_6->supports_svndiff1)
        VAR_7 = 1;
      else if (VAR_6->supports_svndiff2)
        VAR_7 = 2;
      else
        VAR_7 = 0;
    }
  else
    {
      VAR_7 = 0;
    }

  if (VAR_7 == 0)
    VAR_8 = VAR_1;
  else
    VAR_8 = VAR_0;

  *VAR_4 = VAR_7;
  *VAR_5 = VAR_8;
}
