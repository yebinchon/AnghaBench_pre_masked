
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dcons_softc {int dummy; } ;
struct dcons_buf {int magic; int version; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int,int,struct dcons_buf*,struct dcons_softc*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

void
FUNC_3(struct dcons_buf *VAR_3, int VAR_4, struct dcons_softc *VAR_5)
{
 int VAR_6, VAR_7, VAR_8;

 VAR_8 = VAR_0;
 VAR_6 = (VAR_4 - VAR_8);
 VAR_7 = VAR_6 * 3 / 4;

 FUNC_0(0, VAR_8, VAR_7, VAR_3, VAR_5);
 VAR_8 += VAR_7;
 FUNC_0(1, VAR_8, VAR_6 - VAR_7, VAR_3, VAR_5);
 VAR_3->version = FUNC_1(VAR_2);
 VAR_3->magic = FUNC_2(VAR_1);
}
