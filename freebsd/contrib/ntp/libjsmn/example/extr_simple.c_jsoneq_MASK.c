
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ type; int end; int start; } ;
typedef TYPE_1__ jsmntok_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (char const*,char const*,int) ;

__attribute__((used)) static int FUNC_2(const char *VAR_1, jsmntok_t *VAR_2, const char *VAR_3) {
 if (VAR_2->type == VAR_0 && (int) FUNC_0(VAR_3) == VAR_2->end - VAR_2->start &&
   FUNC_1(VAR_1 + VAR_2->start, VAR_3, VAR_2->end - VAR_2->start) == 0) {
  return 0;
 }
 return -1;
}
