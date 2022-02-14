
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Strbuf {int dummy; } ;
typedef char const Char ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char const) ;
 struct Strbuf VAR_1 ;
 int FUNC_1 (struct Strbuf*,char const*) ;
 int FUNC_2 (struct Strbuf*,int ) ;
 char* FUNC_3 (struct Strbuf*) ;
 int FUNC_4 (char const*) ;
 int FUNC_5 (int ,int,char const*,int ) ;
 int FUNC_6 (char const*) ;

__attribute__((used)) static const Char *
FUNC_7(const Char *VAR_2, Char **VAR_3, size_t VAR_4, Char **VAR_5, Char VAR_6,
   const char *VAR_7)
{
    struct Strbuf VAR_8 = VAR_1;
    Char *VAR_9;
    const Char *VAR_10;

    for (VAR_10 = VAR_2; *VAR_10 && *VAR_10 != VAR_6;)
 if (VAR_10[0] == '$' && VAR_10[1] == ':' && FUNC_0(VAR_10[VAR_10[2] == '-' ? 3 : 2])) {
     int VAR_11, VAR_12 = 0;
     VAR_10 += 2;
     if (*VAR_10 == '-') {
  VAR_12 = 1;
  VAR_10++;
     }
     for (VAR_11 = *VAR_10++ - '0'; FUNC_0(*VAR_10); VAR_11 += 10 * VAR_11 + *VAR_10++ - '0')
  continue;
     if (VAR_12)
  VAR_11 = VAR_4 - VAR_11 - 1;
     if (VAR_11 >= 0 && (size_t)VAR_11 < VAR_4)
  FUNC_1(&VAR_8, VAR_3[VAR_11]);
 }
 else
     FUNC_2(&VAR_8, *VAR_10++);

    VAR_9 = FUNC_3(&VAR_8);

    if (*VAR_10++ == VAR_6) {
 *VAR_5 = VAR_9;
 return VAR_10;
    }

    FUNC_6(VAR_9);

    FUNC_5(VAR_0, (int)VAR_6, VAR_7, FUNC_4(VAR_2));
    return --VAR_10;
}
