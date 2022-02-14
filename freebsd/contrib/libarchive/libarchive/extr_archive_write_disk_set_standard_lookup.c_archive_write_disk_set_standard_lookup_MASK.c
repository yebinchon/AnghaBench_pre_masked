
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bucket {int dummy; } ;
struct archive {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct archive*,struct bucket*,int ,int ) ;
 int FUNC_1 (struct archive*,struct bucket*,int ,int ) ;
 int VAR_2 ;
 struct bucket* FUNC_2 (int ,int) ;
 int VAR_3 ;
 int FUNC_3 (struct bucket*) ;
 int VAR_4 ;
 int VAR_5 ;

int
FUNC_4(struct archive *VAR_6)
{
 struct bucket *VAR_7 = FUNC_2(VAR_2, sizeof(struct bucket));
 struct bucket *VAR_8 = FUNC_2(VAR_2, sizeof(struct bucket));
 if (VAR_7 == ((void*)0) || VAR_8 == ((void*)0)) {
  FUNC_3(VAR_7);
  FUNC_3(VAR_8);
  return (VAR_0);
 }
 FUNC_0(VAR_6, VAR_8, VAR_4, VAR_3);
 FUNC_1(VAR_6, VAR_7, VAR_5, VAR_3);
 return (VAR_1);
}
