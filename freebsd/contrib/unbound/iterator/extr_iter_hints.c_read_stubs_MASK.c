
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* uint8_t ;
struct iter_hints {int dummy; } ;
struct delegpt {void* ssl_upstream; int no_cache; void* has_parent_side_NS; } ;
struct config_stub {int isprime; scalar_t__ ssl_upstream; int no_cache; int isfirst; struct config_stub* next; } ;
struct config_file {struct config_stub* stubs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct delegpt*) ;
 int FUNC_1 (int ,struct delegpt*) ;
 int FUNC_2 (struct iter_hints*,int ,struct delegpt*,int) ;
 int FUNC_3 (struct config_stub*,struct delegpt*) ;
 int FUNC_4 (struct config_stub*,struct delegpt*) ;
 struct delegpt* FUNC_5 (struct config_stub*) ;

__attribute__((used)) static int
FUNC_6(struct iter_hints* VAR_2, struct config_file* VAR_3)
{
 struct config_stub* VAR_4;
 struct delegpt* VAR_5;
 for(VAR_4 = VAR_3->stubs; VAR_4; VAR_4 = VAR_4->next) {
  if(!(VAR_5=FUNC_5(VAR_4)))
   return 0;
  if(!FUNC_4(VAR_4, VAR_5) || !FUNC_3(VAR_4, VAR_5)) {
   FUNC_0(VAR_5);
   return 0;
  }



  VAR_5->has_parent_side_NS = (uint8_t)!VAR_4->isfirst;

  VAR_5->no_cache = VAR_4->no_cache;

  VAR_5->ssl_upstream = (uint8_t)VAR_4->ssl_upstream;
  FUNC_1(VAR_1, VAR_5);
  if(!FUNC_2(VAR_2, VAR_0, VAR_5, !VAR_4->isprime))
   return 0;
 }
 return 1;
}
