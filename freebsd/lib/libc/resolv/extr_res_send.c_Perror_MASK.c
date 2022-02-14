
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* res_state ;
struct TYPE_3__ {unsigned int options; } ;
typedef int FILE ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,char const*,char*) ;
 char* FUNC_1 (int) ;

__attribute__((used)) static void
FUNC_2(const res_state VAR_2, FILE *VAR_3, const char *VAR_4, int VAR_5) {
 int VAR_6 = VAR_1;

 if ((VAR_2->options & VAR_0) != 0U)
  FUNC_0(VAR_3, "res_send: %s: %s\n",
   VAR_4, FUNC_1(VAR_5));
 VAR_1 = VAR_6;
}
