
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef int u_char ;
typedef int netdissect_options ;




 int FUNC_0 (int,int const*,int) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int const) ;
 int FUNC_3 (int const,int) ;
 int VAR_1 ;

 int const VAR_2 ;
 int FUNC_4 (int,int ) ;
 int VAR_3 ;




 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int * VAR_9 ;
 int * VAR_10 ;
 int VAR_11 ;

__attribute__((used)) static int
FUNC_5(netdissect_options *VAR_12, const u_char *VAR_13, u_int VAR_14, int VAR_15)
{
 int VAR_16, VAR_17;
 u_int VAR_18;
 const u_char *VAR_19, *VAR_20;
 VAR_19 = VAR_13;

 do { if (VAR_14 < 1) goto pktend; FUNC_2(*VAR_13); VAR_18 = *VAR_13++; VAR_14--; } while (0);
 if (VAR_18 != VAR_0)
  goto pktend;
 do { if (VAR_14 < 1) goto pktend; FUNC_2(*VAR_13); VAR_18 = *VAR_13++; VAR_14--; } while (0);
 if (VAR_18 == VAR_0) {
  if (VAR_15)
   FUNC_1((VAR_12, "IAC IAC"));
  goto done;
 }

 VAR_16 = VAR_18 - VAR_3;
 if (VAR_16 < 0 || VAR_16 > VAR_0 - VAR_3)
  goto pktend;

 switch (VAR_18) {
 case 133:
 case 134:
 case 128:
 case 129:
 case 132:

  do { if (VAR_14 < 1) goto pktend; FUNC_2(*VAR_13); VAR_17 = *VAR_13++; VAR_14--; } while (0);
  if (VAR_17 >= 0 && VAR_17 < VAR_1) {
   if (VAR_15)
    FUNC_1((VAR_12, "%s %s", VAR_9[VAR_16], VAR_10[VAR_17]));
  } else {
   if (VAR_15)
    FUNC_1((VAR_12, "%s %#x", VAR_9[VAR_16], VAR_17));
  }
  if (VAR_18 != 132)
   break;

  VAR_20 = VAR_13;
  while (VAR_14 > (u_int)(VAR_20 + 1 - VAR_13)) {
   FUNC_3(*VAR_20, 2);
   if (VAR_20[0] == VAR_0 && VAR_20[1] == VAR_2)
    break;
   VAR_20++;
  }
  FUNC_2(*VAR_20);
  if (*VAR_20 != VAR_0)
   goto pktend;

  switch (VAR_17) {
  case 131:
   if (VAR_20 <= VAR_13)
    break;
   do { if (VAR_14 < 1) goto pktend; FUNC_2(*VAR_13); VAR_18 = *VAR_13++; VAR_14--; } while (0);
   if (VAR_15)
    FUNC_1((VAR_12, " %s", FUNC_4(VAR_18, VAR_4)));
   if (VAR_20 <= VAR_13)
    break;
   do { if (VAR_14 < 1) goto pktend; FUNC_2(*VAR_13); VAR_18 = *VAR_13++; VAR_14--; } while (0);
   if (VAR_15)
    FUNC_1((VAR_12, " %s", FUNC_4(VAR_18, VAR_5)));
   break;
  case 130:
   if (VAR_20 <= VAR_13)
    break;
   do { if (VAR_14 < 1) goto pktend; FUNC_2(*VAR_13); VAR_18 = *VAR_13++; VAR_14--; } while (0);
   if (VAR_15)
    FUNC_1((VAR_12, " %s", FUNC_4(VAR_18, VAR_7)));
   if (VAR_20 <= VAR_13)
    break;
   do { if (VAR_14 < 1) goto pktend; FUNC_2(*VAR_13); VAR_18 = *VAR_13++; VAR_14--; } while (0);
   if (VAR_15)
    FUNC_1((VAR_12, " %s", FUNC_4(VAR_18, VAR_8)));
   break;
  default:
   if (VAR_20 <= VAR_13)
    break;
   do { if (VAR_14 < 1) goto pktend; FUNC_2(*VAR_13); VAR_18 = *VAR_13++; VAR_14--; } while (0);
   if (VAR_15)
    FUNC_1((VAR_12, " %s", FUNC_4(VAR_18, VAR_6)));
   break;
  }
  while (VAR_20 > VAR_13) {
   do { if (VAR_14 < 1) goto pktend; FUNC_2(*VAR_13); VAR_17 = *VAR_13++; VAR_14--; } while (0);
   if (VAR_15)
    FUNC_1((VAR_12, " %#x", VAR_17));
  }

  if (VAR_15)
   FUNC_1((VAR_12, " SE"));
  VAR_13 += 2;
  break;
 default:
  if (VAR_15)
   FUNC_1((VAR_12, "%s", VAR_9[VAR_16]));
  goto done;
 }

done:
 return VAR_13 - VAR_19;

trunc:
 FUNC_1((VAR_12, "%s", VAR_11));
pktend:
 return -1;

}
