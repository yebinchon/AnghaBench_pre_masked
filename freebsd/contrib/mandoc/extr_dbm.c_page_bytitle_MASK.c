
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dbm_res {int member_0; char bits; scalar_t__ page; int member_1; } ;
struct dbm_match {int dummy; } ;
typedef scalar_t__ int32_t ;
typedef enum iter { ____Placeholder_iter } iter ;
struct TYPE_2__ {int desc; int sect; int name; } ;




 int VAR_0 ;

 int FUNC_0 () ;
 int FUNC_1 (int) ;
 char* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct dbm_match const*,char const*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_1__* VAR_3 ;
 char* FUNC_4 (char const*,char) ;

__attribute__((used)) static struct dbm_res
FUNC_5(enum iter VAR_4, const struct dbm_match *VAR_5)
{
 static const struct dbm_match *VAR_6;
 static const char *VAR_7;
 static int32_t VAR_8;
 struct dbm_res VAR_9 = {-1, 0};

 FUNC_1(VAR_4 == 129 || VAR_4 == 130 ||
     VAR_4 == 128);



 if (VAR_5 != ((void*)0)) {
  VAR_1 = VAR_4;
  VAR_6 = VAR_5;
  switch (VAR_1) {
  case 129:
   VAR_7 = FUNC_2(VAR_3[0].name);
   break;
  case 128:
   VAR_7 = FUNC_2(VAR_3[0].sect);
   break;
  case 130:
   VAR_7 = FUNC_2(VAR_3[0].desc);
   break;
  default:
   FUNC_0();
  }
  if (VAR_7 == ((void*)0)) {
   VAR_1 = VAR_0;
   VAR_6 = ((void*)0);
   VAR_7 = ((void*)0);
   VAR_8 = VAR_2;
  } else
   VAR_8 = 0;
  return VAR_9;
 }



 while (VAR_8 < VAR_2) {
  if (VAR_1 == 129)
   VAR_7++;
  if (FUNC_3(VAR_6, VAR_7))
   break;
  VAR_7 = FUNC_4(VAR_7, '\0') + 1;
  if (VAR_1 == 130)
   VAR_8++;
  else if (*VAR_7 == '\0') {
   VAR_7++;
   VAR_8++;
  }
 }



 if (VAR_8 == VAR_2) {
  VAR_1 = VAR_0;
  VAR_6 = ((void*)0);
  VAR_7 = ((void*)0);
  return VAR_9;
 }



 VAR_9.page = VAR_8;
 VAR_9.bits = VAR_1 == 129 ? VAR_7[-1] : 0;



 if (++VAR_8 < VAR_2) {
  do {
   VAR_7++;
  } while (VAR_7[-1] != '\0' ||
      (VAR_1 != 130 && VAR_7[-2] != '\0'));
 }
 return VAR_9;
}
