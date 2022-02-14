
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned char*,int) ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (unsigned char*,int) ;
 int FUNC_3 (char const*,int ,int ) ;
 size_t FUNC_4 (int,unsigned char*,int) ;

__attribute__((used)) static int FUNC_5(const char *VAR_3)
{
 unsigned char VAR_4[VAR_0];
 int VAR_5;
 size_t VAR_6;

 VAR_5 = FUNC_3(VAR_3, VAR_1, 0);
 if (VAR_5<0)
  return -1;
 VAR_6 = FUNC_4(VAR_5, VAR_4, sizeof(VAR_4));
 FUNC_1(VAR_5);
 if (VAR_6 != sizeof(VAR_4))
  return -1;
 FUNC_0(VAR_4, sizeof(VAR_4));
 FUNC_2(VAR_4, sizeof(VAR_4));
 VAR_2 = 1;
 return 0;
}
