
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char const*,char const*) ;
 scalar_t__ FUNC_1 (char const*,char const*,size_t) ;
 char* FUNC_2 (char const*,char) ;

__attribute__((used)) static int FUNC_3(const char *VAR_2, const char *VAR_3)
{
  const char *VAR_4, *VAR_5, *VAR_6;
  int VAR_7;
  size_t VAR_8, VAR_9;
  VAR_5 = FUNC_2(VAR_3, '*');
  if(VAR_5 == ((void*)0))
    return FUNC_0(VAR_3, VAR_2) ?
      VAR_0 : VAR_1;



  VAR_7 = 1;
  VAR_4 = FUNC_2(VAR_3, '.');
  if(VAR_4 == ((void*)0) || FUNC_2(VAR_4+1, '.') == ((void*)0) ||
     VAR_5 > VAR_4 ||
     FUNC_1(VAR_3, "xn--", 4)) {
    VAR_7 = 0;
  }
  if(!VAR_7)
    return FUNC_0(VAR_3, VAR_2) ?
      VAR_0 : VAR_1;

  VAR_6 = FUNC_2(VAR_2, '.');
  if(VAR_6 == ((void*)0) ||
     !FUNC_0(VAR_4, VAR_6))
    return VAR_1;




  if(VAR_6 - VAR_2 < VAR_4 - VAR_3)
    return VAR_1;

  VAR_8 = VAR_5 - VAR_3;
  VAR_9 = VAR_4 - (VAR_5+1);
  return FUNC_1(VAR_3, VAR_2, VAR_8) &&
    FUNC_1(VAR_5+1, VAR_6 - VAR_9,
                    VAR_9) ?
    VAR_0 : VAR_1;
}
