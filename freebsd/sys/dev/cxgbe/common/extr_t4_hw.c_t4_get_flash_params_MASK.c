
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct flash_desc {int member_0; int member_1; int vendor_and_model_id; unsigned int size_mb; } ;
struct TYPE_2__ {unsigned int sf_size; unsigned int sf_nsec; } ;
struct adapter {TYPE_1__ params; } ;


 unsigned int FUNC_0 (struct flash_desc*) ;
 int VAR_0 ;
 int FUNC_1 (struct adapter*,char*,int,...) ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_2 (struct adapter*,int,int ,int,int*) ;
 int FUNC_3 (struct adapter*,int,int,int ,int ) ;
 int FUNC_4 (struct adapter*,int ,int ) ;

int FUNC_5(struct adapter *VAR_4)
{




 static struct flash_desc VAR_5[] = {
  { 0x00150201, 4 << 20 },
 };

 int VAR_6;
 u32 VAR_7 = 0;
 unsigned int VAR_8, VAR_9;
 unsigned int VAR_10, VAR_11 = 0;
 VAR_6 = FUNC_3(VAR_4, 1, 1, 0, VAR_2);
 if (!VAR_6)
  VAR_6 = FUNC_2(VAR_4, 3, 0, 1, &VAR_7);
 FUNC_4(VAR_4, VAR_0, 0);
 if (VAR_6 < 0)
  return VAR_6;




 for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_5); VAR_8++)
  if (VAR_5[VAR_8].vendor_and_model_id == VAR_7) {
   VAR_4->params.sf_size =
    VAR_5[VAR_8].size_mb;
   VAR_4->params.sf_nsec =
    VAR_4->params.sf_size / VAR_3;
   goto found;
  }
 VAR_9 = VAR_7 & 0xff;
 switch (VAR_9) {
 case 0x20:




  VAR_10 = (VAR_7 >> 16) & 0xff;
  switch (VAR_10) {
  case 0x14: VAR_11 = 1 << 20; break;
  case 0x15: VAR_11 = 1 << 21; break;
  case 0x16: VAR_11 = 1 << 22; break;
  case 0x17: VAR_11 = 1 << 23; break;
  case 0x18: VAR_11 = 1 << 24; break;
  case 0x19: VAR_11 = 1 << 25; break;
  case 0x20: VAR_11 = 1 << 26; break;
  case 0x21: VAR_11 = 1 << 27; break;
  case 0x22: VAR_11 = 1 << 28; break;
  }
  break;

 case 0x9d:




  VAR_10 = (VAR_7 >> 16) & 0xff;
  switch (VAR_10) {
  case 0x16: VAR_11 = 1 << 25; break;
  case 0x17: VAR_11 = 1 << 26; break;
  }
  break;

 case 0xc2:




  VAR_10 = (VAR_7 >> 16) & 0xff;
  switch (VAR_10) {
  case 0x17: VAR_11 = 1 << 23; break;
  case 0x18: VAR_11 = 1 << 24; break;
  }
  break;

 case 0xef:




  VAR_10 = (VAR_7 >> 16) & 0xff;
  switch (VAR_10) {
  case 0x17: VAR_11 = 1 << 23; break;
  case 0x18: VAR_11 = 1 << 24; break;
  }
  break;
 }







 if (VAR_11 == 0) {
  FUNC_1(VAR_4, "Unknown Flash Part, ID = %#x, assuming 4MB\n", VAR_7);
  VAR_11 = 1 << 22;
 }




 VAR_4->params.sf_size = VAR_11;
 VAR_4->params.sf_nsec = VAR_11 / VAR_3;

 found:





 if (VAR_4->params.sf_size < VAR_1)
  FUNC_1(VAR_4, "WARNING: Flash Part ID %#x, size %#x < %#x\n",
   VAR_7, VAR_4->params.sf_size, VAR_1);

 return 0;
}
