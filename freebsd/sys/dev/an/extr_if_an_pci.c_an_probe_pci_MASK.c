
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
struct an_type {scalar_t__ an_vid; scalar_t__ an_did; int * an_name; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct an_type* VAR_2 ;
 int FUNC_0 (int ,int *) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_3)
{
 struct an_type *VAR_4;
 uint16_t VAR_5, VAR_6;

 VAR_4 = VAR_2;
 VAR_5 = FUNC_2(VAR_3);
 VAR_6 = FUNC_1(VAR_3);

 while (VAR_4->an_name != ((void*)0)) {
  if (VAR_5 == VAR_4->an_vid &&
      VAR_6 == VAR_4->an_did) {
   FUNC_0(VAR_3, VAR_4->an_name);
   return(VAR_0);
  }
  VAR_4++;
 }

 return(VAR_1);
}
