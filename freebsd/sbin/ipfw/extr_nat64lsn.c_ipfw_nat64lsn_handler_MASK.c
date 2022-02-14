
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_2__ {scalar_t__ use_set; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;





 TYPE_1__ VAR_1 ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int ,char*,char*) ;
 int FUNC_3 (char const*,scalar_t__,int,char**) ;
 int FUNC_4 (char const*,scalar_t__,int,char**) ;
 int VAR_2 ;
 scalar_t__ FUNC_5 (char const*) ;
 int FUNC_6 (char const*,scalar_t__,int,char**) ;
 int FUNC_7 (char const*,scalar_t__,int,char**) ;
 int FUNC_8 (char const*,scalar_t__) ;
 int VAR_3 ;
 int FUNC_9 (int ,int *,scalar_t__,int ) ;
 scalar_t__ FUNC_10 (char const*,char*) ;

void
FUNC_11(int VAR_4, char *VAR_5[])
{
 const char *VAR_6;
 int VAR_7;
 uint8_t VAR_8;

 if (VAR_1.use_set != 0)
  VAR_8 = VAR_1.use_set - 1;
 else
  VAR_8 = 0;
 VAR_4--; VAR_5++;

 FUNC_0("nat64lsn needs instance name");
 VAR_6 = *VAR_5;
 if (FUNC_5(VAR_6) != 0) {
  if (FUNC_10(VAR_6, "all") == 0)
   VAR_6 = ((void*)0);
  else
   FUNC_1(VAR_0, "nat64lsn instance name %s is invalid",
       VAR_6);
 }
 VAR_4--; VAR_5++;
 FUNC_0("nat64lsn needs command");

 VAR_7 = FUNC_2(VAR_2, *VAR_5, "nat64lsn command");
 if (VAR_6 == ((void*)0) && VAR_7 != 130 && VAR_7 != 129)
  FUNC_1(VAR_0, "nat64lsn instance name required");
 switch (VAR_7) {
 case 131:
  VAR_4--; VAR_5++;
  FUNC_7(VAR_6, VAR_8, VAR_4, VAR_5);
  break;
 case 132:
  VAR_4--; VAR_5++;
  FUNC_6(VAR_6, VAR_8, VAR_4, VAR_5);
  break;
 case 129:
  VAR_4--; VAR_5++;
  FUNC_3(VAR_6, VAR_8, VAR_4, VAR_5);
  break;
 case 130:
  if (VAR_6 == ((void*)0))
   FUNC_9(VAR_3, ((void*)0), VAR_8, 0);
  else
   FUNC_8(VAR_6, VAR_8);
  break;
 case 128:
  VAR_4--; VAR_5++;
  FUNC_4(VAR_6, VAR_8, VAR_4, VAR_5);
 }
}
