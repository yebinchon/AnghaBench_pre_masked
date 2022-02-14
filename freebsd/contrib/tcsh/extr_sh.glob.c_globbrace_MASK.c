
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct blk_buf {int len; } ;
struct Strbuf {size_t len; int s; } ;
typedef scalar_t__ Char ;


 struct blk_buf VAR_0 ;
 scalar_t__ const VAR_1 ;



 scalar_t__ const VAR_2 ;
 struct Strbuf VAR_3 ;
 int FUNC_0 (struct Strbuf*,scalar_t__ const*) ;
 int FUNC_1 (struct Strbuf*,scalar_t__ const*,int) ;
 int FUNC_2 (struct Strbuf*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct blk_buf*,int ) ;
 int FUNC_5 (struct blk_buf*) ;
 scalar_t__** FUNC_6 (struct blk_buf*) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int
FUNC_8(const Char *VAR_4, Char ***VAR_5)
{
    struct Strbuf VAR_6 = VAR_3;
    struct blk_buf VAR_7 = VAR_0;
    int VAR_8;
    const Char *VAR_9, *VAR_10, *VAR_11, *VAR_12;
    size_t VAR_13;


    for (VAR_9 = VAR_4; *VAR_9 != 130; VAR_9++)
 ;
    VAR_13 = VAR_9 - VAR_4;


    for (VAR_8 = 0, VAR_11 = ++VAR_9; *VAR_11; VAR_11++)
 if (*VAR_11 == 129) {

     for (++VAR_11; *VAR_11 != VAR_2 && *VAR_11 != VAR_1; VAR_11++)
  continue;
     if (*VAR_11 == VAR_1)
  return (-VAR_2);
 }
 else if (*VAR_11 == 130)
     VAR_8++;
 else if (*VAR_11 == 128) {
     if (VAR_8 == 0)
  break;
     VAR_8--;
 }

    if (VAR_8 != 0 || *VAR_11 == '\0')
 return (-128);

    FUNC_1(&VAR_6, VAR_4, VAR_13);

    for (VAR_8 = 0, VAR_12 = VAR_10 = VAR_9; VAR_10 <= VAR_11; VAR_10++)
 switch (*VAR_10) {
 case 129:
     for (++VAR_10; *VAR_10 != VAR_2 && *VAR_10 != VAR_1; VAR_10++)
  continue;
     if (*VAR_10 == VAR_1) {
  FUNC_5(&VAR_7);
  FUNC_7(VAR_6.s);
  return (-VAR_2);
     }
     break;
 case 130:
     VAR_8++;
     break;
 case 128:
     if (VAR_8) {
  VAR_8--;
  break;
     }

 case ',':
     if (VAR_8 && *VAR_10 == ',')
  break;
     else {
  VAR_6.len = VAR_13;
  FUNC_1(&VAR_6, VAR_12, VAR_10 - VAR_12);
  FUNC_0(&VAR_6, VAR_11 + 1);
  FUNC_2(&VAR_6);
  FUNC_4(&VAR_7, FUNC_3(VAR_6.s));
  VAR_12 = VAR_10 + 1;
     }
     break;
 default:
     break;
 }
    *VAR_5 = FUNC_6(&VAR_7);
    FUNC_7(VAR_6.s);
    return VAR_7.len;
}
