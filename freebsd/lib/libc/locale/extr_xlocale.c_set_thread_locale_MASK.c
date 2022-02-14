
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xlocale_refcounted {int dummy; } ;
typedef scalar_t__ locale_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,scalar_t__) ;
 scalar_t__ VAR_6 ;
 int FUNC_4 (struct xlocale_refcounted*) ;
 int FUNC_5 (struct xlocale_refcounted*) ;

__attribute__((used)) static void
FUNC_6(locale_t VAR_7)
{
 locale_t VAR_8 = (VAR_7 == VAR_0) ? 0 : VAR_7;

 FUNC_1(&VAR_5, VAR_3);

 if (((void*)0) != VAR_8) {
  FUNC_5((struct xlocale_refcounted*)VAR_8);
 }
 locale_t VAR_9 = FUNC_2(VAR_4);
 if ((((void*)0) != VAR_9) && (VAR_8 != VAR_9)) {
  FUNC_4((struct xlocale_refcounted*)VAR_9);
 }
 if (VAR_2) {
  VAR_6 = VAR_8;
 } else {
  FUNC_3(VAR_4, VAR_8);
 }

 VAR_1 = VAR_8;
 FUNC_0(VAR_7);

}
