
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rerr {int code; char const* name; char* explain; } ;
typedef int regex_t ;
typedef int convbuf ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 char* FUNC_1 (int const*,char*) ;
 struct rerr* VAR_2 ;
 int FUNC_2 (char*,char*,int) ;
 int FUNC_3 (char*,char const*) ;
 int FUNC_4 (char const*) ;
 int FUNC_5 (char*,char const*,size_t) ;

size_t
FUNC_6(int VAR_3,
  const regex_t * __restrict VAR_4,
  char * __restrict VAR_5,
  size_t VAR_6)
{
 struct rerr *VAR_7;
 size_t VAR_8;
 int VAR_9 = VAR_3 &~ VAR_1;
 const char *VAR_10;
 char VAR_11[50];

 if (VAR_3 == VAR_0)
  VAR_10 = FUNC_1(VAR_4, VAR_11);
 else {
  for (VAR_7 = VAR_2; VAR_7->code != 0; VAR_7++)
   if (VAR_7->code == VAR_9)
    break;

  if (VAR_3&VAR_1) {
   if (VAR_7->code != 0)
    (void) FUNC_3(VAR_11, VAR_7->name);
   else
    FUNC_2(VAR_11, "REG_0x%x", VAR_9);
   FUNC_0(FUNC_4(VAR_11) < sizeof(VAR_11));
   VAR_10 = VAR_11;
  } else
   VAR_10 = VAR_7->explain;
 }

 VAR_8 = FUNC_4(VAR_10) + 1;
 if (VAR_6 > 0) {
  if (VAR_6 > VAR_8)
   (void) FUNC_3(VAR_5, VAR_10);
  else {
   (void) FUNC_5(VAR_5, VAR_10, VAR_6-1);
   VAR_5[VAR_6-1] = '\0';
  }
 }

 return(VAR_8);
}
