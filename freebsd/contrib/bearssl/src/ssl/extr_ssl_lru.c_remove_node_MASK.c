
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_10__ {scalar_t__ store; } ;
typedef TYPE_1__ br_ssl_session_cache_lru ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_1__*,scalar_t__,scalar_t__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*,scalar_t__,scalar_t__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*,scalar_t__) ;
 scalar_t__ FUNC_3 (TYPE_1__*,scalar_t__) ;
 int FUNC_4 (TYPE_1__*,scalar_t__,scalar_t__) ;
 int FUNC_5 (TYPE_1__*,scalar_t__,scalar_t__) ;
 int FUNC_6 (TYPE_1__*,scalar_t__,scalar_t__) ;

__attribute__((used)) static void
FUNC_7(br_ssl_session_cache_lru *VAR_2, uint32_t VAR_3)
{
 uint32_t VAR_4, VAR_5, VAR_6;
 FUNC_0(VAR_2, VAR_2->store + VAR_3 + VAR_1, &VAR_4);






 VAR_5 = FUNC_1(VAR_2, VAR_3, &VAR_6);

 if (VAR_5 != VAR_0) {
  uint32_t VAR_7;





  VAR_7 = FUNC_2(VAR_2, VAR_5);
  if (VAR_7 == VAR_0) {
   VAR_7 = FUNC_3(VAR_2, VAR_5);
  }
  FUNC_5(VAR_2, VAR_6, VAR_7);





  FUNC_5(VAR_2, VAR_4, VAR_5);







  FUNC_4(VAR_2, VAR_5, FUNC_2(VAR_2, VAR_3));
  FUNC_6(VAR_2, VAR_5, FUNC_3(VAR_2, VAR_3));
 } else {



  FUNC_5(VAR_2, VAR_4, VAR_0);
 }
}
