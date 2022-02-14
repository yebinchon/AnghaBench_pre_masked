
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
typedef scalar_t__ u_int ;
struct tdfx_softc {scalar_t__ pio0; scalar_t__ pio0max; } ;
struct tdfx_pio_data {scalar_t__ port; int size; int value; int device; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,int *,int) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (scalar_t__,int ) ;
 int VAR_5 ;

__attribute__((used)) static int
FUNC_3(struct tdfx_pio_data *VAR_6)
{

 u_int8_t VAR_7;
 u_int VAR_8;
 struct tdfx_softc *VAR_9 = (struct
   tdfx_softc*)FUNC_1(VAR_5, VAR_6->device);


 if(((VAR_6->port != VAR_3) && (VAR_6->port != VAR_2) &&
  (VAR_6->port != VAR_4)) &&
  (VAR_6->port < VAR_9->pio0) && (VAR_6->port > VAR_9->pio0max))
  return -VAR_1;


 if(VAR_6->size != 1) {
  return -VAR_0;
 }


 FUNC_0(VAR_6->value, &VAR_7, sizeof(u_int8_t));
 VAR_8 = VAR_6->port;
 FUNC_2(VAR_8, VAR_7);
 return 0;
}
