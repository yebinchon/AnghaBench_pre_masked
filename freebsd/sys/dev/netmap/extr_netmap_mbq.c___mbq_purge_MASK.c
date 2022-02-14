
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbuf {int dummy; } ;
struct mbq {int dummy; } ;


 int FUNC_0 (struct mbuf*) ;
 struct mbuf* FUNC_1 (struct mbq*) ;
 struct mbuf* FUNC_2 (struct mbq*) ;

__attribute__((used)) static void FUNC_3(struct mbq *VAR_0, int VAR_1)
{
    struct mbuf *VAR_2;

    for (;;) {
        VAR_2 = VAR_1 ? FUNC_2(VAR_0) : FUNC_1(VAR_0);
        if (VAR_2) {
            FUNC_0(VAR_2);
        } else {
            break;
        }
    }
}
