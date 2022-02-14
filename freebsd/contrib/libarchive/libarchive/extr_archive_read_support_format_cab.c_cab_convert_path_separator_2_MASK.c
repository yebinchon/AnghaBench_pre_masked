
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int wchar_t ;
struct TYPE_3__ {int* s; } ;
struct cab {TYPE_1__ ws; } ;
struct archive_entry {int dummy; } ;


 int FUNC_0 (struct archive_entry*,int*) ;
 int * FUNC_1 (struct archive_entry*) ;
 size_t FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int const*) ;

__attribute__((used)) static void
FUNC_4(struct cab *VAR_0, struct archive_entry *VAR_1)
{
 const wchar_t *VAR_2;
 size_t VAR_3;


 if ((VAR_2 = FUNC_1(VAR_1)) != ((void*)0)) {
  FUNC_3(&(VAR_0->ws), VAR_2);
  for (VAR_3 = 0; VAR_3 < FUNC_2(&(VAR_0->ws)); VAR_3++) {
   if (VAR_0->ws.s[VAR_3] == L'\\')
    VAR_0->ws.s[VAR_3] = L'/';
  }
  FUNC_0(VAR_1, VAR_0->ws.s);
 }
}
