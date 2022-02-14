
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct atNBPtuple {int dummy; } ;
typedef int netdissect_options ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 char* FUNC_1 (int *,char const*,int const*) ;

__attribute__((used)) static const struct atNBPtuple *
FUNC_2(netdissect_options *VAR_1,
               const struct atNBPtuple *VAR_2, register const u_char *VAR_3)
{
 register const char *VAR_4 = (const char *)VAR_2 + VAR_0;

 FUNC_0((VAR_1, " "));


 FUNC_0((VAR_1, "\""));
 if ((VAR_4 = FUNC_1(VAR_1, VAR_4, VAR_3)) != ((void*)0)) {

  FUNC_0((VAR_1, ":"));
  if ((VAR_4 = FUNC_1(VAR_1, VAR_4, VAR_3)) != ((void*)0)) {

   FUNC_0((VAR_1, "@"));
   if ((VAR_4 = FUNC_1(VAR_1, VAR_4, VAR_3)) != ((void*)0))
    FUNC_0((VAR_1, "\""));
  }
 }
 return ((const struct atNBPtuple *)VAR_4);
}
