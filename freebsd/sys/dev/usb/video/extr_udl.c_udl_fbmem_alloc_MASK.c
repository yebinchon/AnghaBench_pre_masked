
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct udl_softc {scalar_t__ sc_fb_size; int sc_fb_copy; int sc_fb_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (scalar_t__,int ,int) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (struct udl_softc*) ;

__attribute__((used)) static void
FUNC_4(struct udl_softc *VAR_4)
{
 uint32_t VAR_5;

 VAR_5 = FUNC_3(VAR_4);
 VAR_5 = FUNC_1(VAR_5);

 if (VAR_5 == 0)
  VAR_5 = VAR_3;




 VAR_4->sc_fb_addr = FUNC_2(VAR_5);
 VAR_4->sc_fb_copy = FUNC_0(VAR_5, VAR_0, VAR_1 | VAR_2);
 VAR_4->sc_fb_size = VAR_5;
}
