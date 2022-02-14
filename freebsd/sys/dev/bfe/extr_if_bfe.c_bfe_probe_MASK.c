
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfe_type {scalar_t__ bfe_vid; scalar_t__ bfe_did; int * bfe_name; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct bfe_type* VAR_2 ;
 int FUNC_0 (int ,int *) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_3)
{
 struct bfe_type *VAR_4;

 VAR_4 = VAR_2;

 while (VAR_4->bfe_name != ((void*)0)) {
  if (FUNC_2(VAR_3) == VAR_4->bfe_vid &&
      FUNC_1(VAR_3) == VAR_4->bfe_did) {
   FUNC_0(VAR_3, VAR_4->bfe_name);
   return (VAR_0);
  }
  VAR_4++;
 }

 return (VAR_1);
}
