
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct sense_header_scsi {int ascq; int asc; int sense_key; } ;


 int FUNC_0 (char*,int ,int ,int ) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int const*,unsigned int,struct sense_header_scsi*) ;

__attribute__((used)) static void FUNC_3(const uint8_t *VAR_0,
 unsigned VAR_1, uint8_t *VAR_2, uint8_t *VAR_3, uint8_t *VAR_4)
{
 struct sense_header_scsi VAR_5;

 FUNC_1("IN\n");

 *VAR_2 = 0;
 *VAR_4 = 0;
 *VAR_3 = 0;

 if (FUNC_2(VAR_0, VAR_1, &VAR_5)) {
  *VAR_2 = VAR_5.sense_key;
  *VAR_3 = VAR_5.asc;
  *VAR_4 = VAR_5.ascq;
 }

 FUNC_0("sense_key: %x asc: %x ascq: %x\n", *VAR_2, *VAR_3, *VAR_4);

 FUNC_1("OUT\n");
}
