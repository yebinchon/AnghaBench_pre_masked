
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ apr_status_t ;
typedef int abts_suite ;


 int * FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,scalar_t__,int ,int ) ;
 int FUNC_2 (int *,int ,int *) ;
 scalar_t__ FUNC_3 () ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

abts_suite *FUNC_4(abts_suite * VAR_10)
{
    apr_status_t VAR_11;
    VAR_10 = FUNC_0(VAR_10);



    VAR_11 = FUNC_3();
    if (VAR_11 == VAR_0) {
      FUNC_2(VAR_10, VAR_4, ((void*)0));
      FUNC_2(VAR_10, VAR_9, ((void*)0));
      FUNC_2(VAR_10, VAR_6, ((void*)0));
      FUNC_2(VAR_10, VAR_8, ((void*)0));
      FUNC_2(VAR_10, VAR_7, ((void*)0));
      FUNC_2(VAR_10, VAR_3, ((void*)0));
      FUNC_2(VAR_10, VAR_5, ((void*)0));
    }
    else {
        FUNC_1("Error %d occurred attempting to reach memcached "
                         "on %s:%d.  Skipping apr_memcache tests...",
                         VAR_11, VAR_1, VAR_2);
    }

    return VAR_10;
}
