
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u_short ;
typedef int u_char ;
struct TYPE_3__ {scalar_t__ keyid; int* secret; size_t secretsize; int * keyacclist; scalar_t__ type; } ;
typedef TYPE_1__ symkey ;
typedef scalar_t__ keyid_t ;
typedef int KeyAccT ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (scalar_t__,int ,scalar_t__,int ,size_t,int*,int *) ;
 TYPE_1__* FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int VAR_1 ;
 void* FUNC_4 (size_t) ;
 int FUNC_5 (int*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int*,int const*,size_t) ;
 int FUNC_8 (int*,int ,size_t) ;
 int FUNC_9 (char*,...) ;
 int FUNC_10 (char*,char const*,size_t) ;

void
FUNC_11(
 keyid_t VAR_2,
 int VAR_3,
 const u_char *VAR_4,
 size_t VAR_5,
 KeyAccT *VAR_6
 )
{
 symkey * VAR_7;
 u_char * VAR_8;

 FUNC_0(VAR_3 <= VAR_0);
 FUNC_0(VAR_5 < 4 * 1024);




 VAR_7 = FUNC_2(VAR_2);
 if (VAR_7 != ((void*)0) && VAR_2 == VAR_7->keyid) {

  if (((void*)0) != VAR_7->secret) {
   FUNC_8(VAR_7->secret, 0, VAR_7->secretsize);
   FUNC_5(VAR_7->secret);
  }
  VAR_7->secret = FUNC_4(VAR_5 + 1);
  VAR_7->type = (u_short)VAR_3;
  VAR_7->secretsize = VAR_5;

  if (VAR_6 != VAR_7->keyacclist) {
   FUNC_6(VAR_7->keyacclist);
   VAR_7->keyacclist = VAR_6;
  }

  FUNC_7(VAR_7->secret, VAR_4, VAR_5);





  FUNC_3(VAR_2);
  return;
 }




 VAR_8 = FUNC_4(VAR_5 + 1);

 FUNC_7(VAR_8, VAR_4, VAR_5);




 FUNC_1(VAR_2, 0, (u_short)VAR_3, 0,
      VAR_5, VAR_8, VAR_6);
}
