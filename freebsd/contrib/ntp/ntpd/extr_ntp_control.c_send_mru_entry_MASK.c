
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int32 ;
typedef scalar_t__ u_int ;
typedef scalar_t__ u_char ;
typedef int tag ;
struct TYPE_3__ {int flags; int vn_mode; int count; int first; int last; int rmtadr; } ;
typedef TYPE_1__ mon_entry ;


 scalar_t__ FUNC_0 (scalar_t__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (scalar_t__*) ;
 char* VAR_1 ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (char*,int *) ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (char*,char const*,int ) ;
 char* VAR_2 ;
 int FUNC_7 () ;
 int FUNC_8 (char*,int,char const*,int) ;
 char* FUNC_9 (int *) ;
 int FUNC_10 (char const*) ;

__attribute__((used)) static void
FUNC_11(
 mon_entry * VAR_3,
 int VAR_4
 )
{
 const char VAR_5[] = "first.%d";
 const char VAR_6[] = "ct.%d";
 const char VAR_7[] = "mv.%d";
 const char VAR_8[] = "rs.%d";
 char VAR_9[32];
 u_char VAR_10[6];
 u_int32 VAR_11;
 u_int VAR_12;
 u_int VAR_13;
 const char * VAR_14;

 VAR_13 = FUNC_0(VAR_10);
 FUNC_1(VAR_10);
 VAR_11 = (u_int32)(FUNC_7() ^ (FUNC_7() << 16));
 while (VAR_13 > 0) {
  VAR_12 = (VAR_11 & 7) % FUNC_0(VAR_10);
  VAR_11 >>= 3;
  while (VAR_10[VAR_12])
   VAR_12 = (VAR_12 + 1) % FUNC_0(VAR_10);

  switch (VAR_12) {

  case 0:
   FUNC_8(VAR_9, sizeof(VAR_9), VAR_1, VAR_4);
   VAR_14 = FUNC_9(&VAR_3->rmtadr);
   FUNC_6(VAR_9, VAR_14, FUNC_10(VAR_14));
   break;

  case 1:
   FUNC_8(VAR_9, sizeof(VAR_9), VAR_2, VAR_4);
   FUNC_4(VAR_9, &VAR_3->last);
   break;

  case 2:
   FUNC_8(VAR_9, sizeof(VAR_9), VAR_5, VAR_4);
   FUNC_4(VAR_9, &VAR_3->first);
   break;

  case 3:
   FUNC_8(VAR_9, sizeof(VAR_9), VAR_6, VAR_4);
   FUNC_3(VAR_9, VAR_3->count);
   break;

  case 4:
   FUNC_8(VAR_9, sizeof(VAR_9), VAR_7, VAR_4);
   FUNC_5(VAR_9, VAR_3->vn_mode);
   break;

  case 5:
   FUNC_8(VAR_9, sizeof(VAR_9), VAR_8, VAR_4);
   FUNC_2(VAR_9, VAR_3->flags);
   break;
  }
  VAR_10[VAR_12] = VAR_0;
  VAR_13--;
 }
}
