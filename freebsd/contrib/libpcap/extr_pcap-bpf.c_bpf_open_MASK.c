
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int device ;



 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*) ;
 int VAR_6 ;
 int FUNC_1 (char const*,int ) ;
 int FUNC_2 (char*,int ,int,char*,char const*) ;
 int FUNC_3 (char*,int,char*,...) ;

__attribute__((used)) static int
FUNC_4(char *VAR_7)
{
 int VAR_8 = -1;
 static const char VAR_9[] = "/dev/bpf";
 int VAR_10 = 0;
 char VAR_11[sizeof "/dev/bpf0000000000"];
 static int VAR_12 = 0;
 if (!VAR_12 &&
     (VAR_8 = FUNC_1(VAR_9, VAR_2)) == -1 &&
     ((VAR_6 != 129 && VAR_6 != 128) ||
      (VAR_8 = FUNC_1(VAR_9, VAR_1)) == -1)) {
  if (VAR_6 != 128) {
   if (VAR_6 == 129)
    VAR_8 = VAR_5;
   else
    VAR_8 = VAR_4;
   FUNC_2(VAR_7, VAR_3,
       VAR_6, "(cannot open device) %s", VAR_9);
   return (VAR_8);
  }
  VAR_12 = 1;
 }

 if (VAR_12) {





  do {
   (void)FUNC_3(VAR_11, sizeof(VAR_11), "/dev/bpf%d", VAR_10++);
   VAR_8 = FUNC_1(VAR_11, VAR_2);
   if (VAR_8 == -1 && VAR_6 == 129)
    VAR_8 = FUNC_1(VAR_11, VAR_1);
  } while (VAR_8 < 0 && VAR_6 == VAR_0);
 }




 if (VAR_8 < 0) {
  switch (VAR_6) {

  case 128:
   VAR_8 = VAR_4;
   if (VAR_10 == 1) {





    FUNC_3(VAR_7, VAR_3,
        "(there are no BPF devices)");
   } else {






    FUNC_3(VAR_7, VAR_3,
        "(all BPF devices are busy)");
   }
   break;

  case 129:





   VAR_8 = VAR_5;
   FUNC_2(VAR_7, VAR_3,
       VAR_6, "(cannot open BPF device) %s", VAR_11);
   break;

  default:



   VAR_8 = VAR_4;
   FUNC_2(VAR_7, VAR_3,
       VAR_6, "(cannot open BPF device) %s", VAR_11);
   break;
  }
 }

 return (VAR_8);
}
