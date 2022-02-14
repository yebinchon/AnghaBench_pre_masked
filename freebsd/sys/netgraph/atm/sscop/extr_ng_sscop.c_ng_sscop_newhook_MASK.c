
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct priv {void* manage; void* lower; void* upper; } ;
typedef int node_p ;
typedef void* hook_p ;


 int VAR_0 ;
 int FUNC_0 (void*,int ) ;
 struct priv* FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (char const*,char*) ;

__attribute__((used)) static int
FUNC_3(node_p VAR_3, hook_p VAR_4, const char *VAR_5)
{
 struct priv *VAR_6 = FUNC_1(VAR_3);

 if(FUNC_2(VAR_5, "upper") == 0) {
  VAR_6->upper = VAR_4;
  FUNC_0(VAR_4, VAR_2);
 } else if(FUNC_2(VAR_5, "lower") == 0) {
  VAR_6->lower = VAR_4;
 } else if(FUNC_2(VAR_5, "manage") == 0) {
  VAR_6->manage = VAR_4;
  FUNC_0(VAR_4, VAR_1);
 } else
  return VAR_0;

 return 0;
}
