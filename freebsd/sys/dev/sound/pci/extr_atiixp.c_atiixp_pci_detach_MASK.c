
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct atiixp_info {scalar_t__ st; scalar_t__ sh; int * codec; } ;
typedef int device_t ;


 int FUNC_0 (struct atiixp_info*) ;
 int FUNC_1 (struct atiixp_info*) ;
 struct atiixp_info* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_0)
{
 int VAR_1;
 struct atiixp_info *VAR_2;

 VAR_2 = FUNC_2(VAR_0);
 if (VAR_2 != ((void*)0)) {
  if (VAR_2->codec != ((void*)0)) {
   VAR_1 = FUNC_3(VAR_0);
   if (VAR_1)
    return (VAR_1);
  }
  VAR_2->codec = ((void*)0);
  if (VAR_2->st != 0 && VAR_2->sh != 0)
   FUNC_0(VAR_2);
  FUNC_1(VAR_2);
 }
 return (0);
}
