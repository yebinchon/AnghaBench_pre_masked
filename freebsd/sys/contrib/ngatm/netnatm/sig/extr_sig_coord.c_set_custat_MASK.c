
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uni {int custat; } ;
typedef enum cu_stat { ____Placeholder_cu_stat } cu_stat ;


 int VAR_0 ;
 int FUNC_0 (struct uni*,int ,int *) ;

__attribute__((used)) static void
FUNC_1(struct uni *VAR_1, enum cu_stat VAR_2)
{
 if (VAR_1->custat != VAR_2) {
  VAR_1->custat = VAR_2;
  FUNC_0(VAR_1, VAR_0, ((void*)0));
 }
}
