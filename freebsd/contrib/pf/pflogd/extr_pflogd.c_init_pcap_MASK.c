
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int * VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int ,int ,int,int ,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 () ;
 int VAR_9 ;
 int FUNC_8 (int ) ;

int
FUNC_9(void)
{
 VAR_7 = FUNC_5(VAR_8, VAR_9, 1, VAR_3, VAR_5);
 if (VAR_7 == ((void*)0)) {
  FUNC_1(VAR_2, "Failed to initialize: %s", VAR_5);
  return (-1);
 }

 if (FUNC_3(VAR_7) != VAR_1) {
  FUNC_1(VAR_2, "Invalid datalink type");
  FUNC_2(VAR_7);
  VAR_7 = ((void*)0);
  return (-1);
 }

 FUNC_7();

 VAR_4 = VAR_9 = FUNC_6(VAR_7);


 if (FUNC_0(FUNC_4(VAR_7), VAR_0) < 0) {
  FUNC_1(VAR_2, "BIOCLOCK: %s", FUNC_8(VAR_6));
  return (-1);
 }

 return (0);
}
