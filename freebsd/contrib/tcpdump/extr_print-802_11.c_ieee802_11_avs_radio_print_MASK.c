
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u_int ;
typedef int u_char ;
typedef int netdissect_options ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int const*,int,int,int ,int ) ;
 int VAR_0 ;

__attribute__((used)) static u_int
FUNC_3(netdissect_options *VAR_1,
                           const u_char *VAR_2, u_int VAR_3, u_int VAR_4)
{
 uint32_t VAR_5;

 if (VAR_4 < 8) {
  FUNC_1((VAR_1, "%s", VAR_0));
  return VAR_4;
 }

 VAR_5 = FUNC_0(VAR_2 + 4);
 if (VAR_5 < 8) {





  FUNC_1((VAR_1, "%s", VAR_0));
  return VAR_4;
 }

 if (VAR_4 < VAR_5) {
  FUNC_1((VAR_1, "%s", VAR_0));
  return VAR_4;
 }

 return VAR_5 + FUNC_2(VAR_1, VAR_2 + VAR_5,
     VAR_3 - VAR_5, VAR_4 - VAR_5, 0, 0);
}
