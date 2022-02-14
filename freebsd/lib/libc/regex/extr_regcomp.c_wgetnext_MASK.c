
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wint_t ;
typedef int wchar_t ;
struct parse {scalar_t__ next; scalar_t__ end; } ;
typedef int mbstate_t ;
typedef int mbs ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 size_t FUNC_1 (int *,scalar_t__,scalar_t__,int *) ;
 int FUNC_2 (int *,int ,int) ;

__attribute__((used)) static wint_t
FUNC_3(struct parse *VAR_1)
{
 mbstate_t VAR_2;
 wchar_t VAR_3;
 size_t VAR_4;

 FUNC_2(&VAR_2, 0, sizeof(VAR_2));
 VAR_4 = FUNC_1(&VAR_3, VAR_1->next, VAR_1->end - VAR_1->next, &VAR_2);
 if (VAR_4 == (size_t)-1 || VAR_4 == (size_t)-2) {
  FUNC_0(VAR_0);
  return (0);
 }
 if (VAR_4 == 0)
  VAR_4 = 1;
 VAR_1->next += VAR_4;
 return (VAR_3);
}
