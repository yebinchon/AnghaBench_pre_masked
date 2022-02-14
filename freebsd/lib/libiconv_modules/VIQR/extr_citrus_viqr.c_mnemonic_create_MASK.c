
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int wchar_t ;
struct TYPE_5__ {int ascii; int child; int value; struct TYPE_5__* parent; } ;
typedef TYPE_1__ mnemonic_t ;


 int FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (int) ;

__attribute__((used)) static mnemonic_t *
FUNC_2(mnemonic_t *VAR_0, int VAR_1, wchar_t VAR_2)
{
 mnemonic_t *VAR_3;

 VAR_3 = FUNC_1(sizeof(*VAR_3));
 if (VAR_3 != ((void*)0)) {
  VAR_3->parent = VAR_0;
  VAR_3->ascii = VAR_1;
  VAR_3->value = VAR_2;
  FUNC_0(&VAR_3->child);
 }

 return (VAR_3);
}
