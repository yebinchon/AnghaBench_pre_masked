
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int EFT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (char const**,char const*,int ) ;
 scalar_t__ FUNC_1 (char*,char const) ;

__attribute__((used)) static EFT
FUNC_2(const char **VAR_11)
{
 int VAR_12, VAR_13, VAR_14, VAR_15;
 const char *VAR_16;

 VAR_12 = VAR_13 = VAR_14 = VAR_15 = 0;

 VAR_16 = *VAR_11;
 switch (*VAR_16) {
 case 'h':
  VAR_16++;
  VAR_12 = 1;
  break;
 case 'l':
  VAR_16++;
  if (!*VAR_16) FUNC_0(VAR_11,VAR_16,VAR_10);
  if (*VAR_16 == 'l') {
   VAR_16++;
   VAR_14 = 1;
  } else {
   VAR_13 = 1;
  }
  break;
 case 'q':
  VAR_16++;
  VAR_14 = 1;
  break;
 case 'L':
  VAR_16++;
  VAR_15 = 1;
  break;
 default:
  break;
 }
 if (!*VAR_16) FUNC_0(VAR_11,VAR_16,VAR_10);
 if (FUNC_1("diouxX", *VAR_16)) {
  if (VAR_15)
   FUNC_0(VAR_11,VAR_16,VAR_10);
  if (VAR_13)
   FUNC_0(VAR_11,VAR_16,VAR_3);
  if (VAR_14)
   FUNC_0(VAR_11,VAR_16,VAR_6);
  FUNC_0(VAR_11,VAR_16,VAR_1);
 }
 if (*VAR_16 == 'n') {
  if (VAR_15)
   FUNC_0(VAR_11,VAR_16,VAR_10);
  if (VAR_12)
   FUNC_0(VAR_11,VAR_16,VAR_8);
  if (VAR_13)
   FUNC_0(VAR_11,VAR_16,VAR_5);
  if (VAR_14)
   FUNC_0(VAR_11,VAR_16,VAR_7);
  FUNC_0(VAR_11,VAR_16,VAR_2);
 }
 if (FUNC_1("DOU", *VAR_16)) {
  if (VAR_12 + VAR_13 + VAR_14 + VAR_15)
   FUNC_0(VAR_11,VAR_16,VAR_10);
  FUNC_0(VAR_11,VAR_16,VAR_3);
 }
 if (FUNC_1("eEfg", *VAR_16)) {
  if (VAR_15)
   FUNC_0(VAR_11,VAR_16,VAR_4);
  if (VAR_12 + VAR_13 + VAR_14)
   FUNC_0(VAR_11,VAR_16,VAR_10);
  FUNC_0(VAR_11,VAR_16,VAR_0);
 }
 if (*VAR_16 == 'c') {
  if (VAR_12 + VAR_13 + VAR_14 + VAR_15)
   FUNC_0(VAR_11,VAR_16,VAR_10);
  FUNC_0(VAR_11,VAR_16,VAR_1);
 }
 if (*VAR_16 == 's') {
  if (VAR_12 + VAR_13 + VAR_14 + VAR_15)
   FUNC_0(VAR_11,VAR_16,VAR_10);
  FUNC_0(VAR_11,VAR_16,VAR_9);
 }
 if (*VAR_16 == 'p') {
  if (VAR_12 + VAR_13 + VAR_14 + VAR_15)
   FUNC_0(VAR_11,VAR_16,VAR_10);
  FUNC_0(VAR_11,VAR_16,VAR_3);
 }
 FUNC_0(VAR_11,VAR_16,VAR_10);

}
