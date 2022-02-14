
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;
struct mbuf {int dummy; } ;


 int FUNC_0 (struct mbuf*) ;

__attribute__((used)) static void
FUNC_1(struct mbuf **VAR_0, uint8_t VAR_1)
{
 uint8_t VAR_2;

 for (VAR_2 = 0; VAR_2 != VAR_1; VAR_2++) {
  if (VAR_0[VAR_2] != ((void*)0)) {
   FUNC_0(VAR_0[VAR_2]);
   VAR_0[VAR_2] = ((void*)0);
  }
 }
}
