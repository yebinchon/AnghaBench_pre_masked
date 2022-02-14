
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int32_t ;
struct cs4231_softc {int sc_flags; } ;
struct cs4231_channel {scalar_t__ dir; int buffer; struct cs4231_softc* parent; } ;
typedef int kobj_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct cs4231_softc*,int ) ;
 int FUNC_1 (struct cs4231_softc*) ;
 int VAR_2 ;
 int FUNC_2 (struct cs4231_softc*) ;
 scalar_t__ FUNC_3 (struct cs4231_softc*,int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_4 (struct cs4231_softc*,int ) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;

__attribute__((used)) static u_int32_t
FUNC_7(kobj_t VAR_5, void *VAR_6)
{
 struct cs4231_softc *VAR_7;
 struct cs4231_channel *VAR_8;
 u_int32_t VAR_9, VAR_10, VAR_11;

 VAR_8 = VAR_6;
 VAR_7 = VAR_8->parent;

 FUNC_1(VAR_7);
 if ((VAR_7->sc_flags & VAR_2) != 0)
  VAR_9 = (VAR_8->dir == VAR_4) ? FUNC_0(VAR_7, VAR_1) :
      FUNC_0(VAR_7, VAR_0);
 else
  VAR_9 = (VAR_8->dir == VAR_4) ? FUNC_4(VAR_7, VAR_3) :
   FUNC_3(VAR_7, VAR_3);
 VAR_11 = FUNC_6(VAR_8->buffer);
 VAR_10 = VAR_9 - FUNC_5(VAR_8->buffer) + VAR_11;
 FUNC_2(VAR_7);

 VAR_10 %= VAR_11;
 return (VAR_10);
}
