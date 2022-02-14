
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
typedef int netdissect_options ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (int const*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int const,int) ;
 int const VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int *,int const*) ;
 int FUNC_5 (int *,int const*) ;
 scalar_t__ FUNC_6 (int const*,int const*,int) ;

__attribute__((used)) static int
FUNC_7(netdissect_options *VAR_3,
        const u_char * VAR_4, int VAR_5)
{
 int VAR_6, VAR_7, VAR_8, VAR_9;
 const u_char *VAR_10 = VAR_4 + VAR_5;
 static const u_char VAR_11[] = {
  0xaa, 0xaa, 0x03, 0x00, 0x00, 0x00, 0x86, 0xdd
 };

 FUNC_3(*VAR_4, 4);
 if (VAR_4 + 4 > VAR_10)
  goto trunc;
 VAR_9 = FUNC_1(VAR_4);
 VAR_4 += 4;

 while (VAR_4 < VAR_10 && VAR_9 >= 0) {
  FUNC_3(*VAR_4, 2);
  if (VAR_4 + 2 > VAR_10)
   goto trunc;
  VAR_6 = VAR_4[0];
  VAR_7 = VAR_4[1];
  VAR_4 += 2;

  FUNC_3(VAR_4[VAR_7], 2);
  if (VAR_4 + VAR_7 + 2 > VAR_10)
   goto trunc;
  VAR_8 = FUNC_0(&VAR_4[VAR_7]);

  if (VAR_6 == VAR_2 && VAR_7 == 1 && *VAR_4 == VAR_0 && VAR_8 == 4) {





   VAR_4 += 3;

   FUNC_3(*VAR_4, 4);
   if (VAR_4 + 4 > VAR_10)
    goto trunc;
   FUNC_2((VAR_3, "IPv4 (%u) %s", VAR_9, FUNC_5(VAR_3, VAR_4)));
   VAR_4 += 4;
  }
  else if (VAR_6 == VAR_1 && VAR_7 == 8 &&
      FUNC_6(VAR_4, VAR_11, 8) == 0 && VAR_8 == 16) {






   VAR_4 += 10;
   FUNC_3(*VAR_4, VAR_8);
   if (VAR_4 + VAR_8 > VAR_10)
    goto trunc;

   FUNC_2((VAR_3, "IPv6 (%u) %s", VAR_9, FUNC_4(VAR_3, VAR_4)));
   VAR_4 += VAR_8;
  }
  else {



   FUNC_3(*VAR_4, VAR_7);
   if (VAR_4 + VAR_7 > VAR_10)
    goto trunc;
   FUNC_2((VAR_3, "pt=0x%02x, pl=%d, pb=", *(VAR_4 - 2), VAR_7));
   while (VAR_7-- > 0)
    FUNC_2((VAR_3, " %02x", *VAR_4++));
   FUNC_3(*VAR_4, 2);
   if (VAR_4 + 2 > VAR_10)
    goto trunc;
   VAR_8 = (*VAR_4 << 8) + *(VAR_4 + 1);
   FUNC_2((VAR_3, ", al=%d, a=", VAR_8));
   VAR_4 += 2;
   FUNC_3(*VAR_4, VAR_8);
   if (VAR_4 + VAR_8 > VAR_10)
    goto trunc;
   while (VAR_8-- > 0)
    FUNC_2((VAR_3, " %02x", *VAR_4++));
  }
  VAR_9--;
  if (VAR_9)
   FUNC_2((VAR_3, " "));
 }

 return 0;

trunc:
 return -1;
}
