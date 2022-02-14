
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
 scalar_t__ VAR_5 ;
 int FUNC_0 (int *,int ,int) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (scalar_t__) ;
 int VAR_6 ;

__attribute__((used)) static int
FUNC_3(struct tdfx_pio_data *VAR_7)
{

 u_int8_t VAR_8;
 u_int VAR_9;
 struct tdfx_softc *VAR_10 =
  (struct tdfx_softc*)FUNC_1(VAR_6, VAR_7->device);


 if(((VAR_7->port != VAR_4) || (VAR_7->port != VAR_3) ||
  (VAR_7->port != VAR_2) || (VAR_7->port != VAR_5)) &&
  (VAR_7->port < VAR_10->pio0) && (VAR_7->port > VAR_10->pio0max))
  return -VAR_1;


 if(VAR_7->size != 1) {
  return -VAR_0;
 }


 VAR_9 = VAR_7->port;
 VAR_8 = FUNC_2(VAR_9);
 FUNC_0(&VAR_8, VAR_7->value, sizeof(u_int8_t));
 return 0;
}
