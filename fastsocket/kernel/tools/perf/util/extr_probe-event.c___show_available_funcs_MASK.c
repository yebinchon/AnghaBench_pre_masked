
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct map {int type; int dso; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (struct map*,int ) ;
 int FUNC_4 (char*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_5(struct map *VAR_3)
{
 if (FUNC_3(VAR_3, VAR_1)) {
  FUNC_4("Failed to load map.\n");
  return -VAR_0;
 }
 if (!FUNC_2(VAR_3->dso, VAR_3->type))
  FUNC_1(VAR_3->dso, VAR_3->type);

 FUNC_0(VAR_3->dso, VAR_3->type, VAR_2);
 return 0;
}
