
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adreq {int adr_cmd; char* adr_data; int adr_datasize; } ;




 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (char*,char) ;

__attribute__((used)) static void
FUNC_2(const struct adreq *VAR_1)
{



 switch (VAR_1->adr_cmd) {
 case 128:
 case 129:




  if (VAR_1->adr_data[VAR_1->adr_datasize - 1] != '\0' ||
      FUNC_1(VAR_1->adr_data, '\0') !=
      (const char *)VAR_1->adr_data + VAR_1->adr_datasize - 1) {
   FUNC_0(VAR_0,
       "Invalid file name received.");
  }
  break;
 }
}
