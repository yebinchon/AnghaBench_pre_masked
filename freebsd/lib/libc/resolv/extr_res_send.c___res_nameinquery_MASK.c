
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_2__ {int qdcount; } ;
typedef TYPE_1__ HEADER ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int const*,int const*,int const*,char*,int) ;
 int FUNC_1 (int const*) ;
 int FUNC_2 (char*,char const*) ;
 int FUNC_3 (int ) ;

int
FUNC_4(const char *VAR_3, int VAR_4, int VAR_5,
  const u_char *VAR_6, const u_char *VAR_7)
{
 const u_char *VAR_8 = VAR_6 + VAR_0;
 int VAR_9 = FUNC_3(((const HEADER*)VAR_6)->qdcount);

 while (VAR_9-- > 0) {
  char VAR_10[VAR_2+1];
  int VAR_11, VAR_12, VAR_13;

  VAR_11 = FUNC_0(VAR_6, VAR_7, VAR_8, VAR_10, sizeof VAR_10);
  if (VAR_11 < 0)
   return (-1);
  VAR_8 += VAR_11;
  if (VAR_8 + 2 * VAR_1 > VAR_7)
   return (-1);
  VAR_12 = FUNC_1(VAR_8); VAR_8 += VAR_1;
  VAR_13 = FUNC_1(VAR_8); VAR_8 += VAR_1;
  if (VAR_12 == VAR_4 && VAR_13 == VAR_5 &&
      FUNC_2(VAR_10, VAR_3) == 1)
   return (1);
 }
 return (0);
}
