
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct priv {int * sscf; } ;
typedef int node_p ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,struct priv*) ;
 int FUNC_1 (struct priv*,int ) ;
 struct priv* FUNC_2 (int,int ,int) ;
 int * FUNC_3 (int ,int *) ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_4(node_p VAR_5)
{
 struct priv *VAR_6;

 VAR_6 = FUNC_2(sizeof(*VAR_6), VAR_1, VAR_2 | VAR_3);

 if ((VAR_6->sscf = FUNC_3(VAR_5, &VAR_4)) == ((void*)0)) {
  FUNC_1(VAR_6, VAR_1);
  return (VAR_0);
 }

 FUNC_0(VAR_5, VAR_6);

 return (0);
}
