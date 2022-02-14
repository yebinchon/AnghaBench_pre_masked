
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_int32 ;
typedef scalar_t__ u_int ;
typedef scalar_t__ u_char ;
typedef int tag ;
typedef int sockaddr_u ;
struct TYPE_4__ {int rflags; int mflags; int count; } ;
typedef TYPE_1__ restrict_u ;


 scalar_t__ FUNC_0 (scalar_t__*) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (scalar_t__*) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (char*,char const*,int ) ;
 int FUNC_5 () ;
 char* FUNC_6 (int ) ;
 char* FUNC_7 (int ) ;
 int FUNC_8 (int) ;
 int FUNC_9 (char*,int,char const*,char const*,...) ;
 int FUNC_10 (int *,int *,TYPE_1__*,int) ;
 char* FUNC_11 (int *) ;
 int FUNC_12 (char const*) ;

__attribute__((used)) static void
FUNC_13(
 restrict_u * VAR_3,
 int VAR_4,
 u_int VAR_5
 )
{
 const char VAR_6[] = "addr.%u";
 const char VAR_7[] = "mask.%u";
 const char VAR_8[] = "hits.%u";
 const char VAR_9[] = "flags.%u";
 char VAR_10[32];
 u_char VAR_11[VAR_1];
 int VAR_12;
 u_int32 VAR_13;
 u_int VAR_14;
 u_int VAR_15;
 sockaddr_u VAR_16;
 sockaddr_u VAR_17;
 const char * VAR_18;
 char * VAR_19;
 const char * VAR_20;
 const char * VAR_21;

 FUNC_10(&VAR_16, &VAR_17, VAR_3, VAR_4);
 VAR_15 = FUNC_0(VAR_11);
 FUNC_2(VAR_11);
 VAR_13 = 0;
 VAR_12 = 0;
 while (VAR_15 > 0) {
  if (VAR_12 < 2) {
   VAR_13 = FUNC_5() ^ (FUNC_5() << 16);
   VAR_12 = 31;
  }
  VAR_14 = (VAR_13 & 0x3) % FUNC_0(VAR_11);
  VAR_13 >>= 2;
  VAR_12 -= 2;

  while (VAR_11[VAR_14])
   VAR_14 = (VAR_14 + 1) % FUNC_0(VAR_11);


  switch (VAR_14) {

  case 0:
   FUNC_9(VAR_10, sizeof(VAR_10), VAR_6, VAR_5);
   VAR_18 = FUNC_11(&VAR_16);
   FUNC_4(VAR_10, VAR_18, FUNC_12(VAR_18));
   break;

  case 1:
   FUNC_9(VAR_10, sizeof(VAR_10), VAR_7, VAR_5);
   VAR_18 = FUNC_11(&VAR_17);
   FUNC_4(VAR_10, VAR_18, FUNC_12(VAR_18));
   break;

  case 2:
   FUNC_9(VAR_10, sizeof(VAR_10), VAR_8, VAR_5);
   FUNC_3(VAR_10, VAR_3->count);
   break;

  case 3:
   FUNC_9(VAR_10, sizeof(VAR_10), VAR_9, VAR_5);
   VAR_20 = FUNC_7(VAR_3->mflags);
   VAR_21 = FUNC_6(VAR_3->rflags);
   if ('\0' == VAR_20[0]) {
    VAR_18 = VAR_21;
   } else {
    FUNC_1(VAR_19);
    FUNC_9(VAR_19, VAR_0, "%s %s",
      VAR_20, VAR_21);
    VAR_18 = VAR_19;
   }
   FUNC_4(VAR_10, VAR_18, FUNC_12(VAR_18));
   break;
  }
  VAR_11[VAR_14] = VAR_2;
  VAR_15--;
 }
 FUNC_8((int)VAR_5);
}
