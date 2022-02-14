
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intsmb_softc {int io_res; int poll; } ;


 int FUNC_0 (struct intsmb_softc*) ;
 int VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,unsigned char) ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_3(struct intsmb_softc *VAR_4, unsigned char VAR_5, int VAR_6)
{
 unsigned char VAR_7;

 FUNC_0(VAR_4);
 VAR_7 = FUNC_1(VAR_4->io_res, VAR_0);
 VAR_7 &= 0xe0;
 VAR_7 |= VAR_5;
 VAR_7 |= VAR_2;


 if (!VAR_4->poll && !VAR_3 && !VAR_6)
  VAR_7 |= VAR_1;
 FUNC_2(VAR_4->io_res, VAR_0, VAR_7);
}
