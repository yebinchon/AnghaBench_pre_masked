
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct node {scalar_t__ phandle; } ;
typedef int cell_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct node*,int ) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int ,int) ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (struct node*,int) ;
 int FUNC_4 (struct node*,char*) ;
 int VAR_3 ;

cell_t FUNC_5(struct node *VAR_4, struct node *VAR_5)
{
 static cell_t VAR_6 = 1;

 if ((VAR_5->phandle != 0) && (VAR_5->phandle != -1))
  return VAR_5->phandle;

 while (FUNC_3(VAR_4, VAR_6))
  VAR_6++;

 VAR_5->phandle = VAR_6;

 if (!FUNC_4(VAR_5, "linux,phandle")
     && (VAR_3 & VAR_1))
  FUNC_0(VAR_5,
        FUNC_1("linux,phandle",
         FUNC_2(VAR_2, VAR_6)));

 if (!FUNC_4(VAR_5, "phandle")
     && (VAR_3 & VAR_0))
  FUNC_0(VAR_5,
        FUNC_1("phandle",
         FUNC_2(VAR_2, VAR_6)));





 return VAR_5->phandle;
}
