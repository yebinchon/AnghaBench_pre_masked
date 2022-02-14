
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_int ;
typedef int bool_t ;
struct TYPE_5__ {int x_op; scalar_t__ x_private; } ;
typedef TYPE_1__ XDR ;
struct TYPE_6__ {char* out_finger; char* out_boundry; char* in_finger; int fbtbc; char* in_boundry; char* in_base; scalar_t__ frag_header; } ;
typedef TYPE_2__ RECSTREAM ;


 int VAR_0 ;
 int VAR_1 ;



 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static bool_t
FUNC_1(XDR *VAR_2, u_int VAR_3)
{
 RECSTREAM *VAR_4 = (RECSTREAM *)VAR_2->x_private;
 u_int VAR_5 = FUNC_0(VAR_2);
 int VAR_6 = VAR_5 - VAR_3;
 char *VAR_7;

 if ((int)VAR_5 != -1)
  switch (VAR_2->x_op) {

  case 129:
   VAR_7 = VAR_4->out_finger - VAR_6;
   if ((VAR_7 > (char *)(void *)(VAR_4->frag_header)) &&
    (VAR_7 < VAR_4->out_boundry)) {
    VAR_4->out_finger = VAR_7;
    return (VAR_1);
   }
   break;

  case 130:
   VAR_7 = VAR_4->in_finger - VAR_6;
   if ((VAR_6 < (int)(VAR_4->fbtbc)) &&
    (VAR_7 <= VAR_4->in_boundry) &&
    (VAR_7 >= VAR_4->in_base)) {
    VAR_4->in_finger = VAR_7;
    VAR_4->fbtbc -= VAR_6;
    return (VAR_1);
   }
   break;

  case 128:
   break;
  }
 return (VAR_0);
}
