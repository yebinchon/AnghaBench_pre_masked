
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;
typedef int uint64_t ;
typedef int s_align_n ;


 int FUNC_0 (char*,int,char*,int ) ;

__attribute__((used)) static const char *
FUNC_1(uint64_t VAR_0)
{
 static char VAR_1[64];

 switch (VAR_0) {
 case 0: return "No";
 case 1: return "8-byte align";
 case 2: return "4-byte align";
 case 3: return "Reserved";
 default:
  if (VAR_0 >= 4 && VAR_0 <= 12)
   FUNC_0(VAR_1, sizeof(VAR_1), "8-byte align"
       " and up to 2^%ju-byte extended align",
       (uintmax_t) VAR_0);
  else
   FUNC_0(VAR_1, sizeof(VAR_1), "Unknown (%ju)",
       (uintmax_t) VAR_0);
  return (VAR_1);
 }
}
