
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct bgp {int dummy; } ;
typedef int netdissect_options ;
typedef int buf ;


 int VAR_0 ;
 int FUNC_0 (int const*) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int const,int) ;
 int FUNC_3 (int,int const*) ;
 int FUNC_4 (int,int const*) ;
 int FUNC_5 (int *,int,int const*,int) ;
 int VAR_2 ;
 int FUNC_6 (int *,int const*,int,char*,int) ;
 int FUNC_7 (struct bgp*,int const*,int) ;
 int FUNC_8 (int ,char*,int) ;

__attribute__((used)) static void
FUNC_9(netdissect_options *VAR_3,
                 const u_char *VAR_4, int VAR_5)
{
 struct bgp VAR_6;
 const u_char *VAR_7;
 int VAR_8;
 int VAR_9;
 int VAR_10;

 FUNC_2(VAR_4[0], VAR_0);
 if (VAR_5 < VAR_0)
  goto trunc;
 FUNC_7(&VAR_6, VAR_4, VAR_0);
 VAR_7 = VAR_4 + VAR_0;
 VAR_5 -= VAR_0;


 FUNC_2(VAR_7[0], 2);
 if (VAR_5 < 2)
  goto trunc;
 VAR_8 = FUNC_0(VAR_7);
 VAR_7 += 2;
 VAR_5 -= 2;
 if (VAR_8) {





  FUNC_2(VAR_7[0], VAR_8);
  if (VAR_5 < VAR_8)
   goto trunc;
  FUNC_1((VAR_3, "\n\t  Withdrawn routes: %d bytes", VAR_8));
  VAR_7 += VAR_8;
  VAR_5 -= VAR_8;
 }

 FUNC_2(VAR_7[0], 2);
 if (VAR_5 < 2)
  goto trunc;
 VAR_9 = FUNC_0(VAR_7);
 VAR_7 += 2;
 VAR_5 -= 2;

        if (VAR_8 == 0 && VAR_9 == 0 && VAR_5 == 0) {

            FUNC_1((VAR_3, "\n\t  End-of-Rib Marker (empty NLRI)"));
            return;
        }

 if (VAR_9) {

  while (VAR_9) {
   int VAR_11, VAR_12, VAR_13, VAR_14;

   FUNC_2(VAR_7[0], 2);
   if (VAR_9 < 2)
       goto trunc;
   if (VAR_5 < 2)
       goto trunc;
   VAR_11 = *VAR_7;
   VAR_12 = *(VAR_7 + 1);
   VAR_7 += 2;
   VAR_9 -= 2;
   VAR_5 -= 2;
   VAR_13 = FUNC_4(VAR_11, VAR_7);
   FUNC_2(VAR_7[0], VAR_13);
   if (VAR_9 < VAR_13)
       goto trunc;
   if (VAR_5 < VAR_13)
       goto trunc;
   VAR_14 = FUNC_3(VAR_11, VAR_7);
   VAR_7 += VAR_13;
   VAR_9 -= VAR_13;
   VAR_5 -= VAR_13;

   FUNC_1((VAR_3, "\n\t  %s (%u), length: %u",
                              FUNC_8(VAR_2, "Unknown Attribute",
      VAR_12),
                              VAR_12,
                              VAR_14));

   if (VAR_11) {
    FUNC_1((VAR_3, ", Flags [%s%s%s%s",
     VAR_11 & 0x80 ? "O" : "",
     VAR_11 & 0x40 ? "T" : "",
     VAR_11 & 0x20 ? "P" : "",
     VAR_11 & 0x10 ? "E" : ""));
    if (VAR_11 & 0xf)
     FUNC_1((VAR_3, "+%x", VAR_11 & 0xf));
    FUNC_1((VAR_3, "]: "));
   }
   if (VAR_9 < VAR_14)
    goto trunc;
   if (VAR_5 < VAR_14)
    goto trunc;
   if (!FUNC_5(VAR_3, VAR_12, VAR_7, VAR_14))
    goto trunc;
   VAR_7 += VAR_14;
   VAR_9 -= VAR_14;
   VAR_5 -= VAR_14;
  }
 }

 if (VAR_5) {
  FUNC_1((VAR_3, "\n\t  Updated routes:"));
  while (VAR_5) {
   char VAR_15[VAR_1 + 100];
   VAR_10 = FUNC_6(VAR_3, VAR_7, VAR_5, VAR_15, sizeof(VAR_15));
   if (VAR_10 == -1) {
    FUNC_1((VAR_3, "\n\t    (illegal prefix length)"));
    break;
   } else if (VAR_10 == -2)
    goto trunc;
   else if (VAR_10 == -3)
    goto trunc;
   else {
    FUNC_1((VAR_3, "\n\t    %s", VAR_15));
    VAR_7 += VAR_10;
    VAR_5 -= VAR_10;
   }
  }
 }
 return;
trunc:
 FUNC_1((VAR_3, "[|BGP]"));
}
