
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfe_type {scalar_t__ vid_id; scalar_t__ dev_id; int * name; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 struct nfe_type* VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_3)
{
 struct nfe_type *VAR_4;

 VAR_4 = VAR_2;

 while (VAR_4->name != ((void*)0)) {
  if ((FUNC_2(VAR_3) == VAR_4->vid_id) &&
      (FUNC_1(VAR_3) == VAR_4->dev_id)) {
   FUNC_0(VAR_3, VAR_4->name);
   return (VAR_0);
  }
  VAR_4++;
 }

 return (VAR_1);
}
