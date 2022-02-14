
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ using_compression; } ;
typedef TYPE_1__ svn_ra_serf__session_t ;
typedef int serf_bucket_t ;


 int FUNC_0 (int *,char*,char*) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

void
FUNC_2(serf_bucket_t *VAR_2,
                                           svn_ra_serf__session_t *VAR_3)
{
  if (VAR_3->using_compression == VAR_0)
    {


      FUNC_0(
        VAR_2, "Accept-Encoding", "svndiff");
    }
  else if (VAR_3->using_compression == VAR_1 &&
           FUNC_1(VAR_3))
    {




      FUNC_0(
        VAR_2, "Accept-Encoding",
        "gzip,svndiff2;q=0.9,svndiff1;q=0.8,svndiff;q=0.7");
    }
  else
    {





      FUNC_0(
        VAR_2, "Accept-Encoding",
        "gzip,svndiff1;q=0.9,svndiff2;q=0.8,svndiff;q=0.7");
    }
}
