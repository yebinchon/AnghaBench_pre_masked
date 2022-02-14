
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_char ;
struct parse {scalar_t__ nargs; TYPE_1__* argval; } ;
struct TYPE_2__ {scalar_t__ uval; } ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*,scalar_t__,...) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_1(
 struct parse *VAR_4,
 FILE *VAR_5
 )
{
 if (VAR_4->nargs == 0) {
  (void) FUNC_0(*VAR_5,
          "NTP version being claimed is %d\n", VAR_2);
 } else {
  if (VAR_4->argval[0].uval < VAR_0
      || VAR_4->argval[0].uval > VAR_1) {
   (void) FUNC_0(VAR_3, "versions %d to %d, please\n",
           VAR_0, VAR_1);
  } else {
   VAR_2 = (u_char) VAR_4->argval[0].uval;
  }
 }
}
