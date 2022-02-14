
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u_long ;
typedef size_t u_int ;
typedef int bool_t ;
struct TYPE_5__ {scalar_t__ x_private; } ;
typedef TYPE_1__ XDR ;
struct TYPE_6__ {scalar_t__ out_boundry; scalar_t__ out_finger; int frag_sent; } ;
typedef TYPE_2__ RECSTREAM ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (scalar_t__,char const*,size_t) ;

__attribute__((used)) static bool_t
FUNC_2(XDR *VAR_2, const char *VAR_3, u_int VAR_4)
{
 RECSTREAM *VAR_5 = (RECSTREAM *)(VAR_2->x_private);
 size_t VAR_6;

 while (VAR_4 > 0) {
  VAR_6 = (size_t)((u_long)VAR_5->out_boundry -
      (u_long)VAR_5->out_finger);
  VAR_6 = (VAR_4 < VAR_6) ? VAR_4 : VAR_6;
  FUNC_1(VAR_5->out_finger, VAR_3, VAR_6);
  VAR_5->out_finger += VAR_6;
  VAR_3 += VAR_6;
  VAR_4 -= VAR_6;
  if (VAR_5->out_finger == VAR_5->out_boundry) {
   VAR_5->frag_sent = VAR_1;
   if (! FUNC_0(VAR_5, VAR_0))
    return (VAR_0);
  }
 }
 return (VAR_1);
}
