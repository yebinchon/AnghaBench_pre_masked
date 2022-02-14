
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ichsmb_device {scalar_t__ id; int * name; } ;
typedef int device_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int *) ;
 struct ichsmb_device* VAR_2 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_3)
{
 const struct ichsmb_device *VAR_4;

 if (FUNC_3(VAR_3) != VAR_1)
  return (VAR_0);

 for (VAR_4 = VAR_2; VAR_4->name != ((void*)0); VAR_4++) {
  if (FUNC_2(VAR_3) == VAR_4->id) {
   FUNC_0(VAR_3, VAR_4->name);
   return (FUNC_1(VAR_3));
  }
 }

 return (VAR_0);
}
