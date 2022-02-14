
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
typedef scalar_t__ ns_sect ;


 int VAR_0 ;
 int FUNC_0 (int,int const*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int const*,int const*) ;
 scalar_t__ VAR_3 ;

int
FUNC_3(const u_char *VAR_4, const u_char *VAR_5, ns_sect VAR_6, int VAR_7) {
 const u_char *VAR_8 = VAR_4;

 for ((void)((void*)0); VAR_7 > 0; VAR_7--) {
  int VAR_9, VAR_10;

  VAR_9 = FUNC_2(VAR_4, VAR_5);
  if (VAR_9 < 0)
   FUNC_1(VAR_0);
  VAR_4 += VAR_9 + VAR_1 + VAR_1 ;
  if (VAR_6 != VAR_3) {
   if (VAR_4 + VAR_2 + VAR_1 > VAR_5)
    FUNC_1(VAR_0);
   VAR_4 += VAR_2 ;
   FUNC_0(VAR_10, VAR_4);
   VAR_4 += VAR_10 ;
  }
 }
 if (VAR_4 > VAR_5)
  FUNC_1(VAR_0);
 return (VAR_4 - VAR_8);
}
