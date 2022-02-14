
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
struct archive_wstring {size_t length; int* s; } ;
typedef int shift_state ;
typedef int mbstate_t ;


 scalar_t__ VAR_0 ;
 int * FUNC_0 (struct archive_wstring*,size_t) ;
 scalar_t__ VAR_1 ;
 size_t FUNC_1 (int*,char const*,size_t,int *) ;
 size_t FUNC_2 (int*,char const*,size_t) ;
 int FUNC_3 (int *,int ,int) ;

int
FUNC_4(struct archive_wstring *VAR_2,
    const char *VAR_3, size_t VAR_4)
{
 size_t VAR_5;
 int VAR_6 = 0;




 size_t VAR_7 = VAR_4;
 size_t VAR_8 = VAR_4;
 const char *VAR_9 = VAR_3;
 wchar_t *VAR_10;





 if (((void*)0) == FUNC_0(VAR_2, VAR_2->length + VAR_7 + 1))
  return (-1);
 VAR_10 = VAR_2->s + VAR_2->length;





 while (*VAR_9 && VAR_8 > 0) {
  if (VAR_7 == 0) {
   VAR_2->length = VAR_10 - VAR_2->s;
   VAR_2->s[VAR_2->length] = L'\0';
   VAR_7 = VAR_8;
   if (((void*)0) == FUNC_0(VAR_2,
       VAR_2->length + VAR_7 + 1))
    return (-1);
   VAR_10 = VAR_2->s + VAR_2->length;
  }



  VAR_5 = FUNC_2(VAR_10, VAR_9, VAR_7);

  if (VAR_5 == (size_t)-1 || VAR_5 == (size_t)-2) {
   VAR_6 = -1;
   if (VAR_1 == VAR_0) {
    ++VAR_9;
    --VAR_8;
    continue;
   } else
    break;
  }
  if (VAR_5 == 0 || VAR_5 > VAR_8)
   break;
  VAR_10++;
  VAR_7--;
  VAR_9 += VAR_5;
  VAR_8 -= VAR_5;
 }
 VAR_2->length = VAR_10 - VAR_2->s;
 VAR_2->s[VAR_2->length] = L'\0';
 return (VAR_6);
}
