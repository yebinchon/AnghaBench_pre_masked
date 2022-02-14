
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int opaque_t ;
typedef int am_node ;


 int FUNC_0 (char*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_1 (int ,char*,int*,int ) ;
 int FUNC_2 (int *,int*) ;
 int VAR_2 ;
 int FUNC_3 (int ,char*,char*) ;

__attribute__((used)) static int
FUNC_4(char *VAR_3, opaque_t VAR_4)
{
  if (!FUNC_0(VAR_3, "/defaults")) {
    int VAR_5 = 0;
    am_node *VAR_6;
    VAR_6 = FUNC_1(VAR_4, VAR_3, &VAR_5, VAR_0);
    if (VAR_6 && VAR_5 < 0)
      (void)FUNC_2(VAR_6, &VAR_5);
    if (VAR_5 > 0) {
      VAR_2 = VAR_5;
      FUNC_3(VAR_1, "unionfs: could not mount %s: %m", VAR_3);
    }
    return VAR_5;
  }
  return 0;
}
