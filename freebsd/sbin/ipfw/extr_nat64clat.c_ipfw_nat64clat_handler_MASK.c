
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_2__ {scalar_t__ use_set; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;




 int VAR_1 ;

 TYPE_1__ VAR_2 ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int ,char*,char*) ;
 scalar_t__ FUNC_3 (char const*) ;
 int FUNC_4 (char const*,scalar_t__,int,char**) ;
 int FUNC_5 (char const*,scalar_t__,int,char**) ;
 int FUNC_6 (char const*,scalar_t__) ;
 int VAR_3 ;
 int FUNC_7 (int ,char const*,scalar_t__,int) ;
 int FUNC_8 (char const*,scalar_t__) ;
 int VAR_4 ;
 int FUNC_9 (char const*,scalar_t__) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_10 (char const*,char*) ;

void
FUNC_11(int VAR_7, char *VAR_8[])
{
 const char *VAR_9;
 int VAR_10;
 uint8_t VAR_11;

 if (VAR_2.use_set != 0)
  VAR_11 = VAR_2.use_set - 1;
 else
  VAR_11 = 0;
 VAR_7--; VAR_8++;

 FUNC_0("nat64clat needs instance name");
 VAR_9 = *VAR_8;
 if (FUNC_3(VAR_9) != 0) {
  if (FUNC_10(VAR_9, "all") == 0)
   VAR_9 = ((void*)0);
  else
   FUNC_1(VAR_0, "nat64clat instance name %s is invalid",
       VAR_9);
 }
 VAR_7--; VAR_8++;
 FUNC_0("nat64clat needs command");

 VAR_10 = FUNC_2(VAR_5, *VAR_8, "nat64clat command");
 if (VAR_9 == ((void*)0) && VAR_10 != 130 && VAR_10 != 129)
  FUNC_1(VAR_0, "nat64clat instance name required");
 switch (VAR_10) {
 case 131:
  VAR_7--; VAR_8++;
  FUNC_5(VAR_9, VAR_11, VAR_7, VAR_8);
  break;
 case 132:
  VAR_7--; VAR_8++;
  FUNC_4(VAR_9, VAR_11, VAR_7, VAR_8);
  break;
 case 129:
  FUNC_7(VAR_4, VAR_9, VAR_11, 1);
  break;
 case 130:
  if (VAR_9 == ((void*)0))
   FUNC_7(VAR_3, ((void*)0), VAR_11, 0);
  else
   FUNC_6(VAR_9, VAR_11);
  break;
 case 128:
  VAR_7--; VAR_8++;
  if (VAR_7 == 0) {
   FUNC_9(VAR_9, VAR_11);
   break;
  }
  VAR_10 = FUNC_2(VAR_6, *VAR_8, "stats command");
  if (VAR_10 == VAR_1)
   FUNC_8(VAR_9, VAR_11);
 }
}
