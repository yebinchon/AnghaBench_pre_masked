
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvme_controller_data {int sn; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int) ;
 int FUNC_1 (int,struct nvme_controller_data*) ;
 int FUNC_2 (char*,size_t,char*,char*,char const*) ;
 scalar_t__ FUNC_3 (char*) ;

__attribute__((used)) static void
FUNC_4(int VAR_1, char *VAR_2, size_t VAR_3, const char *VAR_4)
{
 struct nvme_controller_data VAR_5;
 char VAR_6[VAR_0 + 1];
 char *VAR_7;

 VAR_3 -= FUNC_3(VAR_2);
 VAR_2 += FUNC_3(VAR_2);
 FUNC_1(VAR_1, &VAR_5);
 FUNC_0(VAR_6, VAR_5.sn, VAR_0);
 VAR_7 = VAR_6 + VAR_0 - 1;
 while (VAR_7 > VAR_6 && *VAR_7 == ' ')
  VAR_7--;
 *++VAR_7 = '\0';
 FUNC_2(VAR_2, VAR_3, "%s%s.bin", VAR_6, VAR_4);
}
