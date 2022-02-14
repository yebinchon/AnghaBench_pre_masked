
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbuf {int dummy; } ;
struct ifnet {scalar_t__ needed_tailroom; scalar_t__ needed_headroom; } ;


 int VAR_0 ;
 struct mbuf* FUNC_0 (scalar_t__,int ) ;

__attribute__((used)) static inline struct mbuf *
FUNC_1(struct ifnet *VAR_1, int VAR_2)
{
 return FUNC_0(VAR_1->needed_headroom + VAR_2 +
    VAR_1->needed_tailroom, VAR_0);
}
