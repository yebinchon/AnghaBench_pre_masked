
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct jz4780_pic_softc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct jz4780_pic_softc*,int ,unsigned int) ;

__attribute__((used)) static inline void
FUNC_1(struct jz4780_pic_softc *VAR_2, u_int VAR_3)
{
 if (VAR_3 < 32)
  FUNC_0(VAR_2, VAR_0, (1u << VAR_3));
 else
  FUNC_0(VAR_2, VAR_1, (1u << (VAR_3 - 32)));
}
