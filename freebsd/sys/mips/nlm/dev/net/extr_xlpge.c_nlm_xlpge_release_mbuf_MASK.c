
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;
typedef int uint64_t ;
struct mbuf {int dummy; } ;
typedef int intmax_t ;


 int VAR_0 ;
 int FUNC_0 (struct mbuf*) ;
 int VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*,int,int ,int ,int ,int ) ;
 int FUNC_4 (int ,void*) ;

__attribute__((used)) static void
FUNC_5(uint64_t VAR_2)
{
 uint64_t VAR_3, VAR_4, VAR_5;

 VAR_2 += (VAR_0 - 3) * sizeof(uint64_t);
 VAR_3 = FUNC_2(VAR_2);
 VAR_4 = FUNC_2(VAR_2 + sizeof(uint64_t));
 VAR_5 = FUNC_2(VAR_2 + 2 * sizeof(uint64_t));

 if (VAR_3 != 0xf00bad) {

  FUNC_3("cpu %d: ERR Tx packet paddr %jx, mag %jx, desc %jx mbuf %jx\n",
      FUNC_1(), (uintmax_t)VAR_2, (uintmax_t)VAR_3,
      (intmax_t)VAR_4, (uintmax_t)VAR_5);
  return;
 }
 FUNC_0((struct mbuf *)(uintptr_t)VAR_5);
 FUNC_4(VAR_1, (void *)(uintptr_t)VAR_4);
}
