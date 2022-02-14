
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef size_t u32 ;
struct sk_buff {TYPE_1__* dev; } ;
struct cipso_v4_doi {unsigned char* tags; } ;
struct TYPE_2__ {int flags; } ;


 unsigned char VAR_0 ;

 int VAR_1 ;
 unsigned char VAR_2 ;

 int VAR_3 ;
 size_t VAR_4 ;


 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct cipso_v4_doi* FUNC_0 (int ) ;
 int FUNC_1 (struct cipso_v4_doi*,unsigned char*,int) ;
 int FUNC_2 (struct cipso_v4_doi*,unsigned char*,int) ;
 int FUNC_3 (struct cipso_v4_doi*,unsigned char*,int) ;
 int FUNC_4 (struct cipso_v4_doi*,unsigned char) ;
 int VAR_8 ;
 int FUNC_5 (unsigned char*) ;
 int FUNC_6 () ;
 int FUNC_7 () ;

int FUNC_8(const struct sk_buff *VAR_9, unsigned char **VAR_10)
{
 unsigned char *VAR_11 = *VAR_10;
 unsigned char *VAR_12;
 unsigned char VAR_13;
 unsigned char VAR_14 = 0;
 u8 VAR_15;
 u8 VAR_16;
 struct cipso_v4_doi *VAR_17 = ((void*)0);
 u32 VAR_18;


 VAR_15 = VAR_11[1];
 if (VAR_15 < 8) {
  VAR_14 = 1;
  goto validate_return;
 }

 FUNC_6();
 VAR_17 = FUNC_0(FUNC_5(&VAR_11[2]));
 if (VAR_17 == ((void*)0)) {
  VAR_14 = 2;
  goto validate_return_locked;
 }

 VAR_13 = VAR_0;
 VAR_12 = VAR_11 + VAR_13;
 while (VAR_13 < VAR_15) {
  for (VAR_18 = 0; VAR_17->tags[VAR_18] != VAR_12[0];)
   if (VAR_17->tags[VAR_18] == VAR_2 ||
       ++VAR_18 == VAR_4) {
    VAR_14 = VAR_13;
    goto validate_return_locked;
   }

  VAR_16 = VAR_12[1];
  if (VAR_16 > (VAR_15 - VAR_13)) {
   VAR_14 = VAR_13 + 1;
   goto validate_return_locked;
  }

  switch (VAR_12[0]) {
  case 128:
   if (VAR_16 < VAR_5) {
    VAR_14 = VAR_13 + 1;
    goto validate_return_locked;
   }
   if (VAR_8) {
    if (FUNC_4(VAR_17,
          VAR_12[3]) < 0) {
     VAR_14 = VAR_13 + 3;
     goto validate_return_locked;
    }
    if (VAR_16 > VAR_5 &&
        FUNC_2(VAR_17,
           &VAR_12[4],
           VAR_16 - 4) < 0) {
     VAR_14 = VAR_13 + 4;
     goto validate_return_locked;
    }
   }
   break;
  case 131:
   if (VAR_16 < VAR_1) {
    VAR_14 = VAR_13 + 1;
    goto validate_return_locked;
   }

   if (FUNC_4(VAR_17,
         VAR_12[3]) < 0) {
    VAR_14 = VAR_13 + 3;
    goto validate_return_locked;
   }
   if (VAR_16 > VAR_1 &&
       FUNC_1(VAR_17,
       &VAR_12[4],
       VAR_16 - 4) < 0) {
    VAR_14 = VAR_13 + 4;
    goto validate_return_locked;
   }
   break;
  case 129:
   if (VAR_16 < VAR_6) {
    VAR_14 = VAR_13 + 1;
    goto validate_return_locked;
   }

   if (FUNC_4(VAR_17,
         VAR_12[3]) < 0) {
    VAR_14 = VAR_13 + 3;
    goto validate_return_locked;
   }
   if (VAR_16 > VAR_6 &&
       FUNC_3(VAR_17,
             &VAR_12[4],
             VAR_16 - 4) < 0) {
    VAR_14 = VAR_13 + 4;
    goto validate_return_locked;
   }
   break;
  case 130:





   if (VAR_9 == ((void*)0) || !(VAR_9->dev->flags & VAR_7)) {
    VAR_14 = VAR_13;
    goto validate_return_locked;
   }
   if (VAR_16 != VAR_3) {
    VAR_14 = VAR_13 + 1;
    goto validate_return_locked;
   }
   break;
  default:
   VAR_14 = VAR_13;
   goto validate_return_locked;
  }

  VAR_12 += VAR_16;
  VAR_13 += VAR_16;
 }

validate_return_locked:
 FUNC_7();
validate_return:
 *VAR_10 = VAR_11 + VAR_14;
 return VAR_14;
}
