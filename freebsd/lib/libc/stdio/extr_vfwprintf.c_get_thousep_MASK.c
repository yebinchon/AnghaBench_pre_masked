
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef char wchar_t ;
typedef int mbstate_t ;
typedef int locale_t ;
struct TYPE_2__ {int thousands_sep; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (char*,int ,int ,int *) ;

__attribute__((used)) static inline wchar_t
FUNC_2(locale_t VAR_2)
{
 mbstate_t VAR_3;
 wchar_t VAR_4;
 int VAR_5;

 VAR_3 = VAR_1;
 VAR_5 = FUNC_1(&VAR_4, FUNC_0(VAR_2)->thousands_sep,
     VAR_0, &VAR_3);
 if (VAR_5 == (size_t)-1 || VAR_5 == (size_t)-2)
  VAR_4 = '\0';
 return (VAR_4);
}
