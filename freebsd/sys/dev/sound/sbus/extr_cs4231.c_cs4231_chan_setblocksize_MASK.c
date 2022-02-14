
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct cs4231_softc {int sc_bufsz; int sc_dev; } ;
struct cs4231_channel {int buffer; struct cs4231_softc* parent; } ;
typedef int kobj_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int,int) ;
 int FUNC_1 (int ,int,int) ;

__attribute__((used)) static u_int32_t
FUNC_2(kobj_t VAR_1, void *VAR_2, u_int32_t VAR_3)
{
 struct cs4231_softc *VAR_4;
 struct cs4231_channel *VAR_5;
 int VAR_6, VAR_7;

 VAR_5 = VAR_2;
 VAR_4 = VAR_5->parent;

 if (VAR_3 > VAR_0)
  VAR_3 = VAR_0;
 VAR_6 = VAR_4->sc_bufsz / VAR_3;
 VAR_7 = FUNC_1(VAR_5->buffer, VAR_6, VAR_3);
 if (VAR_7 != 0)
  FUNC_0(VAR_4->sc_dev,
      "unable to block size, blksz = %d, error = %d\n",
      VAR_3, VAR_7);

        return (VAR_3);
}
