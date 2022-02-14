
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32 ;


 int VAR_0 ;
 int FUNC_0 (char const*,int ) ;
 int FUNC_1 (char const**,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,char*,char const*) ;

__attribute__((used)) static u_int32
FUNC_3(
 const char * VAR_4
 )
{
 const char * VAR_5;
 u_int32 VAR_6;
 u_int32 VAR_7;

 VAR_7 = FUNC_0(VAR_4, VAR_3);
 if (VAR_7 != 0)
  return VAR_7;

 VAR_5 = VAR_4;
 VAR_6 = FUNC_1(&VAR_5, VAR_1);
 VAR_7 = FUNC_0(VAR_5, VAR_2);

 if (VAR_7)
  return VAR_7 << VAR_6;
 else
  FUNC_2(VAR_0, "logconfig: '%s' not recognized - ignored",
   VAR_4);

 return 0;
}
