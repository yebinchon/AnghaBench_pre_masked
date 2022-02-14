
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct ifi2creq {int dev_addr; int len; int offset; int* data; } ;
typedef int mxge_softc_t ;
struct TYPE_3__ {int data0; int data1; } ;
typedef TYPE_1__ mxge_cmd_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *,int ,TYPE_1__*) ;

__attribute__((used)) static int
FUNC_2(mxge_softc_t *VAR_6, struct ifi2creq *VAR_7)
{
 mxge_cmd_t VAR_8;
 uint32_t VAR_9;
 int VAR_10, VAR_11, VAR_12;


 if (VAR_7->dev_addr != 0xA0 &&
     VAR_7->dev_addr != 0xA2)
  return (VAR_1);
 if (VAR_7->len > sizeof(VAR_7->data))
  return (VAR_1);

 for (VAR_10 = 0; VAR_10 < VAR_7->len; VAR_10++) {
  VAR_9 = VAR_7->dev_addr << 0x8;
  VAR_9 |= VAR_7->offset + VAR_10;
  VAR_8.data0 = 0;
  VAR_8.data1 = VAR_9;
  VAR_12 = FUNC_1(VAR_6, VAR_4, &VAR_8);

  if (VAR_12 != VAR_5)
   return (VAR_2);

  VAR_8.data0 = VAR_9 & 0xff;
  VAR_12 = FUNC_1(VAR_6, VAR_3, &VAR_8);
  for (VAR_11 = 0; (VAR_12 == VAR_0) && (VAR_11 < 50); VAR_11++) {
   VAR_8.data0 = VAR_9 & 0xff;
   VAR_12 = FUNC_1(VAR_6, VAR_3, &VAR_8);
   if (VAR_12 == VAR_0)
    FUNC_0(1000);
  }
  if (VAR_12 != VAR_5)
   return (VAR_2);
  VAR_7->data[VAR_10] = VAR_8.data0;
 }
 return (0);
}
