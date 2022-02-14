
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct zyd_softc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct zyd_softc*,int ,int) ;

__attribute__((used)) static int
FUNC_1(struct zyd_softc *VAR_3, uint32_t VAR_4)
{
 int VAR_5;

 FUNC_0(VAR_3, VAR_2, (VAR_4 >> 16) & 0xff);
 FUNC_0(VAR_3, VAR_1, (VAR_4 >> 8) & 0xff);
 FUNC_0(VAR_3, VAR_0, (VAR_4 >> 0) & 0xff);
fail:
 return (VAR_5);
}
