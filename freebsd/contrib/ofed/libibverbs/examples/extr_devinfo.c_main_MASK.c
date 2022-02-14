
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct option {char* name; int has_arg; char val; } ;
struct ibv_device {int dummy; } ;


 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int,char**,char*,struct option*,int *) ;
 int FUNC_3 (struct ibv_device**) ;
 struct ibv_device** FUNC_4 (int*) ;
 char* FUNC_5 (struct ibv_device*) ;
 int VAR_0 ;
 int FUNC_6 (char*) ;
 int FUNC_7 (struct ibv_device*,int) ;
 int FUNC_8 (char*,...) ;
 int VAR_1 ;
 int FUNC_9 (char*,char*) ;
 char* FUNC_10 (int ) ;
 int FUNC_11 (int ,int *,int ) ;
 int FUNC_12 (char*) ;
 int VAR_2 ;

int FUNC_13(int VAR_3, char *VAR_4[])
{
 char *VAR_5 = ((void*)0);
 int VAR_6 = 0;
 struct ibv_device **VAR_7, **VAR_8;
 int VAR_9;
 int VAR_10 = 0;


 while (1) {
  int VAR_11;
  static struct option VAR_12[] = {
   { .name = "ib-dev", .has_arg = 1, .val = 'd' },
   { .name = "ib-port", .has_arg = 1, .val = 'i' },
   { .name = "list", .has_arg = 0, .val = 'l' },
   { .name = "verbose", .has_arg = 0, .val = 'v' },
   { }
  };

  VAR_11 = FUNC_2(VAR_3, VAR_4, "d:i:lv", VAR_12, ((void*)0));
  if (VAR_11 == -1)
   break;

  switch (VAR_11) {
  case 'd':
   VAR_5 = FUNC_10(VAR_0);
   break;

  case 'i':
   VAR_10 = FUNC_11(VAR_0, ((void*)0), 0);
   if (VAR_10 <= 0) {
    FUNC_12(VAR_4[0]);
    return 1;
   }
   break;

  case 'v':
   VAR_2 = 1;
   break;

  case 'l':
   VAR_7 = VAR_8 = FUNC_4(&VAR_9);
   if (!VAR_7) {
    FUNC_6("Failed to get IB devices list");
    return -1;
   }

   FUNC_8("%d HCA%s found:\n", VAR_9,
          VAR_9 != 1 ? "s" : "");

   while (*VAR_7) {
    FUNC_8("\t%s\n", FUNC_5(*VAR_7));
    ++VAR_7;
   }

   FUNC_8("\n");

   FUNC_3(VAR_8);

   return 0;

  default:
   FUNC_12(VAR_4[0]);
   return -1;
  }
 }

 VAR_7 = VAR_8 = FUNC_4(((void*)0));
 if (!VAR_7) {
  FUNC_6("Failed to get IB devices list");
  return -1;
 }

 if (VAR_5) {
  while (*VAR_7) {
   if (!FUNC_9(FUNC_5(*VAR_7), VAR_5))
    break;
   ++VAR_7;
  }

  if (!*VAR_7) {
   FUNC_0(VAR_1, "IB device '%s' wasn't found\n", VAR_5);
   return -1;
  }

  VAR_6 |= FUNC_7(*VAR_7, VAR_10);
 } else {
  if (!*VAR_7) {
   FUNC_0(VAR_1, "No IB devices found\n");
   return -1;
  }

  while (*VAR_7) {
   VAR_6 |= FUNC_7(*VAR_7, VAR_10);
   ++VAR_7;
  }
 }

 if (VAR_5)
  FUNC_1(VAR_5);

 FUNC_3(VAR_8);

 return VAR_6;
}
