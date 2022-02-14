
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hn_txdesc {scalar_t__ refs; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (scalar_t__*,int) ;

__attribute__((used)) static __inline void
FUNC_2(struct hn_txdesc *VAR_0)
{


 FUNC_0(VAR_0->refs > 0, ("invalid txd refs %d", VAR_0->refs));
 FUNC_1(&VAR_0->refs, 1);
}
