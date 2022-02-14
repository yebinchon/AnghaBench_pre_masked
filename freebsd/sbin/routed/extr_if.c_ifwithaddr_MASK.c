
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct interface {scalar_t__ int_addr; int int_state; scalar_t__ int_brdaddr; struct interface* int_bhash; struct interface* int_ahash; } ;
typedef scalar_t__ naddr ;


 struct interface** FUNC_0 (scalar_t__) ;
 struct interface** FUNC_1 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

struct interface *
FUNC_2(naddr VAR_3,
    int VAR_4,
    int VAR_5)
{
 struct interface *VAR_6, *VAR_7 = ((void*)0);

 VAR_5 = (VAR_5 == 0) ? VAR_2 : 0;

 for (VAR_6 = *FUNC_0(VAR_3); VAR_6; VAR_6 = VAR_6->int_ahash) {
  if (VAR_6->int_addr != VAR_3)
   continue;
  if ((VAR_6->int_state & VAR_5) != 0)
   continue;
  if ((VAR_6->int_state & (VAR_0 | VAR_1)) == 0)
   return VAR_6;
  VAR_7 = VAR_6;
 }

 if (VAR_7 || !VAR_4)
  return VAR_7;

 for (VAR_6 = *FUNC_1(VAR_3); VAR_6; VAR_6 = VAR_6->int_bhash) {
  if (VAR_6->int_brdaddr != VAR_3)
   continue;
  if ((VAR_6->int_state & VAR_5) != 0)
   continue;
  if ((VAR_6->int_state & (VAR_0 | VAR_1)) == 0)
   return VAR_6;
  VAR_7 = VAR_6;
 }

 return VAR_7;
}
