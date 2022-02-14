
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_int ;
struct TYPE_4__ {struct TYPE_4__* link; } ;
typedef TYPE_1__ restrict_u ;


 int FUNC_0 (TYPE_1__*,int,int ) ;

__attribute__((used)) static void
FUNC_1(
 restrict_u * VAR_0,
 int VAR_1,
 u_int * VAR_2
 )
{
 for ( ; VAR_0 != ((void*)0); VAR_0 = VAR_0->link) {
  FUNC_0(VAR_0, VAR_1, *VAR_2);
  (*VAR_2)++;
 }
}
