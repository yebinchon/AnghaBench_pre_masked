
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int wchar_t ;
struct TYPE_7__ {int value; int child; } ;
typedef TYPE_1__ mnemonic_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,TYPE_1__*,int ) ;
 int VAR_2 ;
 TYPE_1__* FUNC_1 (TYPE_1__*,int,int ) ;
 TYPE_1__* FUNC_2 (int *,int) ;

__attribute__((used)) static int
FUNC_3(mnemonic_t *VAR_3, const char *VAR_4,
    wchar_t VAR_5, wchar_t VAR_6)
{
 mnemonic_t *VAR_7;
 int VAR_8;

 VAR_8 = (unsigned char)*VAR_4++;
 if (VAR_8 == '\0')
  return (VAR_0);
 VAR_7 = FUNC_2(&VAR_3->child, VAR_8);
 if (VAR_7 == ((void*)0)) {
  VAR_7 = FUNC_1(VAR_3, VAR_8, (wchar_t)VAR_8);
  if (VAR_7 == ((void*)0))
   return (VAR_1);
  FUNC_0(&VAR_3->child, VAR_7, VAR_2);
 }
 VAR_3 = VAR_7;
 for (VAR_7 = ((void*)0); (VAR_8 = (unsigned char)*VAR_4) != '\0'; ++VAR_4) {
  VAR_7 = FUNC_2(&VAR_3->child, VAR_8);
  if (VAR_7 == ((void*)0)) {
   VAR_7 = FUNC_1(VAR_3, VAR_8, VAR_6);
   if (VAR_7 == ((void*)0))
    return (VAR_1);
   FUNC_0(&VAR_3->child, VAR_7, VAR_2);
  }
  VAR_3 = VAR_7;
 }
 if (VAR_7 == ((void*)0))
  return (VAR_0);
 VAR_7->value = VAR_5;

 return (0);
}
