
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
typedef int device_t ;


 int FUNC_0 (int ,int ,int,int*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 char* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (char*,char*,...) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_2, device_t VAR_3)
{
 int VAR_4;
 int VAR_5 = 0;
 u_char VAR_6;

 VAR_5 += FUNC_1(VAR_2, VAR_3);

 VAR_4 = FUNC_0(FUNC_3(VAR_2), VAR_1, 0, &VAR_6);
 if (VAR_4 == VAR_0) {
  VAR_5 += FUNC_4(" on %s master-only\n",
     FUNC_2(VAR_2));
 } else {

  FUNC_0(FUNC_3(VAR_2), VAR_1, VAR_6, ((void*)0));

  VAR_5 += FUNC_4(" on %s addr 0x%x\n",
     FUNC_2(VAR_2), VAR_6 & 0xff);
 }

 return (VAR_5);
}
