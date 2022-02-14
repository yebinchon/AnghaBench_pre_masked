
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
typedef int netdissect_options ;


 int FUNC_0 (int const*) ;

 unsigned int const VAR_0 ;

 unsigned int const VAR_1 ;
 unsigned int const VAR_2 ;

 unsigned int const VAR_3 ;



 unsigned int const VAR_4 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int const) ;
 int FUNC_3 (int const*) ;
 int FUNC_4 (int const*) ;
 int FUNC_5 (int *,int const*) ;

__attribute__((used)) static int
FUNC_6(netdissect_options *VAR_5,
                   const u_char *VAR_6, const unsigned VAR_7)
{
 unsigned VAR_8, VAR_9;

 for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8 += VAR_9) {
  FUNC_2(VAR_6[VAR_8]);
  if (VAR_6[VAR_8] == 130)
   VAR_9 = 1;
  else {
   if (VAR_8 + 1 < VAR_7) {
    FUNC_2(VAR_6[VAR_8 + 1]);
    VAR_9 = VAR_6[VAR_8 + 1] + 2;
   }
   else
    goto trunc;
  }
  if (VAR_8 + VAR_9 > VAR_7)
   goto trunc;
  FUNC_2(VAR_6[VAR_8 + VAR_9]);

  switch (VAR_6[VAR_8]) {
  case 130:
   FUNC_1((VAR_5, "(pad1)"));
   break;
  case 129:
   if (VAR_7 - VAR_8 < VAR_2) {
    FUNC_1((VAR_5, "(padn: trunc)"));
    goto trunc;
   }
   FUNC_1((VAR_5, "(padn)"));
   break;
  case 128:
   if (VAR_7 - VAR_8 < VAR_4) {
    FUNC_1((VAR_5, "(refresh: trunc)"));
    goto trunc;
   }

   FUNC_4(&VAR_6[VAR_8+2]);
   FUNC_1((VAR_5, "(refresh: %u)",
    FUNC_0(&VAR_6[VAR_8+2]) << 2));
   break;
  case 133:
   if (VAR_7 - VAR_8 < VAR_0) {
    FUNC_1((VAR_5, "(altcoa: trunc)"));
    goto trunc;
   }
   FUNC_3(&VAR_6[VAR_8+2]);
   FUNC_1((VAR_5, "(alt-CoA: %s)", FUNC_5(VAR_5, &VAR_6[VAR_8+2])));
   break;
  case 131:
   if (VAR_7 - VAR_8 < VAR_3) {
    FUNC_1((VAR_5, "(ni: trunc)"));
    goto trunc;
   }
   FUNC_4(&VAR_6[VAR_8+2]);
   FUNC_4(&VAR_6[VAR_8+4]);
   FUNC_1((VAR_5, "(ni: ho=0x%04x co=0x%04x)",
    FUNC_0(&VAR_6[VAR_8+2]),
    FUNC_0(&VAR_6[VAR_8+4])));
   break;
  case 132:
   if (VAR_7 - VAR_8 < VAR_1) {
    FUNC_1((VAR_5, "(auth: trunc)"));
    goto trunc;
   }
   FUNC_1((VAR_5, "(auth)"));
   break;
  default:
   if (VAR_7 - VAR_8 < VAR_2) {
    FUNC_1((VAR_5, "(sopt_type %u: trunc)", VAR_6[VAR_8]));
    goto trunc;
   }
   FUNC_1((VAR_5, "(type-0x%02x: len=%u)", VAR_6[VAR_8], VAR_6[VAR_8 + 1]));
   break;
  }
 }
 return 0;

trunc:
 return 1;
}
