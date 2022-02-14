
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int uud_flags; int uud_severity; int * uud_name; } ;
typedef TYPE_1__ uu_dprintf_t ;
typedef int uu_dprintf_severity_t ;
typedef int uint_t ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (char const*) ;
 int FUNC_1 (char const*,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ) ;
 TYPE_1__* FUNC_4 (int) ;

uu_dprintf_t *
FUNC_5(const char *VAR_2, uu_dprintf_severity_t VAR_3,
    uint_t VAR_4)
{
 uu_dprintf_t *VAR_5;

 if (FUNC_1(VAR_2, VAR_1) == -1) {
  FUNC_3(VAR_0);
  return (((void*)0));
 }

 if ((VAR_5 = FUNC_4(sizeof (uu_dprintf_t))) == ((void*)0))
  return (((void*)0));

 if (VAR_2 != ((void*)0)) {
  VAR_5->uud_name = FUNC_0(VAR_2);
  if (VAR_5->uud_name == ((void*)0)) {
   FUNC_2(VAR_5);
   return (((void*)0));
  }
 } else {
  VAR_5->uud_name = ((void*)0);
 }

 VAR_5->uud_severity = VAR_3;
 VAR_5->uud_flags = VAR_4;

 return (VAR_5);
}
