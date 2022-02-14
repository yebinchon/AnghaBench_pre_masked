
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ,size_t) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int,char*,size_t) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,char*,int ) ;

__attribute__((used)) static int FUNC_5(int VAR_3, char *VAR_4, size_t VAR_5)
{
 int VAR_6;
 FUNC_0(VAR_4, 0, VAR_5);
 if (FUNC_2(VAR_3, VAR_4, VAR_5-1) >= 0) {
  FUNC_1(VAR_4);
  FUNC_3(VAR_4);
  VAR_6 = 0;
 } else {
  FUNC_4(VAR_1, "Read %s Failed\n", VAR_2);
  VAR_6 = -VAR_0;
 }
 return VAR_6;
}
