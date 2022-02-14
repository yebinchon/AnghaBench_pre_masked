
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct html {int flags; int * metaf; scalar_t__ col; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct html*,char const*,int *,int ) ;
 int FUNC_2 (struct html*) ;
 int FUNC_3 (struct html*) ;
 int FUNC_4 (struct html*) ;
 int FUNC_5 (struct html*,int *) ;
 int FUNC_6 (struct html*,char*) ;

void
FUNC_7(struct html *VAR_6, const char *VAR_7)
{
 if (VAR_6->col && (VAR_6->flags & VAR_4) == 0) {
  if ( ! (VAR_1 & VAR_6->flags)) {
   if (VAR_5 & VAR_6->flags)
    VAR_6->flags |= VAR_1;
   FUNC_2(VAR_6);
  } else
   FUNC_6(VAR_6, "&#x00A0;");
 }

 FUNC_0(VAR_6->metaf == ((void*)0));
 FUNC_4(VAR_6);
 FUNC_3(VAR_6);
 if ( ! FUNC_1(VAR_6, VAR_7, ((void*)0), 0)) {
  if ( ! (VAR_6->flags & VAR_3))
   VAR_6->flags &= ~VAR_4;
  VAR_6->flags &= ~VAR_2;
 } else
  VAR_6->flags |= VAR_4 | VAR_2;

 if (VAR_6->metaf != ((void*)0)) {
  FUNC_5(VAR_6, VAR_6->metaf);
  VAR_6->metaf = ((void*)0);
 }

 VAR_6->flags &= ~VAR_0;
}
