
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_5__ {scalar_t__ store; int init_done; } ;
typedef TYPE_1__ br_ssl_session_cache_lru ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__,int ) ;
 scalar_t__ FUNC_1 (TYPE_1__*,unsigned char*,int *) ;
 int FUNC_2 (TYPE_1__*,unsigned char const*,unsigned char*) ;

void FUNC_3(
 br_ssl_session_cache_lru *VAR_3, const unsigned char *VAR_4)
{
 unsigned char VAR_5[VAR_1];
 uint32_t VAR_6;





 if (!VAR_3->init_done) {
  return;
 }
 FUNC_2(VAR_3, VAR_4, VAR_5);
 VAR_6 = FUNC_1(VAR_3, VAR_5, ((void*)0));
 if (VAR_6 != VAR_0) {
  FUNC_0(VAR_3->store + VAR_6 + VAR_2, 0);
 }
}
