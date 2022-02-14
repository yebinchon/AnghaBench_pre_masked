
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;
typedef int prop ;
typedef int phandle_t ;
typedef scalar_t__ pcell_t ;
typedef int freq ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char*,scalar_t__*,int) ;
 int FUNC_2 (int ,char*,void*,int) ;
 scalar_t__ FUNC_3 () ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (int ,char*) ;

__attribute__((used)) static void
FUNC_6(void)
{
 phandle_t VAR_0;
 pcell_t VAR_1, VAR_2;
 ssize_t VAR_3;






 if ((VAR_1 = FUNC_3()) == 0 ||
     (VAR_0 = FUNC_0("/soc")) == 0 ||
     FUNC_5(VAR_0, "simple-bus") == 0)
  while (1);

 VAR_1 = FUNC_4(VAR_1);

 VAR_3 = FUNC_1(VAR_0, "bus-frequency", &VAR_2, sizeof(VAR_2));
 if ((VAR_3 / sizeof(VAR_2)) == 1 && VAR_2 == 0)
  FUNC_2(VAR_0, "bus-frequency", (void *)&VAR_1, sizeof(VAR_1));
}
