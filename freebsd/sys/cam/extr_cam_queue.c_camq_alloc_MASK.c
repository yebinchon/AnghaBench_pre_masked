
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct camq {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct camq*,int) ;
 int FUNC_1 (struct camq*,int ) ;
 scalar_t__ FUNC_2 (int,int ,int ) ;

struct camq *
FUNC_3(int VAR_2)
{
 struct camq *VAR_3;

 VAR_3 = (struct camq *)FUNC_2(sizeof(*VAR_3), VAR_0, VAR_1);
 if (VAR_3 != ((void*)0)) {
  if (FUNC_0(VAR_3, VAR_2) != 0) {
   FUNC_1(VAR_3, VAR_0);
   VAR_3 = ((void*)0);
  }
 }
 return (VAR_3);
}
