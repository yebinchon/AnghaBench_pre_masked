
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ gint ;
typedef int GtkTreeViewColumn ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int * FUNC_1 (int ,scalar_t__) ;
 int VAR_1 ;

__attribute__((used)) static gint FUNC_2(GtkTreeViewColumn * VAR_2)
{
 gint VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  GtkTreeViewColumn *VAR_4;

  VAR_4 = FUNC_1(FUNC_0(VAR_1), VAR_3);
  if (VAR_4 == VAR_2)
   return VAR_3;
 }

 return -1;
}
