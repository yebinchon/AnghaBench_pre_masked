
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct my_type {scalar_t__ my_vid; scalar_t__ my_did; int * my_name; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 struct my_type* VAR_2 ;
 struct my_type* VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_4)
{
 struct my_type *VAR_5;

 VAR_5 = VAR_2;
 while (VAR_5->my_name != ((void*)0)) {
  if ((FUNC_2(VAR_4) == VAR_5->my_vid) &&
      (FUNC_1(VAR_4) == VAR_5->my_did)) {
   FUNC_0(VAR_4, VAR_5->my_name);
   VAR_3 = VAR_5;
   return (VAR_0);
  }
  VAR_5++;
 }
 return (VAR_1);
}
