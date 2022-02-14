
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct _memstream {int dummy; } ;
struct TYPE_4__ {char const* str; } ;
struct TYPE_5__ {TYPE_1__ u; } ;
typedef TYPE_2__ _citrus_prop_object_t ;


 int VAR_0 ;
 int VAR_1 ;

 size_t VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct _memstream*,int*) ;
 int FUNC_2 (struct _memstream*) ;
 int FUNC_3 (struct _memstream*) ;
 int FUNC_4 (struct _memstream*,int) ;
 int FUNC_5 (char*) ;
 char* FUNC_6 (size_t) ;
 char* FUNC_7 (char*,size_t) ;

__attribute__((used)) static int
FUNC_8(struct _memstream * __restrict VAR_3,
    _citrus_prop_object_t * __restrict VAR_4)
{
 int VAR_5, VAR_6, VAR_7;
 char *VAR_8, *VAR_9;

 size_t VAR_10, VAR_11;

 VAR_10 = 512;
 VAR_8 = FUNC_6(VAR_10);
 if (VAR_8 == ((void*)0))
  return (VAR_1);
 VAR_11 = 0;
 FUNC_3(VAR_3);
 VAR_7 = FUNC_2(VAR_3);
 switch (VAR_7) {
 case 128:
  goto done;

 case '\\':
  FUNC_4(VAR_3, VAR_7);
  VAR_7 = 128;

 case '\"': case '\'':
  break;
 default:
  VAR_8[VAR_11] = VAR_7;
  ++VAR_11, --VAR_10;
  VAR_7 = 128;
 }
 for (;;) {
  if (VAR_10 < 1) {
   VAR_10 = 512;
   VAR_9 = FUNC_7(VAR_8, VAR_11 + VAR_10);
   if (VAR_9 == ((void*)0)) {
    FUNC_5(VAR_8);
    return (VAR_1);
   }
   VAR_8 = VAR_9;
  }
  VAR_5 = FUNC_2(VAR_3);
  if (VAR_7 == VAR_5 || (VAR_7 == 128 &&
      (VAR_5 == ';' || FUNC_0(VAR_5)))) {
done:
   VAR_8[VAR_11] = '\0';
   VAR_4->u.str = (const char *)VAR_8;
   return (0);
  }
  FUNC_4(VAR_3, VAR_5);
  VAR_6 = FUNC_1(VAR_3, &VAR_5);
  if (VAR_6 != 0) {
   FUNC_5(VAR_8);
   return (VAR_6);
  }
  VAR_8[VAR_11] = VAR_5;
  ++VAR_11, --VAR_10;
 }
 FUNC_5(VAR_8);
 return (VAR_0);

}
